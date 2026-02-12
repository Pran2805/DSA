package logicBuilding.basic;

import java.util.Scanner;

/*
Input: n = 2
Output: 5
Explanation: For dice facing number 5 opposite face will have the number 2.

Input: n = 6
Output: 1
Explanation: For dice facing number 6 opposite face will have the number 1.
 */
public class DiceProblem {
    public static int diceProblem(int num) {
        return 7 - num;
    }

    void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to check opposite side of dice");
        int num = sc.nextInt();

        System.out.println("For dice facing number " + num + " opposite face will have the number " + diceProblem(num));

        sc.close();
    }
}
