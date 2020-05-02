main :: IO()

main = do
    putStrLn "How many euros are you exchaging?"
    nEUR <- readLn :: IO Float
    putStrLn "What is the exchange rate?"
    rate <- readLn :: IO Float

    putStrLn (show nEUR ++ " euros at a rate of " ++ show rate ++ " is " ++ show (nEUR * rate) ++ " pounds.")