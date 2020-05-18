main :: IO()
getNum :: String -> IO Float

getNum s = do
    putStrLn("What is the " ++ s ++ "? ")
    n <- readLn :: IO Float
    return n

main = 
    let final principal rate time number = principal * (1 + rate/100 / number) ** (number * time)
    in do
        p <- getNum "principal amount"
        r <- getNum "rate"
        t <- getNum "number of years"
        n <- getNum "number of times the interest is compounded per year"
        putStrLn("£" ++ show p ++ " invested at " ++ show r ++ " for " ++ show t ++ " years compounded " ++ show n ++ " times per year is £" ++ show(final p r t n))