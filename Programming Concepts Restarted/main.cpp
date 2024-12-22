#include "myArray.h"

// v Worksheets include pre-processor statements:
#include "WEEK2WS.h"
#include "WEEK3WS.h"

// v Homework include pre-processor statements:


int main() {
        IntArray array1(6, ASCENDING);

        IntArray::printArray(array1.getInt(), array1.getArray());

        std::cout << Week3WS::improvedLinearSearch(array1.getInt(), array1.getArray(), 6);
}