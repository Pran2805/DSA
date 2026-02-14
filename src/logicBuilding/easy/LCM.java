package logicBuilding.easy;

import java.util.Scanner;
//Input :  a = 10, b = 5
//Output :  10
//Explanation : 10 is the smallest number divisible by both 10 and 5
//
//Input :  a = 5, b = 11
//Output :  55
//Explanation : 55 is the smallest number divisible by both 5 and 11

public class LCM {
    public  static void lcm(int a, int b){
        int max= Math.max(a,b);
        int min= Math.min(a,b);

        for(int i = max; i<= max*min; i++){
            if(i%min == 0 && i%max ==0){
                System.out.println(i);
                break;
            }
        }
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        lcm(num1, num2);
        sc.close();
    }
}
