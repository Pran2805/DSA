package logicBuilding;

import java.util.Scanner;

public class CheckEvenOrOdd {

    public static boolean checkNumber(int num) {
        return num % 2 == 0;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number to check it is a even or odd");
        int num = sc.nextInt();
        System.out.println(checkNumber(num));

        sc.close();
    }

}
