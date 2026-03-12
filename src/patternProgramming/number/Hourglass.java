package patternProgramming.number;

public class Hourglass {
    static void main() {
        int n = 4;
        for (int i = n; i > 0; i--) {
            for (int space = 0; space < (n - i); space++) {
                System.out.print(" ");
            }
            for (int j = (n - i) + 1; j <= n; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
        for (int i = 2; i <= n; i++) {
            for (int space = 0; space < (n - i); space++) {
                System.out.print(" ");
            }
            for (int j = (n - i) + 1; j <= n; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }

    }
}
