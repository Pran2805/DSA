package patternProgramming.number;

public class Palindrome {
    static void main() {
        int n = 4;
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k <= (n - i); k++) {
                System.out.print("  ");
            }
            for (int j = -i; j <= i; j++) {
                if (j == 0) continue;
                if (j < 0) {

                    System.out.print(-j + " ");
                } else {
                    if (j == 1) continue;
                    System.out.print(j + " ");
                }
            }
            System.out.println();
        }
    }
}
