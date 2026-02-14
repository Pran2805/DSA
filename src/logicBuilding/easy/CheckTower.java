package logicBuilding.easy;

//Input:  x = 10, y = 1
//Output: True
//x^0 = 1
//
//Input:  x = 10, y = 1000
//Output: True
//x^3 = 1
//
//Input:  x = 10, y = 1001
//Output: False

import java.util.Scanner;

public class CheckTower {
    public static boolean checkTower(int num1, int num2, int count) {
        if (num2 % num1 == 0) {
            return true;
        }
        int ans = Math.powExact(num1 , count);
        if(num2 == ans){
            return true;
        }

        if(num2<num1)
            checkTower(num1, num2, ++count);
        return false;
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        int num1 = sc.nextInt();
        System.out.println("Enter Second number: ");
        int num2 = sc.nextInt();
        System.out.println("Check the number"+checkTower(num1, num2, 0));

        sc.close();
    }
}
