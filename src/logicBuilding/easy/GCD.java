package logicBuilding.easy;

/*
Input: a = 20, b = 28
Output: 4
Explanation: The factors of 20 are 1, 2, 4, 5, 10 and 20. The factors of 28 are 1, 2, 4, 7, 14 and 28. Among these factors, 1, 2 and 4 are the common factors of both 20 and 28. The greatest among the common factors is 4.

Input: a = 60, b = 36
Output: 12
Explanation: GCD of  60 and 36 is 12.
 */


import java.util.Scanner;

public class GCD {
    public static void gcd(int num1, int num2) {
        int ans = 1;
        int count = 2;
        while (count < num1 || count < num2) {

            if (num1 % count == 0 && num2 % count == 0) {
                ans *= count;
                num1 /= count;
                num2 /= count;
            } else if (num1 % count == 0) {
                num1 /= count;
            } else if (num2 % count == 0) {
                num2 /= count;
            } else {
                count++;
            }
        }
        System.out.println(ans);
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.println("Number is entered");

        gcd(num1, num2);
        sc.close();
    }
}
