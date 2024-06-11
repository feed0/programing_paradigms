import java.util.Scanner;

public class circle_pa {
    final static double PI = 3.14159;
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("digite o raio: ");
            int raio = scanner.nextInt();
            
            double perimeter = 2.0*PI*raio;
            double area = PI*raio*raio;
            
            System.out.println("perimetro: "+perimeter);
            System.out.println("area: "+area);
        }
    }
}