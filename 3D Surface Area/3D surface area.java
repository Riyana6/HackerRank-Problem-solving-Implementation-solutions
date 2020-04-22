import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class 3D surface area {

    // Complete the surfaceArea function below.
    static int surfaceArea(int[][] A) {

        int H = A.length;
        int W = A[0].length;
        System.out.println("H: " + H + " W: " + W);
        int area = 2 * (H-2) * (W-2);
        for (int i = 1; i < H-1; i++ ) {
            for (int j = 1; j < W-1; j++ ) {
                //System.out.print(A[i][j] + " ");
                area += Math.max(0, A[i][j] - A[i][j-1]);
                area += Math.max(0, A[i][j] - A[i][j+1]);
                area += Math.max(0, A[i][j] - A[i-1][j]);
                area += Math.max(0, A[i][j] - A[i+1][j]);
            }
            //System.out.println();
        }

        return area;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] HW = scanner.nextLine().split(" ");

        int H = Integer.parseInt(HW[0]);

        int W = Integer.parseInt(HW[1]);

        int[][] A = new int[H+2][W+2];

        for (int i = 1; i <= H; i++) {
            String[] ARowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < W; j++) {
                int AItem = Integer.parseInt(ARowItems[j]);
                A[i][j+1] = AItem;
            }
        }

        int result = surfaceArea(A);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
