package logicBuilding.easy;

import java.util.Scanner;

//Input: n = 15
//Output: false
//Explanation: Divisors of 15 are 1, 3 and 5. Sum of divisors is 9 which is not equal to 15.
//
//Input: n = 6
//Output: true
//Explanation: Divisors of 6 are 1, 2 and 3. Sum of divisors is 6.
public class PerfectNumber {
    public static void perfectNum(int num) {
        int ans = 1;
        int i = 2;
        while (i < num) {
            if (num % i == 0) {
                ans += i;
            }
            i++;
        }
        System.out.println(ans == num);
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int a = sc.nextInt();
        perfectNum(a);
        sc.close();
    }
}
