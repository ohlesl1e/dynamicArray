#include "dynamicArray.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int * array_constructor(int *  &intPtr, int &size ){
    if(intPtr != NULL){
        delete [] intPtr;
    }
    if(size <= 0){
        return NULL;
    }
    
    try {
        intPtr = new int[size];
    }
    catch(int e ) {
        cout << "invalid size: " << endl ;
    }
    
    intPtr = new int[size];
    for (int i = 0; i < size; i++){
        intPtr[i] = i*i;
    }
    
    return intPtr;
}

int * array_resize(int * &intPtr, int& currSize, int& newSize){
    if(newSize == 0){
        return array_constructor(intPtr, newSize);
    }else if((newSize == currSize) || (newSize < 0)){
        return intPtr;
    }
    
    int * array = new int[newSize];
    for (int i = 0; i < newSize; i++){
        array[i] = i*i;
    }
    
    return array;
}

void array_destructor(int * &intPtr){
    delete [] intPtr;
    intPtr = NULL;
}

void array_set(int*& intPtr, int& size){
    srand(time(0));
    for (int i = 0; i < size; i++){
        intPtr[i] = rand();
    }
}

void mysort(int*& intPtr, int size, bool(*comp)(int&,int&)){
    
}