main :: IO()
main = do
    putStrLn "What is the input string? "
    str <- getLine
    putStrLn (str ++ " has " ++ show(length(str)) ++ " characters")