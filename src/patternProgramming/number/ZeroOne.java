package patternProgramming.number;

public class ZeroOne {
    static void main() {
        int n = 4;
        for (int i = 1; i <= n; i++) {
            int num = (i % 2 == 1) ? 1 : 0;
            for (int j = 1; j <= i; j++) {

                System.out.print(num + " ");
                if (num == 0) {
                    num = 1;
                } else {
                    num = 0;
                }
            }
            System.out.println();

        }
    }
}
