package patternProgramming.star;

public class Diamond {
    static void main() {
        int n = 4;

        for (int i = 0; i < (2 * n); i++) {
            if (i < n) {
                for (int k = 0; k < (n - i); k++) {
                    System.out.print(" ");
                }
                for (int j = 0; j <= i; j++) {
                    System.out.print("* ");
                }
            } else {
                if(i==n) continue;
                for (int k = 0; k <= (i - n); k++) {
                    System.out.print(" ");
                }
                for (int j = i; j < (2 * n); j++) {
                    System.out.print("* ");
                }
            }

            System.out.println();
        }
    }
}
