public class soma_diagonais {
    public static int soma_diag(int[][] m){
        int order = m.length;

        if (order==0||m[0].length!=order) throw new IllegalArgumentException("nao eh quadrada");

        int main = 0;
        int sec = 0;

        for (int i=0;i<order;i++) {
            main += m[i][i]; // Elementos da diagonal principal
            sec += m[i][order-1-i]; // Elementos da diagonal secundária
        }

        return main+sec;
    }
}
