#include <iostream>

template <typename T>
static void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

template <typename T>
int findMissingInt(T& arr, const int size) {
    // example
    // {1, 2, 3, 4, 5, 6, 7, 8} totalSum
    // {1, 2, 3, 4,    6, 7, 8} arraySum (we have some missing number)
    // result = total - array
    int totalSum = 0;
    for (int i=1; i<=size+1; i++) {
        totalSum += i;
    }

    int arraySum = 0;
    for (const int n : arr) {
        arraySum += n;
    }

    return (totalSum - arraySum);
}

int main () {
    int numbers[] = {1, 2, 3, 5};
    int size = sizeof(numbers) / sizeof(int);

    std::cout << "---------------------------------------------------------------\n";
    std::cout << "02 - 	Find the missing integer: \n";
    std::cout << "Array: ";
    printArray(numbers);
    
    std::cout << "Missing integer: " << findMissingInt(numbers, size) << "\n";
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}