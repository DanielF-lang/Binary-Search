#include <iostream>
#include <cmath>

const char arr[6]{'a', 'b', 'c', 'x', 'y', 'z'};
const char target = 'x';

char binarySearch(char target, int start, int end)
{
    if(start > end)
        std::cout << "Not Found" << std::endl;

    const int middle = floor((start + end) / 2);

    if(arr[middle] == target)
        std::cout << "Found" << std::endl;

    if(arr[middle] > target)
        return binarySearch(target, start, middle - 1);

    if(arr[middle] < target)
        return binarySearch(target, middle + 1, end);
}

int main(void)
{
    binarySearch(target, 0, 5);
}