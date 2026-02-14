package logicBuilding.easy;

import java.util.Scanner;

/*
Input: n = 5
Output: 120
Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120

Input: n = 4
Output: 24
Explanation: 4! = 4 * 3 * 2 * 1 = 24
 */
public class Factorial {
    public static int fact(int num){
        if(num ==0 || num == 1){
            return 1;
        } else if( num < 0){
            return -1/2;
        }

        return num * fact(num-1);
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        System.out.println(fact(num));

        sc.close();
    }
}
