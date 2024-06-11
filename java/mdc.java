public class mdc {

    public static int mdc_euclides(int x, int y) {
        if (x<0||y<0) throw new IllegalArgumentException("numero negativo");

        while (y!=0){
            int temp = y;
            y = x%y;
            x = temp;
        }
        return x;
    }
}