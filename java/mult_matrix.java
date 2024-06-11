public class mult_matrix {

    public static int[][] mult_mtx(int[][] m1, int[][] m2) {
        if (m1[0].length != m2.length) throw new IllegalArgumentException("invalido");

        int[][] m3 = new int[m1.length][m2[0].length];

        for (int i=0;i<m1.length;i++) {
            for (int j=0;j<m2[0].length;j++) {
                for (int k=0;k<m1[0].length;k++) m3[i][j] += m1[i][k]*m2[k][j];
            }
        }
        return m3;
    }
}
