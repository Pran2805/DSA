#include <iostream>
using namespace std;

// find character lowercase or uppercase
void caseFind(char character){
     int Ascii = character;

    if (Ascii < 97 && Ascii >= 65){
        cout << "It is a uppercase";
    }
    else if (Ascii > 65 && Ascii < 122){
        cout << "It is a lowercase";
    }
    else{
        cout << "Not a character";
    }
}


// sum of number 1 to n
int sumToN(int num){
    return num*(num+1)/2;
}

// sum of odd number 1 to n
int sumOddToN(int num){
    if(num < 0) return -1;
    int n = 0;
    for(int i =1; i<=num; i+=2){
        // cout << i<<endl;
        n += i;
    }
    return n;
    
}

// check if a number is prime or not 
bool isPrime(int num){
    bool isPrimeBool = 1;
    for(int i = 2; i<=num/2; i++){
        if(num % i == 0){
            isPrimeBool = 0;
            break;
        } 

    }
    return isPrimeBool;
}

// sum of all numbers from 1 to N which are divisible by 3
int sumBy3(int num){
    int value = 0;
    for(int i = 0; i<=num; i++){
        (i%3 ==0) ? value +=i: 0;
    }
    return value;
}

// factorial of N
int factorial(int n){
    if(n < 0) return -1;
    if(n == 0 || n ==1) return 1;
    return  n * factorial(n-1);
}
int main()
{
    char character;
    // cout << "Enter one character" << endl;
    // cin >> character;

    // caseFind(character);
    // int num = sumToN(5);
    // int num = sumOddToN(3);
    // int num = isPrime(4);
    // int num = sumBy3(9);
    int num = factorial(5);
    cout <<"Ans: "<< num;
   
    return 0;
}