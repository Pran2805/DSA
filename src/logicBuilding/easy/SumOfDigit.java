package logicBuilding.easy;

import java.util.Scanner;

/*
Input: n = 687
Output: 21
Explanation: The sum of its digits are: 6 + 8 + 7 = 21

Input: n = 12
Output: 3
Explanation: The sum of its digits are: 1 + 2 = 3
 */
public class SumOfDigit {
    public static void sumOfDigit(int n) {
        int ans = 0;
        while (n != 0) {
            int digit = n % 10;
            ans += digit;
            n /= 10;
        }
        System.out.println(ans);
    }

    void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();

        sumOfDigit(num);

        sc.close();
    }
}
