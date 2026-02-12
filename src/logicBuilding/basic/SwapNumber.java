package logicBuilding.basic;
/*
Input: a = 2, b = 3
        Output: a = 3, b = 2

        Input: a = 20, b = 0
        Output: a = 0, b = 20

        Input: a = 10, b = 10
        Output: a = 10, b = 10*/
import java.util.Scanner;

public class SwapNumber {
    void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number (num1)");
        int num1 = sc.nextInt();
        System.out.println("Enter Second number (num2)");
        int num2 = sc.nextInt();

        {
            int temp = num2;
            num2 = num1;
            num1 = temp;
        }
        System.out.println("Num1: " + num1 + "\nnum2: " + num2);

        sc.close();
    }
}
