
public class characterpyramid {
    public static void main(String[] args) {
        int n = 5;

        for (int i = 1; i <= n; i++) {

            // Ascending characters
            for (int j = 0; j < i; j++) {
                System.out.print((char)('A' + j));
            }

            // Descending characters
            for (int j = i - 2; j >= 0; j--) {
                System.out.print((char)('A' + j));
            }

            System.out.println();
        }
    }
}
