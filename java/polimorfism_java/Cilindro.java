public class Cilindro extends Figura {

    public Cilindro(String nome, float raioBase, float altura) {
        super(nome,raioBase,altura);
    }

    @Override
    public void display() {
        System.out.println("nome: "+getNome());
        System.out.println("raio: "+getDim1());
        System.out.println("altura: "+getDim2());
        System.out.println("area: "+getArea());
        System.out.println("volume: "+getVolume());
    }
    @Override
    public float getArea() {
        float areaLateral = (float)(2.0*Math.PI*getDim1()*getDim2());
        float areaBase = (float)(2.0*Math.PI*Math.pow(getDim1(),2));
        return areaLateral+areaBase;
    }
    @Override
    public float getVolume() {return (float)(Math.PI*Math.pow(getDim1(),2)*getDim2());}
}