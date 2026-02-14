package logicBuilding.easy;

//Input: l1 = { 0, 10 }, r1 = { 10, 0 }, l2 = { 5, 5 }, r2 = { 15, 0 }
//Output: Rectangles Overlap
//
//Input: l1 = { 0, 10 }, r1 = { 10, 0 }, l2 = { -10, 5 }, r2 = { -1, 0 }
//Output: Rectangles Don't Overlap
public class OverlapRect {
    public static boolean overlap(
            int x1, int x2,
            int y1, int y2,

            int x3, int x4,
            int y3, int y4
    ) {
        boolean ans = false;
        if (
                (x1 <= x3 && x3 <= x2) || (x2 <= x3 && x3 <= x1) ||
                        (x1 <= x4 && x4 <= x2) || (x2 <= x4 && x4 <= x1)
        ) {
            if (
                    (y1 <= y3 && y3 <= y2) || (y2 <= y3 && y3 <= y1) ||
                            (y1 <= y4 && y4 <= y2) || (y2 <= y4 && y4 <= y1)
            )
                ans = true;

        }

        return ans;
    }

    static void main() {
        if (overlap(
                0, 10,
                10, 0,
//                5,15,
//                5,0
                -10, -1,
                5, 0
        )) {
            System.out.println("Rectangle Overlap");
        } else {
            System.out.println("Not overlap");
        }
    }
}
