#include <stdio.h>

int factorial(int n){
    if(n == 0 || n ==1){
        return 1;
    }else if(n<0) {
        printf("Factorial is not defined for negative numbers.\n");
    }else{
    return n * factorial(n-1);
    }
}

int sumDigit(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int binomialCoefficient(int n, int r){
    int factorialN = factorial(n);
    int factorialR = factorial(r);
    int factorialNR = factorial(n-r);
    return factorialN / (factorialR * factorialNR);
}

int isPrimeNumber(int n){
    if(n <= 1){
        printf("1 is nor a prime nor a consecutive number");
        return 0;
    }
    for(int i =2; i<n; i++){
        if(n % i == 0){
           return 0;
        }
    }
    return 1;

}
void primeNumberfromstart(int n){
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrimeNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main(){
    int fact, digit, nC, Cr, isPrime;

    printf("Enter the number for factorial: \n");
    scanf("%d", &fact);

    printf("Enter the number for sum of digits: \n");
    scanf("%d", &digit);
    if(digit < 0){
        printf("Sum of digits is not defined for negative numbers.\n");
        digit = 0;
    }

    printf("Enter the number for binomial coefficient first for n and second for r: \n");
    scanf("%d %d", &nC, &Cr);

    printf("Entered the number to checked it is prime or not:\n");
    scanf("%d", &isPrime);
    printf("Factorial of %d is: %d \n",fact, factorial(fact));
    printf("Sum of the digits of %d is: %d \n",digit, sumDigit(digit));
    printf("Binomial Coefficient of %d and %d number is: %d \n",nC, Cr, binomialCoefficient(nC, Cr));

    if(isPrimeNumber(isPrime)){

    printf("%d is a Prime Number",isPrime);
    }else{
        printf("%d is not a Prime Number",isPrime);
    }


    
    primeNumberfromstart(isPrime);
return 0;
}