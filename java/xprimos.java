import java.util.ArrayList;
import java.util.List;

public class xprimos {
    public static List<Integer> encontrar_primos(int x) {
        if(x<=0) throw new IllegalArgumentException("numero menor igual 0");

        List<Integer> primos = new ArrayList<>();
        int numero = 2;

        while (primos.size()<x){
            if(eh_primo(numero))primos.add(numero);
            numero++;
        }
        return primos;
    }

    private static boolean eh_primo(int numero){
        if (numero<2)return false;
        for (int i=2;i<= Math.sqrt(numero);i++){
            if(numero%i==0) return false;
        }
        return true;
    }
}