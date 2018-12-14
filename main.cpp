#include <iostream>
#include "bogosort.h"

int main(int argc, char ** argv) {
    const int size = 5;
    int arr[] = {2, 0, -1, 3, 6};
    
    bogosort(arr, size);
    
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}