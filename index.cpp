// #include <stdio.h> // still work
#include <iostream> // preprocessor directive

using namespace std;
// int 4 byte
// char 1 byte 
// float 4 bit 
// double 8 bit 
// bool 1 bit

int main()
{
    signed short int number = 3;
    // printf("Hello, World!\n"); // still work
    cout << "Hello, World!" << sizeof(number)<<endl;
    signed short int age;
    cout << "Enter your age";
    cin >> age;
    cout << "Your age is " << age;
    return 0;
}