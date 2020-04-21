main :: IO()

main = do
    putStrLn "What is the first number? "
    n1 <- getLine
    
    putStrLn "What is the second number? "