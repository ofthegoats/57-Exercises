main :: IO()

main = do
    putStrLn "What is the quote? "
    quote <- getLine
    putStrLn "Who said it? "
    author <- getLine
    putStrLn (author ++ " says " ++ "\"" ++ quote ++ ".\"")