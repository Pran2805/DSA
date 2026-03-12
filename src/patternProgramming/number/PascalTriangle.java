package patternProgramming.number;

public class PascalTriangle {
    static void main() {
        int n = 4;
        for (int i = 0; i < n; i++) {
            int ans = Math.powExact(11, i);
            for (int s = 0; s < (n-i); s++){
                System.out.print(" ");
            }
            while (ans != 0) {
                int rem = ans % 10;
                ans /= 10;
                System.out.print(rem + " ");
            }
            System.out.println();
        }
    }
}
