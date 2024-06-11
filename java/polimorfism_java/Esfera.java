public class Esfera extends Figura {

    public Esfera(String nome, float raio) {
        super(nome, raio);
    }

    @Override
    public void display() {
        System.out.println("nome: "+getNome());
        System.out.println("raio: "+getDim1());
        System.out.println("area: "+getArea());
        System.out.println("volume: "+getVolume());
    }

    @Override
    public float getArea() {return (float)(4.0*Math.PI*getDim1()*getDim1());}

    @Override
    public float getVolume() {return (float)((4.0/3.0)*Math.PI*Math.pow(getDim1(),3));}
}