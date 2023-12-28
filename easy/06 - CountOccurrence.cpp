#include <iostream>

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

int countOccurrence(int numbers[], int size, const int k) { 
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] == k)
            count++;
    }
    return count;
}

int main () {
    int numbers[] = { 0, 2, 5, 4, 9, 3, 6, 7, 11, 20, 1, 0, 0 };
    int size = sizeof(numbers) / sizeof(int);
    

    std::cout << "---------------------------------------------------------------\n";
    int k=0;
    std::cout << "06 - Find the occurrency of a integer K in a array (K="<< k <<")\n";
    std::cout << "Array: ";
    printArray(numbers);
    std::cout << "Occurrences of K(" << k << ") in the given array: " << countOccurrence(numbers, size, 0) << "\n";
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}