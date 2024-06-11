import java.util.Arrays;

public class anagrama {
    public static boolean check_anagrama(char[] s1, char[] s2) {
        if(s1.length==0||s2.length==0) throw new IllegalArgumentException("strings nulas");

        if (s1.length!=s2.length) return false;

        Arrays.sort(s1);
        Arrays.sort(s2);

        for (int i=0;i<s1.length;i++) {
            if(s1[i]!=s2[i]) return false;
        }
        return true;
    }
}