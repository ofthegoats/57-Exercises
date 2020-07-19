def isanagram(word1, word2):
    if len(word1) != len(word2):
        return False
    if all([letter in word2 for letter in word1]):
        return True
    return False


def main():
    print("Enter two words and I'll tell you if they are anagrams.")
    word1 = input("Enter the first word: ")
    word2 = input("Enter the second word: ")

    if isanagram(word1, word2):
        print('"{}" and  "{}" are anagrams.'.format(word1, word2))
    else:
        print('"{}" and  "{}" are not anagrams.'.format(word1, word2))


if __name__ == "__main__":
    main()
