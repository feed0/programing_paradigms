public class soma_x_num {

    public static int soma(int[] v, int x){
        if (v==null||v.length==0||x<=0||x>v.length) throw new IllegalArgumentException("parametros invalidos");
        int soma = 0;
        for (int i=0;i<x;i++){
            soma += v[i];
        }
        return soma;
    }
}
