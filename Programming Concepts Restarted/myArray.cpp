#include "myArray.h"

//-------------------------------------------------------------------------------|
// -- > PRIVATE METHODS
//-------------------------------------------------------------------------------|

void IntArray::generateRandomElements() {
        for (int i = 0; i < size; i++) {
                ptrArray[i] = rand() % 100 + 1;
        }
}

void IntArray::generateSortedAscendingElements() {
        for (int i = 0; i < size; i++) {
                ptrArray[i] = i + 1;
        }
}

void IntArray::generateSortedDescendingElements() {
        for (int i = 0; i < size; i++) {
                ptrArray[i] = size - i;
        }
}

//-------------------------------------------------------------------------------|
// -- > NON-STATIC PUBLIC METHODS
//-------------------------------------------------------------------------------|

IntArray::IntArray(const int size) {
        this->size = size;
        ptrArray = new int[size];
        std::cout << "Allocated array of " << sizeof(ptrArray) << " bits at " << ptrArray << "\n\n\n";
}

IntArray::IntArray(const int size, const int generateElementsAs) {
        this->size = size;
        ptrArray = new int[size];
        std::cout << "Allocated array of " << sizeof(ptrArray) << " bits at " << ptrArray << "\n\n\n";

        switch (generateElementsAs) {
        case RANDOM:
                generateRandomElements();
                break;
        case ASCENDING:
                generateSortedAscendingElements();
                break;
        case DESCENDING:
                generateSortedDescendingElements();
                break;
        }
}

IntArray::~IntArray() {
        std::cout << "\n\nDeallocating array at " << ptrArray << "\n";
        delete[] ptrArray;
}

const int IntArray::getInt() {
        return size;
}

const int IntArray::getElement(const int fromPos) {
        if (ptrArray != nullptr) {
                return ptrArray[fromPos];
        }
        else {
                std::cout << "!! An attempt to access random memory has been prevented, this is because ptrArray is null.\n";
        }
}

void IntArray::setArray(int* ptrNewArray) {
        if (ptrNewArray == nullptr) {
                std::cout << "!! Warning: ptrArray has been set to null, all methods accessing ptrArray are now locked until no longer null\n";
        }
        ptrArray = ptrNewArray;
}

int* IntArray::getArray() {
        return ptrArray;
}

