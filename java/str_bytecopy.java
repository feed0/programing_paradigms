public class str_bytecopy {

    public static byte[] to_byte(char[] chars) {
        byte[] bytes = new byte[chars.length*2]; // 2 bytes em UTF-16
        
        for (int i=0;i<chars.length;i++){
            bytes[i*2] = (byte)(chars[i]>>8);
            bytes[i*2+1] = (byte)chars[i];
        }
        return bytes;
    }

    public static char[] to_char(byte[] bytes) {
        if (bytes.length%2!=0) throw new IllegalArgumentException("impossivel");

        char[] chars = new char[bytes.length/2];
        
        for (int i=0; i<chars.length;i++) {
            char high = (char)(bytes[i*2]<<8);
            char low = (char)(bytes[i*2+1]&0xFF);
            chars[i] = (char)(high|low);
        }
        return chars;
    }

    public static void copy_str(char[] s1, char[] s2) {
        if (s1.length==0||s2.length==0||s1.length!=s2.length) throw new IllegalArgumentException("invalido");

        byte[] bytes_s1 = to_byte(s1);
        byte[] bytes_s2 = new byte[bytes_s1.length];

        System.arraycopy(bytes_s1,0,bytes_s2,0,bytes_s1.length);

        char[] temp = to_char(bytes_s2);
        System.arraycopy(temp,0,s2,0,s2.length);
    }
}