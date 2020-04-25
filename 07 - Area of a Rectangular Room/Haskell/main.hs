main :: IO()
area :: Float -> Float -> Float

area l w = l * w

main = do
    print ("What is the length of the room in feet? ")
    l <- readLn :: IO Float
    print ("What is the width of the room in feet? ")
    w <- readLn :: IO Float

    print ("The area is")
    print (show (area l w) ++ " square feet")
    print (show (area l w * 0.09290304) ++ " square metres")