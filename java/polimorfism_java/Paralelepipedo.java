public class Paralelepipedo extends Figura {
    public Paralelepipedo(String nome, float base, float altura, float comprimento) {
        super(nome,base,altura,comprimento);
    }

    @Override
    public void display() {
        System.out.println("nome: "+getNome());
        System.out.println("base: "+getDim1());
        System.out.println("altura: "+getDim2());
        System.out.println("comprimento: "+getDim3());
        System.out.println("area: "+getArea());
        System.out.println("volume: "+getVolume());
    }

    @Override
    public float getArea() {return 2.0f*(getDim1()*getDim2()+getDim1()*getDim3()+getDim2()*getDim3());}

    @Override
    public float getVolume() {return getDim1()*getDim2()*getDim3();}
}