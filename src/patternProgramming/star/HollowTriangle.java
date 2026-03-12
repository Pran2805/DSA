package patternProgramming.star;

public class HollowTriangle {
    static void main() {
        int n = 8;
        for (int i = 1; i <= n; i++) {
            for (int s = 1; s <= (n - i); s++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                if (i == n || j == 1 || j == i) {

                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
