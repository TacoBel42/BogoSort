#include <random>
#include <ctime>
#include <iostream>
#include "bogosort.h"

void bogosort(int arr[], int size) {
    //int iteration;
    while(!check(arr, size)) {
        //iteration++;
        shuffle(arr, size);
    }
    //std::cout << "Iterations: " << iteration << std::endl;
    
}

void shuffle(int arr[], int size) {
    std::mt19937 generator(time(0));
    std::uniform_int_distribution<int> position(0, size-1);

    int t = 0; 
    int r = 0;
    for(int i = 0; i < size; i++) {
        t = arr[i];
        r = position(generator);
        arr[i] = arr[r];
        arr[r] = t;     
    }

}

bool check(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[i-1]) {
            return false;
        } 
    }    
    return true;
}