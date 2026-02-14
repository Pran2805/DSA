package logicBuilding.easy;

import java.util.Scanner;

/*
Input:  n = 11
Output: true

Input:  n = 15
Output: false

Input:  n = 1
Output: falseQspider
 */
public class PrimeTesting {
    public static boolean isPrime(int n) {
        if(n==1 || n%2==0){
            return false;
        }
        for (int i = 2; i <= (n / 2) + 1; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    public static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to check number is prime or not");
        int num = sc.nextInt();
        System.out.println(num+" Is Prime: "+isPrime(num));
    }
}
