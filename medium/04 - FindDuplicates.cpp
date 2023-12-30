#include <iostream>
#include <unordered_map>

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

template <typename T>
void printRepeatedNumbers(T& numbers, const int size) {
    std::cout << "Repeated numbers: ";
    
    std::unordered_map<int,int> uMap;
    
    for (const int n : numbers) {
        uMap[n]++;
    }
    
    for (const auto& pair : uMap) {
        if (pair.second > 1)
        std::cout << pair.first << " ";
    }

    std::cout << "\n";
}

int main () {
    int numbers[] = {1, 2, 3, 6, 3, 6, 1};
    int size = sizeof(numbers) / sizeof(int);

    std::cout << "---------------------------------------------------------------\n";
    int k=6;
    std::cout << "01 - 	Find duplicates in O(n) time and O(1) extra space: \n";
    std::cout << "Array: ";
    printArray(numbers);
    
    printRepeatedNumbers(numbers, size);
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}