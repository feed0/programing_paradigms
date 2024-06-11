public class concatenar_c {

    public static char[] concatenar(char[] s1, char[] s2) {
        char[] resultado = new char[s1.length+s2.length];

        System.arraycopy(s1,0,resultado,0,s1.length);
        System.arraycopy(s2,0,resultado,s1.length,s2.length);

        return resultado;
    }
}
