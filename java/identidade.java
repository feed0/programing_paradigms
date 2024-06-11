public class identidade {
    public static boolean check_identidade(int[][] m) {
        if (m.length!=m[0].length) return false;

        for (int i=0;i<m.length;i++) {
            for (int j=0;j<m[0].length;j++) {
                if ( (i==j&&m[i][j]!=1) || (i!=j&&m[i][j]!=0)) return false;
            }
        }
        return true;
    }
}