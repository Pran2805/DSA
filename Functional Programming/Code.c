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

int main(){
    printf("%d", factorial(-1));
return 0;
}