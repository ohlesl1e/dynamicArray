#include "dynamicArray.h"
#include <iostream>
#include <ctime>
using namespace std;

dynamicArray::dynamicArray(){
    
}

int * dynamicArray::array_constructor(int *  &intPtr, int &size ){
    if(intPtr != NULL){
        delete [] intPtr;
    }
    
    intPtr = new int[size];
    for (int i = 0; i < size; i++){
        intPtr[i] = i*i;
    }
    
    return intPtr;
}

int * dynamicArray::array_resize(int * &intPtr, int& currSize, int& newSize){
    if(newSize == 0){
        delete [] intPtr;
        return NULL;
    }else if((newSize == currSize) || (newSize < 0)){
        return intPtr;
    }
    
    int * array = new int[newSize];
    for (int i = 0; i < newSize; i++){
        array[i] = i*i;
    }
    
    return array;
}

void dynamicArray::array_destructor(int * &intPtr){
    delete [] intPtr;
    intPtr = NULL;
}

void dynamicArray::array_set(int*& intPtr, int& size){
    srand(time(0));
    for (int i = 0; i < size; i++){
        intPtr[i] = rand();
    }
}

void dynamicArray::mysort(int*& intPtr, int size, bool(*comp)(int&,int&)){
    
}