#include <iostream>

bool isanagram(std::string word1, std::string word2) {
    if (word1.size() != word2.size())
        return false;
    for (char letter : word1)
        if (word2.find(letter) == std::string::npos)
            return false;
    return true;
}

int main() {
    std::string word1, word2;
    std::cout << "Enter two strings and I'll tell you if they are anagrams:"
              << std::endl;
    std::cout << "Enter the first word: ";
    std::cin >> word1;
    std::cout << "Enter the second word: ";
    std::cin >> word2;

    if (isanagram(word1, word2)) {
        std::cout << "\"" << word1 << "\""
                  << " and "
                  << "\"" << word2 << "\""
                  << " are anagrams" << std::endl;
    } else {
        std::cout << "\"" << word1 << "\""
                  << " and "
                  << "\"" << word2 << "\""
                  << " are not anagrams" << std::endl;
    }

    return 0;
}
