package logicBuilding.easy;

import java.util.Scanner;

/*
Input: n = 122
Output: 221
Explanation: By reversing the digits of number, number will change into 221.

Input: n = 200
Output: 2
Explanation: By reversing the digits of number, number will change into 2.

Input: n = 12345
Output: 54321
Explanation: By reversing the digits of number, number will change into 54321.
 */
public class ReverseDigit {
    void reverseDigit(int n){
        int ans = 0;
        while(n!=0){
            int digit = n%10;
            ans = ans*10 + digit;
            n/=10;
        }
        System.out.println(ans);
    }

    void main(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();

        reverseDigit(num);

        sc.close();
    }
}
