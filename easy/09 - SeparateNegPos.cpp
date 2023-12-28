#include <iostream>
#include <vector>

template <typename T>
void printArray(const T& numbers) {
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

void movePositiveToRight(int numbers[], int size) {
    int i = 0, c = size-1;

    while (i <= c-1) {

        if (numbers[i] > 0) {
            while (numbers[c] > 0) {
                c--;
            }
            swap(numbers[i], numbers[c--]);
        }
        
        i++;
    }
}

int main () {
    int numbers[] = { 2, 3, -12, 11, -13, -5, 6, -7, 5, -3, -6 , -3, -3, -5, 1};
    int size = sizeof(numbers) / sizeof(int);
    
    std::cout << "---------------------------------------------------------------\n";
    std::cout << "07 - Move all the negative elements to one side of the array\n";
    
    printArray(numbers);
    movePositiveToRight(numbers, size);
    printArray(numbers);
    std::cout << "---------------------------------------------------------------\n\n\n";

    return 0;
}