#include <stdio.h>
#include <stdbool.h>

// how to find the number is power of 2 or not without any loop or modulus operator
int isPowerof2(int n){
    int num = n>> 1;
    num = num <<1;
    return (n == num);
}

// reverse a number
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;

    }
    return rev;
}

int main(){
    bool isTrue = isPowerof2(8);

    printf("The given number is the power of 2??: %s\n", isTrue ? "Yes" : "No");
    printf("reversing the number 1234 is %d", reverse(1234));
    return 0;
}