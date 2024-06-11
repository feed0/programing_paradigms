import java.util.ArrayList;
import java.util.List;

public class fatoracao_primos{

    public static List<Integer> fatorar(int x) {
        if(x<=1) throw new IllegalArgumentException("numero menor q 1");

        List<Integer> fatoresPrimos = new ArrayList<>();
        int fator = 2;

        while(x>1){
            while (x%fator==0) {
                fatoresPrimos.add(fator);
                x/=fator;
            }
            fator++;
        }
        return fatoresPrimos;
    }
}