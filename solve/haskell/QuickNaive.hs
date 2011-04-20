quicksort :: Ord a => [a] -> [a]
quicksort [] = [] 
quicksort (x:xs) = quicksort lower ++ [x] ++ quicksort greater 
    where lower = filter (<=x) xs
          greater = filter (>x) xs
