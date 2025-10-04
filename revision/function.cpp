#include <iostream>
using namespace std;

void sumOfDigit(int n){
    int value = 0;
    while(n > 0){
        value += n%10;
        n = n/10;
    }
    cout << value<<endl;
}

int factorial(int n){
    if(n < 0) return -1;
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}


int binomialCoefficient(int n, int r){
    int nFactorial = factorial(n);
    int rFactorial = factorial(r);
    int denominator = rFactorial * factorial(n-r);
    return (nFactorial/denominator);
}
int main(){

    // sumOfDigit(145);    
    // sumOfDigit(2356);
    
    cout << binomialCoefficient(8,2)<<endl;
    cout << binomialCoefficient(6,3)<<endl;
    return 0;
}