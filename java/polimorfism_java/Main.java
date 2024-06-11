public class Main {
    public static void main(String[] args) {
        Esfera esf = new Esfera("Esfera", 2.0f);
        Cilindro cil = new Cilindro("Cilindro", 1.0f, 3.0f);
        Cone con = new Cone("Cone", 3.0f, 4.0f);
        Paralelepipedo par = new Paralelepipedo("Paralelepipedo", 3.0f, 1.5f, 2.0f);

        esf.aumentar(20);

        esf.display();
        System.out.println();
        cil.display();
        System.out.println();
        con.display();
        System.out.println();
        par.display();
        System.out.println();
    }
}