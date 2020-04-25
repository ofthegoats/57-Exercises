main :: IO()

main = do
    print("How many people? ")
    noPeople <- readLn :: IO Int
    print("How many pizzas? ")
    noPizza <- readLn :: IO Int
    print("How many slices per pizza? ")
    noSlices <- readLn :: IO Int

    let (slicesPer, slicesLeft) = divMod (noPizza * noSlices) noPeople

    print(show noPeople ++ " people with " ++ show noPizza ++ " pizzas, each of " ++ show noSlices)
    print("Each person gets " ++ show slicesPer ++ " slices of pizza.")
    print("There are " ++ show slicesLeft ++ " leftover pieces.")