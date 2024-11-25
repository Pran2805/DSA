#include <stdio.h>


struct Result{
    int sum;
    int product;
};

//finding the biggest number in an array
int largestNumber(int array[],int length){
    int largestNumber = array[0];
    for(int i = 0; i< length -1; i++){
        if(array[i+1] > largestNumber){
            largestNumber = array[i+1];
        }
    }
    return largestNumber;
}

// finding the smallest number in an array
int smallestNumber(int array[],int length){
    int smallestNumber = array[0];
    for(int i = 0; i< length -1; i++){
        if(array[i+1] < smallestNumber){
            smallestNumber = array[i+1];
        }
    }
    return smallestNumber;
}

// linear search function
int linearSearch(int array[], int length, int target){
    for(int i = 0; i<length; i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

// reverse an array
int reverseArray(int array[], int length){
    int temp;
    for(int i = 0; i<length/2; i++){
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
    
}

// write a function to calculate sum and product of all numbers in an array
struct Result sumAndProduct(int array[], int length){
    int sum = 0;
    int product = 1;
    for(int i = 0; i<length; i++){
        sum += array[i];
        product *= array[i];
    }
    struct Result result = {
        sum, product
    };
    
    return result;
}


int main(){
    int num[7] = {5, 15, 22, 1, -15, 8, 24};

    printf("The biggest number in the array is: %d\n", largestNumber(num, 7));
    printf("The smallest number in the array is: %d\n", smallestNumber(num, 7));
    printf("The target number in the array is 8 and the position of it is: %d\n", linearSearch(num, 7, 8));
    
    reverseArray(num, 7);
    printf("The reversed array is: ");
    for(int i = 0; i<7; i++){
        printf("%d ", num[i]);
        }
    reverseArray(num, 7);
    printf("\n");
    printf("The sum of array is %d and the product is %d\n", sumAndProduct(num, 7).sum, sumAndProduct(num, 7).product);

    return 0;
}