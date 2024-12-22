#pragma once

#include <cstdlib>
#include <iostream>

//Identifiers
const enum {
        //Generate elements as ... identifiers:
        RANDOM = 1,
        ASCENDING,
        DESCENDING,
};

class IntArray {
private:
        int size;
        int* ptrArray;

        void generateRandomElements();
        void generateSortedAscendingElements();
        void generateSortedDescendingElements();

public:
        IntArray(const int size);
        IntArray(const int size, const int generateElementsAs);
        ~IntArray();
        const int getInt();
        const int getElement(const int fromPos);
        void setArray(int* ptrNewArray);
        int* getArray();

//-------------------------------------------------------------------------------|
// -- > STATIC METHODS
//-------------------------------------------------------------------------------|

        static void printArray(const int size, int* array) {
                if (array != nullptr) {
                        for (int i = 0; i < size; i++) {
                                std::cout << array[i] << ", ";
                        }
                        std::cout << "\n";
                }
                else {
                        std::cout << "!! An attempt to access random memory has been prevented, this is because the passed Array memory address is null.\n";
                }
        }
};