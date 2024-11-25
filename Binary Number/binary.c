#include <stdio.h>

int dectoBin(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int remainder = n % 2;
        n /= 2;
        ans += remainder * pow;
        pow *= 10;
    }
    return ans;
}

int bintoDec(int n){
    int answer = 0, pow = 0;
    while(n>0){
        int remainder = n % 10;
        n /= 10;
        answer += remainder * (2* pow);
        pow++;
    }
    return answer;
}
int main(){
    int convert, num;
    printf("Enter 1 for converting it into binary:\n2 for converting it into decimal:\n");
    scanf("%d", &convert);

    printf("Enter the number for conversion: ");
    scanf("%d", &num);

    
    
    switch (convert)
    {
    case 1:
        printf("%d", dectoBin(num));
        break;
    case 2:
        printf("%d", bintoDec(num));
        break;
    
   
    default:
        printf("Invalid choice");
    }
    
    return 0;
}