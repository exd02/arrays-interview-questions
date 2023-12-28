#include <iostream>
#include <vector>
#include <set>

template <typename T>
void printArray(const T& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
}

    static void IntersectionOfTwoArrays (int n1[], int s1, int n2[], int s2) {
        std::set<int> arrIntersec;

        for (int i = 0; i < s1; i++) {
            arrIntersec.insert(n1[i]);
        }

        for (int i = 0; i < s2; i++) {
            auto it = arrIntersec.find(n2[s2]);
            if (it != arrIntersec.end()) {
                arrIntersec.erase(it);
            }
        }

        std::vector<int> v(arrIntersec.begin(), arrIntersec.end());
        printArray(v);
    }

    void UnionOfTwoArrays(int n1[], int s1, int n2[], int s2) {
        std::set<int> arrUnion;

        for (int i = 0; i < s1; i++) {
            arrUnion.insert(n1[i]);
        }

        for (int i = 0; i < s2; i++) {
            arrUnion.insert(n2[i]);
        }

        std::vector<int> v(arrUnion.begin(), arrUnion.end());
        std::cout << "Union: ";
        printArray(v);
    }

int main () {
    int n1[] = { 1, 3, 4, 5, 7 };
    int s1 = sizeof(n1) / sizeof(int);

    int n2[] = { 2, 3, 5, 6 };
    int s2 = sizeof(n2) / sizeof(int);
    
    std::cout << "---------------------------------------------------------------\n";
    std::cout << "08 - Union and Intersection of two sorted arrays\n";
    
    std::cout << "Array 1: ";
    printArray(n1);

    std::cout << "Array 2: ";
    printArray(n2);

    std::cout << "Intersection: ";
    IntersectionOfTwoArrays(n1, s1, n2, s2);

    std::cout << "Union: ";
    UnionOfTwoArrays(n1, s1, n2, s2);
    std::cout << "---------------------------------------------------------------\n\n\n";
    
    return 0;
}