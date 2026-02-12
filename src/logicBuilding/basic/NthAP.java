package logicBuilding.basic;
/*
Input : a1 = 2,  a2 = 3,  n = 4
Output : 5
Explanation : The series is 2, 3, 4, 5, 6, ....   , thus the 4th term is 5.

Input : a1 = 1, a2 = 3, n = 10
Output : 19
Explanation:  The series is: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21..... Thus,10th term is 19.
 */

import java.util.Scanner;

public class NthAP {
    public static int nthTerm(int a, int b, int n) {
        int d = b - a;
        return a + (n - 1) * d;

    }

    void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first term of Arithmetic progression");
        int num1 = sc.nextInt();
        System.out.println("Enter second term of Arithmetic progression");
        int num2 = sc.nextInt();

        System.out.println("Enter the term which you want to find");
        int n = sc.nextInt();

        System.out.println(nthTerm(num1, num2, n));
    }
}
