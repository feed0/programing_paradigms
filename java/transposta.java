public class transposta {
    public static int[][] T(int[][] m) {
        int[][] t = new int[m[0].length][m.length];

        for (int i=0;i< m.length;i++) {
            for (int j=0;j< m[0].length;j++) {
                t[j][i] = m[i][j];
            }
        }
        return t;
    }
}


