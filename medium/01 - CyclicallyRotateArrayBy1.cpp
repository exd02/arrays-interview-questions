#include <iostream>

template <typename T>
static void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

template <typename T>
void cyclicallyRotateArrByOne(T& arr, const int size) {
    auto last = arr[size-1];
    for (int i=size-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

int main () {
    int numbers[] = {2, 3, 4, 5, 1};
    int size = sizeof(numbers) / sizeof(int);

    std::cout << "---------------------------------------------------------------\n";
    std::cout << "01 - 	Write a program to cyclically rotate an array by one: \n";
    std::cout << "Array: ";
    printArray(numbers);
    
    cyclicallyRotateArrByOne(numbers, size);
    std::cout << "Cyclically rotated array by one: ";
    printArray(numbers);
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}