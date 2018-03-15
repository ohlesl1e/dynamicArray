/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Leslie
 *
 * Created on March 14, 2018, 12:29 AM
 */
#include "dynamicArray.h"
#include <array>
#include <iostream>

using namespace std;

void print(int array[], int size){
    if(array == NULL)
        return;
    
    for(int i = 0; i < size; i++){
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << endl;
}
int main() {
    dynamicArray * dArray = new dynamicArray();
    int *myArray = NULL;
    int size = 8;
    int newSize1 = 10;
    int newSize2 = 5;
    int newSize3 = -1;
    int finalSize = 1;
    
    myArray = dArray->array_constructor(myArray, size);
    print(myArray, size);
    
    myArray = dArray->array_resize(myArray, size, newSize1);
    print(myArray, newSize1);
    
    myArray = dArray->array_resize(myArray, newSize1, newSize2);
    print(myArray, newSize2);
    
    myArray = dArray->array_resize(myArray, newSize2, newSize3);
    print(myArray, newSize2);
    
    dArray->array_set(myArray, newSize2);
    print(myArray, newSize2);
    
    dArray->array_destructor(myArray);
    print(myArray, finalSize);
    
    return 0;
}

