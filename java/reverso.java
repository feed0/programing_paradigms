public class reverso {

    public static String reverse(char s[]) {
        if(s.length==0) throw new IllegalArgumentException("string nula");

        int left = 0;
        int right = s.length-1;

        char new_s[] = s;
        while (left<right) {
            char temp = new_s[left];
            new_s[left] = new_s[right];
            new_s[right] = temp;
            left++;
            right--;
        }

        return new String(new_s);
    }
}