public class maior_numero{

    public static int maxnum(int[] v){
        if (v==null||v.length==0) throw new IllegalArgumentException("vetor invalido");

        int maior = v[0];
        for (int i=1;i<v.length;i++) {
            if (v[i]>maior) maior= v[i];
        }
        return maior;
    }
}