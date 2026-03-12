package patternProgramming.star;

public class Rhombus {
    static void main() {
        int n = 4;
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < i; k++) {
                System.out.print(" ");
            }
            for (int j = 0; j < n; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
