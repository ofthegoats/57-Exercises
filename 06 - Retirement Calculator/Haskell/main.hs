import Data.Time.Calendar
import Data.Time.Clock

main :: IO()

main = do
    now <- getCurrentTime
    let (year, month, day) = toGregorian $ utctDay now

    print "How old are you? "
    agenow <- readLn :: IO Int
    print "At what age would you like to retire? "
    retireage <- readLn :: IO Int

    print("You have " ++ show (retireage - agenow) ++  " years left until you can retire.")
    print("It's " ++ show year ++ ", so you can retire in " ++ show ( fromIntegral year + (retireage - agenow)))