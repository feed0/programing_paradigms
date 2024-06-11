import java.util.Scanner;

public class Triangulo_Main{
    private static Triangulo tri;
    static void imprimeTriangulo(Triangulo t){
        if(t==null){
            System.out.println("Erro: Objeto nulo");
            System.exit(0);
        }
        System.out.println("Lado1 = "+t.getLado1());
        System.out.println("Lado2 = "+t.getLado2());
        System.out.println("Lado3 = "+t.getLado3());
        System.out.println("Perimetro = "+t.perimetro());
        System.out.println("Area = "+t.area());
    }
    static double[] entraLados(){
        Scanner sc = new Scanner(System.in);
        double[] lados = new double[3];
        lados[0] = sc.nextDouble();
        lados[1] = sc.nextDouble();
        lados[2] = sc.nextDouble();
        sc.close();
        return lados;
    }
    public static void main(String[] args) {
        // alt1
        tri = new Triangulo();
        imprimeTriangulo(tri);
        tri = null;

        // alt2
        double[] lados = entraLados();
        tri = new Triangulo(lados[0],lados[1],lados[2]);
        imprimeTriangulo(tri);
        tri = null;
        
    }
}