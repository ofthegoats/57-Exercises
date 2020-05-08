main :: IO()

main = do
    putStrLn "Enter the principal: "
    p <- readLn :: IO Float
    putStrLn "Enter the rate of interest: "
    r <- readLn :: IO Float
    putStrLn "Enter the number of years: "
    t <- readLn :: IO Float

    putStrLn("After " ++ show t ++ " years at " ++ show r ++ "%, the investment will be worth £" ++ show (p * (1 + r/100 * t)))