public class dectobin {
    public static String decimal_binario(int decimal) {
        if(decimal==0) return "0";

        StringBuilder binario = new StringBuilder();

        while(decimal>0) {
            int resto = decimal%2;
            binario.insert(0,resto);
            decimal = decimal/2;
        }
        return binario.toString();
    }
}