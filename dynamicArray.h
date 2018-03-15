#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <ctime>
#include<iostream>
    int * array_constructor(int *  &intPtr, int &size );
    int * array_resize(int * &intPtr, int& currSize, int& newSize);
    void array_destructor(int * &intPtr);
    void array_set(int* &intPtr, int &size);
    void mysort( int* &intPtr, int size, bool (* comp)(int&, int&) ); 
#endif	// DYNAMICARRAY_H

