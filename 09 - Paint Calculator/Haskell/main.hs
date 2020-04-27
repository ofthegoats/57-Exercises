main :: IO()

main = do
    print "What is the width of the ceiling in feet? "
    w <- readLn :: IO Float
    print "What is the length of the ceiling in feet? "
    l <- readLn :: IO Float

    putStrLn ("You will require " ++ show (ceiling ((l * w)/ 350)) ++ " gallons of paint to cover " ++ show (l * w) ++ " square feet.")