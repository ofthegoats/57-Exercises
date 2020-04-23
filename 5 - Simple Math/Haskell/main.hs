-- get a number
    -- get an input
    -- sending it over as a number

main :: IO()

main = do
    print "What is the first number? "
    a <- readLn :: IO Float
    print "What is the second number? "
    b <- readLn :: IO Float

    print(show a  ++ " + " ++ show b ++ " = " ++ show (a+b))
    print(show a  ++ " - " ++ show b ++ " = " ++ show (a-b))
    print(show a  ++ " * " ++ show b ++ " = " ++ show (a*b))
    print(show a  ++ " / " ++ show b ++ " = " ++ show (a/b))