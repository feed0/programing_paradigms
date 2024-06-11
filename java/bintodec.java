public class bintodec {
    public static int binario_decimal(int binario) {
        int decimal = 0;
        int base = 1;
        
        while(binario>0){
            int last = binario%10;
            binario = binario/10;
            decimal += last*base;
            base = base*2;
        }
        return decimal;
    }
}
