#include <iostream>
#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

int findMin(int numbers[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (numbers[i] <= min)
            min = numbers[i];
    }

    return min;
}

int findMax(int numbers[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (numbers[i] >= max)
            max = numbers[i];
    }

    return max;
}

int main () {
    int numbers[] = { 0, 2, 5, 4, 9, 3, 6, 7, 11, 20, 1, 0, 0 };
    int size = sizeof(numbers) / sizeof(int);

    std::cout << "---------------------------------------------------------------\n";
    std::cout << "02 - Find the minimum and maximum element in an array: \n";
    std::cout << "Array: ";
    printArray(numbers);
    std::cout << "Min: " << findMin(numbers, size) << "\n";
    std::cout << "Max: " << findMax(numbers, size) << "\n";
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}