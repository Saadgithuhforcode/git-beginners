#include <iostream>

void needToDELETE();

int main(){

    // You don't have to delete the ptr because the variable war originaly allocated to the stack
    //the pointer is only pointing to the address (using &) not allocating new memoery using 
    // new data word type

    int x = 820;
    
    int *ptr = &x;

    std::cout << *ptr << '\n';
    std::cout << &x << '\n';

    return 0;
}

void needToDELETE(){

    // Need to delete because value was allocated to heap using the "new" keyword
    //you can delete it using delete then put ''ptr = nullptr''.
    //delete ptr deletes the pointer and ptr = nullptr stops any momory bugs from happening.

    int *ptr = new int(67);

    std::cout << *ptr << std::endl; // gives whatever value was assigned to ptr
    std::cout << &ptr << std::endl; // it gives a value like "0xbd1edffca4" in hexadecimal machine cod basically

    delete ptr;     // deletes the pointer
    ptr = nullptr;  // prevents bugs

}