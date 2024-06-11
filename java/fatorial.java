public class fatorial {

    public static int calc_fatorial(int x) {
        if (x<0) throw new IllegalArgumentException("numero negativo");

        int fatorial = 1;
        for (int i=1;i<=x;i++) fatorial *= i;

        return fatorial;
    }
}

