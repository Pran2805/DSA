#include <stdio.h>

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
int maxSubArraySum(int array[], int size){
    int maxSum = __WINT_MIN__;
     for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            
          
        }
       
    }
}
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    subArrays(array, 5);

    int anotherArray[7] = {3, -4, 5, 4, -1, 7, -8};
    maxSubArraySum(anotherArray, 7);
    return 0;
}