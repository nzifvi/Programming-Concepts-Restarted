#pragma once

#include <iostream>
#include <thread>
#include <chrono>

class Week3WS {
private:
public:
        //Works :)
        static bool evaluateArrayEquivalency(const int arraySize1, const int* array1, const int arraySize2, const int* array2) {
                if (arraySize1 != arraySize2) {
                        std::cout << "! Arrays do not have an equivalent size, arrays are not equivalent by default\n";
                        return false;
                }
                else {
                        int ptr = 0;
                        while (ptr < arraySize1 && array1[ptr] == array2[ptr]) {
                                std::cout << "array1: " << array1[ptr] << " array2: " << array2[ptr] << "\r"; //Does not print for some reason???
                                ptr = ptr + 1;
                                std::this_thread::sleep_for(std::chrono::seconds(1));
                        }
                        std::cout << "\n Array equivalency: ";
                        return ptr == arraySize1;
                }
        }

        //Works :)
        static bool linearSearch(const int arraySize, const int* array, const int searchFor) {
                int ptr = 0;
                while (ptr < arraySize && !(array[ptr] == searchFor)) {
                        ptr = ptr + 1;
                }
                std::cout << "Value found: ";
                return !(ptr == arraySize);
        }

        //Works :)
        static bool improvedLinearSearch(const int arraySize, const int* array, const int searchFor) {
                //Assuming array is sorted in ascending order...

                bool found = false;
                int ptr = 1;
                if (array[0] == searchFor || array[arraySize - 1] == searchFor) {
                        found = true;
                }
                else {
                        int limit = 0;
                        if (searchFor <= arraySize / 2) {
                                limit = arraySize / 2;
                        }
                        else if (searchFor >= arraySize / 2) {
                                limit = arraySize - 1;
                                ptr = arraySize / 2;
                        }
                        while (ptr < limit && !found) {
                                if (array[ptr] == searchFor) {
                                        found = true;
                                }
                                ptr = ptr + 1;
                        }
                }
                std::cout << "Value found: ";
                return found;
        }
};