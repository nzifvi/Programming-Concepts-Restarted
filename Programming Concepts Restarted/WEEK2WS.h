#pragma once

#include <iostream>

class Week2WS {
private:
public:
        //Works :)
        static void linearSumAlgorithm(const int size, const int* array) {
                int sum = 0;
                for (int i = 0; i < size; i++) {
                        sum = sum + array[i];
                }
                std::cout << "Sum of Array's elements = " << sum << "\n";
        }

        //Merging arrays produces random memory values at some indexes, not sure if the algorithm or the implementation into c++ is what is wrong
        static int* mergeArrays(const int arraySize1, const int* array1, const int arraySize2, const int* array2, const int targetArraySize, int* targetArray) {
                for (int i = 0; i < targetArraySize; i++) {
                        if (targetArraySize < arraySize1) {
                                targetArray[i] = array1[i];
                        }
                        else {
                                targetArray[i] = array2[i - arraySize1 ];
                        }
                }
                return targetArray;
        }
};