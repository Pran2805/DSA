package logicBuilding.easy;

/*
Input :  a = 7, b = 10, c = 5
Output : Valid
We can draw a triangle with the given three edge lengths.

Input : a = 1, b = 10, c = 12
Output : Invalid
We can not draw a triangle with the given three edge lengths.
 */

import java.util.Scanner;

public class ValidTriangle {
    public static void validTriangle(int a, int b, int c) {
        if (a + b <= c || a + c <= b || b + c <= a)
            System.out.println("Invalid");
        else
            System.out.println("Valid");
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the sides of triangle");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        validTriangle(a,b,c);
        sc.close();
    }
}
