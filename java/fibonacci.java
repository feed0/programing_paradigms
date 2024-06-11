import java.util.ArrayList;
import java.util.List;

public class fibonacci {

    public static List<Integer> fib(int x) {
        if(x<=0) throw new IllegalArgumentException("numero menor igual 0");

        List<Integer> fibonacci = new ArrayList<>();
        
        if(x>=1) fibonacci.add(0);
        if(x>=2) fibonacci.add(1);

        for (int i=2;i<x;i++) {
            int next = fibonacci.get(i-1)+fibonacci.get(i-2);
            fibonacci.add(next);
        }
        return fibonacci;
    }
}

