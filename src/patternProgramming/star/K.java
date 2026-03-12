package patternProgramming.star;

public class K {
    static void main() {
        int n = 4;
        for (int i = n; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                System.out.print("* ");
            }
            if (i == 1) continue;
            System.out.println();
        }
        System.out.println();
        for (int i = 0; i <= n; i++) {
            if (i == 0 || i ==1) continue;
            for (int j = 0; j < i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
