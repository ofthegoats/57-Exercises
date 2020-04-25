main :: IO()

main = do
    putStrLn "What is the verb? "
    verb <- getLine
    putStrLn "What is the adjective? "
    adj <- getLine
    putStrLn "What is the noun? "
    noun <- getLine
    putStrLn "What is the adverb? "
    adv <- getLine
    putStrLn("Do you " ++ verb ++ " your " ++ adj ++ " " ++ noun ++ " " ++ adv ++ "? That's hilarious!")