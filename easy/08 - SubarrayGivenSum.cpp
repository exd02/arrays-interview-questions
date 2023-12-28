#include <iostream>
#include <vector>

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

void sumBtwIndexes(int numbers[], int size, const int targetSum) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = numbers[i];

        for (int j = i+1; j < size; j++) {
            if (numbers[i] == 0) break;

            sum += numbers[j];

            if (sum > targetSum) break;
            else if (sum == targetSum) {
                std::cout << "Sum found between indexes " << i << " and " << j << "\n";
                break;
            }
        }
    }
}

int main () {
    int numbers[] = { 0, 2, 5, 4, 9, 3, 6, 7, 11, 20, 1, 0, 0 };
    int size = sizeof(numbers) / sizeof(int);
    
    std::cout << "---------------------------------------------------------------\n";
    int k=21;
    std::cout << "06 - Find subarray with the given sum (" << k << ")\n";
    printArray(numbers);
    sumBtwIndexes(numbers, size, k);
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}