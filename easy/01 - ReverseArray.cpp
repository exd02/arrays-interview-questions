#include <iostream>

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

void reverseArray(int numbers[], int size) {
    int aux = 0;
    for (int i = 0, k = size-1; i < size/2; i++, k--) {
        aux = numbers[k];
        numbers[k] = numbers[i];
        numbers[i] = aux;
    }
}

int main () {
    int numbers[] = { 0, 2, 5, 4, 9, 3, 6, 7, 11, 20, 1, 0, 0 };
    int size = sizeof(numbers) / sizeof(int);

    std::cout << "---------------------------------------------------------------\n";
    std::cout << "01 - Write a program to reverse the array: \n";
    std::cout << "Array: ";
    printArray(numbers);
    
    reverseArray(numbers, size);
    std::cout << "Reversed Array: ";
    printArray(numbers);
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}