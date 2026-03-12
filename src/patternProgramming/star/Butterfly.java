package patternProgramming.star;

public class Butterfly {
    static void main() {
        int n = 4;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            for (int k = 0; k < 2 * (n - i); k++) {
                System.out.print("  ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }
        for (int i = n-1; i >= 0; i--) {

            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            for (int k = 0; k < 2 * (n - i); k++) {
                System.out.print("  ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }
    }
}
