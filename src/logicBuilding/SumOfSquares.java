package logicBuilding;

import java.util.Scanner;

/*
Given a positive integer n, we have to find the sum of squares of first n natural numbers.
Input : n = 2
Output: 5
Explanation: 1^2+2^2 = 5

Input : n = 8
Output: 204
Explanation :  1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 = 204
*/
public class SumOfSquares {
    public static int square(int num){
        if(num <=0){
            System.out.println("Only for natural numbers");
            return -1;
        }
        int count = 0;
        for (int i = 1; i <= num; i++) {
            count += (i*i);
        }


        return count;
    }
    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a natural number: ");
        int num = sc.nextInt();
        System.out.println(square(num));
        sc.close();
    }
}
