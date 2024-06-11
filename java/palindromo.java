public class palindromo {

    public static boolean check_palindromo(char[] s) {
        if (s.length==0) throw new IllegalArgumentException("invalido");

        int start = 0;
        int end = s.length - 1;

        while (start<end) {
            if (s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
}
