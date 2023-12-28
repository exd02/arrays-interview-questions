#include <iostream>

template <typename T>
static void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

void swap(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

void bubbleSort(int numbers[], int size) {
    bool hadSwap = true;

    while (hadSwap) {
        hadSwap = false;
        for (int i = 0; i < size - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                swap(numbers[i], numbers[i + 1]);
                hadSwap = true;
            }
        }

        if (!hadSwap) {
            break;
        }
    }
}

int findKthSmallestElement(int numbers[], int size, int k) {
    // We sort the array
    bubbleSort(numbers, size);

    // pick the Kth smallest element
    return numbers[k-1];
}

int findKthLargestElement(int numbers[], int size, int k) {
    // We sort the array
    bubbleSort(numbers, size);

    // pick the Kth largest element
    return numbers[size - k];
}

int main () {
    int numbers[] = { 0, 2, 5, 4, 9, 3, 6, 7, 11, 20, 1, 0, 0 };
    int size = sizeof(numbers) / sizeof(int);
    int k=3;

    std::cout << "---------------------------------------------------------------\n";
    std::cout << "03 - Find the Kth largest/smalest number (K=" << k <<")\n";
    std::cout << "Array: ";
    printArray(numbers);
    std::cout << "Sorted Array: ";
    bubbleSort(numbers, size);
    printArray(numbers);

    std::cout << "Kth Smallest: " << findKthSmallestElement(numbers, size, k) << "\n";
    std::cout << "Kth Largest: " << findKthLargestElement(numbers, size, k) << "\n";
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}