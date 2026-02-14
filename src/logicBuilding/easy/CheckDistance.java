package logicBuilding.easy;

import java.util.Scanner;

/*
Input : x1, y1 = (3, 4)
           x2, y2 = (7, 7)
Output : 5

Input : x1, y1 = (3, 4)
           x2, y2 = (4, 3)
Output : 1.41421
 */
public class CheckDistance {
    public static float checkDistance(int x1, int y1, int x2, int y2) {
        int x = Math.powExact((x2 - x1), 2);
        int y = Math.powExact((y2 - y1), 2);
        return (float) Math.sqrt(x + y);
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first co-ordinate in x and y ( Enter two numbers)");
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        System.out.println("Enter second co-ordinate in x and y ( Enter two numbers)");
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();

        System.out.println(checkDistance(x1, y1, x2, y2));
        sc.close();
    }
}
