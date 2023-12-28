#include <iostream>
#include <vector>

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

// the best approach to this kinda of array is countsort
static void countSort(int numbers[], int size, const int maxElement) {
    std::vector<int> countArray(maxElement + 1, 0);

    // fill the count array
    // the count array stores how many times each element appear in the original vector
    // example:
    // in the given array { 2, 2, 2, 1, 0, 1, 1, 0, 0, 2, 2, 2, 0, 0 } there's 5x zeros , 3x ones, and 6x twos
    // so the countArray's gonna be {5, 3, 6} (the index 0 is equals to 5 bcause the value 0 appears 5x times in the array...)
    for (int i = 0; i < size; i++) {
        countArray[numbers[i]]++;
    }

    // now build the sorted array
    int x = 0;
    for (int i = 0; i <= maxElement; i++) {
        do {
            numbers[x++] = i;
            countArray[i]--;
        } while (countArray[i] > 0);
        
    }
}

int main () {
    int numbers[] = { 2, 2, 2, 1, 0, 1, 1, 0, 0, 2, 2, 2, 0, 0 };
    int size = sizeof(numbers) / sizeof(int);
    
    std::cout << "---------------------------------------------------------------\n";
    std::cout << "05 - Sort the array of 0s, 1s, and 2s\n";

    std::cout << "Original array: ";
    printArray(numbers);
    
    countSort(numbers, size, 2);
    std::cout << "Sorted array: ";
    printArray(numbers);
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}