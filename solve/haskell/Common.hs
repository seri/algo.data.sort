module Common where

import System (getArgs, getProgName)
import IO

skeleton :: ([Int] -> [Int]) -> IO ()
skeleton sorter = do 
    app <- getProgName
    arg <- getArgs
    if length arg < 1
        then error $ "Usage: " ++ app ++ " <input-file> [output-file]\n"
        else do
    hIn <- openFile (head arg) ReadMode
    content <- hGetContents hIn 
    let a :: [Int] 
        n :: Int 
        nums :: [Int] 
        nums = map read . words $ content
        n = head nums
        a = tail nums
    hOut <- if length arg > 1
        then openFile (head $ tail arg) WriteMode
        else return stdout
    hPutStrLn hOut $ show $ length a
    hPutStrLn hOut $ unwords . map show . sorter $ a
    hClose hIn
    hClose hOut
