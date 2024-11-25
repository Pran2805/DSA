#include <stdio.h>
#include <stdbool.h>

// how to find the number is power of 2 or not without any loop or modulus operator
int isPowerof2(int n){
    int num = n>> 1;
    num = num <<1;
    return (n == num);
}


int main(){
    bool isTrue = isPowerof2(8);
    printf("The given number is the power of 2??: %s", isTrue ? "Yes" : "No");
    return 0;
}