split :: [a] -> ([a], [a])
split xs = split' xs xs []
    where split' :: [a] -> [a] -> [a] -> ([a], [a])
          split' [] ys zs = (reverse zs, ys)
          split' [x] ys zs = (reverse zs, ys)
          split' (x1:x2:xs) (y1:ys) zs = split' xs ys (y1:zs)

merge :: Ord a => [a] -> [a] -> [a]
merge [] ys = ys
merge xs [] = xs
merge xs@(x:xr) ys@(y:yr) = if x < y then (x:(merge xr ys))
                                     else (y:(merge xs yr))

mergesort :: Ord a => [a] -> [a]
mergesort [] = []
mergesort [x] = [x]
mergesort xs = merge (mergesort l) (mergesort r)
    where (l,r) = split xs
