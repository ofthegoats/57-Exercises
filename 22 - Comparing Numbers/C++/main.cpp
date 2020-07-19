#include <algorithm>
#include <iostream>

template <int Size> int highest_intarr(int (&arr)[Size]) {
    int h = arr[0]; // not checking because maxsize is a thing in main()
    for (int i : arr) {
        if (i > h)
            h = i;
    }
    return h;
}

template <int Size> bool hasduplicates_intarr(int (&arr)[Size]) {
    std::sort(arr, arr + Size);
    for (int i = 0; i < Size - 1; i++) {
        if (arr[i] == arr[i + 1])
            return true;
    }
    return false;
}

int main() {
    constexpr int maxsize = 3;
    int numbers[maxsize];

    for (int i = 0; i < maxsize; i++) {
        std::cout << "Enter a number: ";
        std::cin >> numbers[i];
    }

    if (hasduplicates_intarr(numbers)) {
        std::cout << "There are duplicates." << std::endl;
        return 0;
    } else {
        std::cout << "The largest number is " << highest_intarr(numbers)
                  << std::endl;
    }

    return 0;
}
