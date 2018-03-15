/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dynamicArray.h
 * Author: Leslie
 *
 * Created on March 14, 2018, 12:31 AM
 */

#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class dynamicArray{
public:
    dynamicArray();
    int * array_constructor(int *  &intPtr, int &size );
    int * array_resize(int * &intPtr, int& currSize, int& newSize);
    void array_destructor(int * &intPtr);
    void array_set(int* &intPtr, int &size);
    void mysort( int* &intPtr, int size, bool (* comp)(int&, int&) ); 
};

#endif /* DYNAMICARRAY_H */

