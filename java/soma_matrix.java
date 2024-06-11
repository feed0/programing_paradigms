public class soma_matrix {
    public static int[][] sum_mtx(int[][] m1, int[][] m2) {
        if (m1.length!=m2.length||m1[0].length!=m2[0].length) throw new IllegalArgumentException("nao sao mesma ordem");

        int[][] m3 = new int[m1.length][m1[0].length];

        for (int i=0;i<m1.length;i++) {
            for (int j=0;j<m1[0].length;j++) m3[i][j] = m1[i][j]+m2[i][j];
        }
        return m3;
    }
}