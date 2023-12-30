#include <iostream>

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

template <typename T>
int countPairsWithGivenSum(T& numbers, const int size, const int k) {
    int pairs = 0;
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            // std::cout << "[" << i << "] + [" << j << "] ====> " << numbers[i] << " + " <<  numbers[j] << " = " << numbers[i]+numbers[j] << "\n";
            if (numbers[i] + numbers[j] == k) pairs++;
        }
    }

    return pairs;
}

int main () {
    int numbers[] = {1, 5, 7, -1};
    int size = sizeof(numbers) / sizeof(int);

    std::cout << "---------------------------------------------------------------\n";
    int k=6;
    std::cout << "01 - 	Count pairs with given sum (k=" << k << "): \n";
    std::cout << "Array: ";
    printArray(numbers);
    
    std::cout << "Pairs: " << countPairsWithGivenSum(numbers, size, k) << "\n";
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}