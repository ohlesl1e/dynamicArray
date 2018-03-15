#include "dynamicArray.h"
#include <array>
#include <iostream>

using namespace std;

void print(int array[], int size){
    if(array == NULL){
        cout << "array is empty" << endl;
        return;
    }
    
    for(int i = 0; i < size; i++){
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << endl;
    return;
}
int main() {
    int *myArray = NULL;
    int size = 8;
    int newSize1 = 10;
    int newSize2 = 2;
    int newSize3 = -1;
    int finalSize = 1;
    
    myArray = array_constructor(myArray, size);
    print(myArray, size);
    
    myArray = array_resize(myArray, size, newSize1);
    print(myArray, newSize1);
    
    myArray = array_resize(myArray, newSize1, newSize2);
    print(myArray, newSize2);
    
    myArray = array_resize(myArray, newSize2, newSize3);
    print(myArray, newSize2);
    
    array_set(myArray, newSize2);
    print(myArray, newSize2);
    
    array_destructor(myArray);
    print(myArray, finalSize);
    
    return 0;
}

