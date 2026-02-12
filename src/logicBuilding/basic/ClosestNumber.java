package logicBuilding.basic;

import java.util.Scanner;

/*
Input: n = 13, m = 4
Output: 12
Explanation: 12 is the closest to 13, divisible by 4.

Input: n = -15, m = 6
Output: -18
Explanation: Both -12 and -18 are closest to -15, but -18 has the maximum absolute value.
 */
public class ClosestNumber {
    public static int closestNumber(int num, int div) {
        int shortDistance = 999999;
        int longDistance = 999999;
        int ans = 0;

        for (int i = (num - div); i <= (num + div); i++) {
            if (i % div == 0) {
                longDistance = (num - i < 0) ? i - num : num - i;
            }
            if (longDistance < shortDistance) {
                shortDistance = longDistance;
                ans = i;
            }
        }

        return ans;

    }

    void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number");
        int num1 = sc.nextInt();
        System.out.println("Enter Second number");
        int num2 = sc.nextInt();
        System.out.println(closestNumber(num1, num2) + " is the closest to " + num1 + ", divisible by " + num2);
        sc.close();
    }
}
