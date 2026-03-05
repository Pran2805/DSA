package hackerrank.easy;
import java.util.Scanner;

// required string builder continously failing just because of one space
// todo: learn string builder first
public class OutputFormatting {
    static void main(String[] args) {
        String[] s = new String[3];
        String[] num = new String[3];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<3;i++){
            s[i] = sc.next();
            num[i] = sc.nextLine();
        }

        System.out.println("================================");
        for(int i=0;i<3;i++){
            System.out.print(s[i]);
            for(int j = 0; j<= 15 - s[i].length(); j++){
                System.out.print(" ");
            }
            String str = num[i];
            if(str.length() == 3){
                num[i] = " "+ '0'+num[i].trim();
            }
            System.out.println(num[i]);
        }
        System.out.println("================================");
        sc.close();

    }
}
