package logicBuilding.basic;

import java.util.Scanner;

public class SumOfNaturals {
    public static int sum(int num) {
        if (num == 0 || num < 0) {
            System.out.println("This is not a natural numbers");
            return -1;
        }
        int count = 0;

        for (int i = 0; i <= num; i++) {
            count += i;
        }
        return count;
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a natural number to print sum of naturals");
        int num = sc.nextInt();
        System.out.println(sum(num));
        sc.close();
    }
}
