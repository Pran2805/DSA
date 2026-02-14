package logicBuilding.easy;

import java.util.Scanner;

public class PairCubeCount {
    public  static void pairCubeCount(int a){
        int ans = 0;

        for(int i = 1; i<a; i++){
           for(int j =1; j<a; j++){
               if(Math.powExact(i, 3) + Math.powExact(j,3) == a)
                   ++ans;
           }
        }



        System.out.println(ans);
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        pairCubeCount(num);

        sc.close();
    }
}
