#include <stdio.h>
#include <math.h>


int max(int a, int b){
    if (a > b) return a;
    else return b;
}
// maximum subarray - time complexity O(n^3)
void subArrays(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%d", array[k]);
            }
            printf(" ");
        }
        printf("\n");
    }
}

// maximum subarray sum
// brute force approach - time complexity O(n^2)
void maxSubArraySum(int array[], int size){
    int maxSum = -(__INT_MAX__);
     for (int i = 0; i < size; i++){
        int currentSum = 0;
        for (int j = i; j < size; j++){
            currentSum += array[j];
            maxSum = max(currentSum, maxSum);
        }
       
    }
    printf("Max Subarray Sum : %d\n", maxSum);
}


// kadanes algorithm
void kadaneAlgo(int array[], int size){
    
    int currentSum = 0, maxSum = -(__INT_MAX__);
    for(int i = 0; i < size; i++){
        currentSum += array[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum <0) currentSum = 0;
    }
    printf("%d", maxSum);
}
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    subArrays(array, 5);

    int anotherArray[7] = {3, -4, 5, 4, -1, 7, -8};
    maxSubArraySum(anotherArray, 7);
    kadaneAlgo(anotherArray, 7);
    return 0;
}