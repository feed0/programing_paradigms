public class Cone extends Figura {
    public Cone(String nome, float raioBase, float altura) {
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
        float slantHeight = (float)Math.sqrt(Math.pow(getDim1(),2)+Math.pow(getDim2(),2));
        float areaLateral = (float)(Math.PI*getDim1()*slantHeight);
        float areaBase = (float)(Math.PI*Math.pow(getDim1(),2));
        return areaLateral + areaBase;
    }

    @Override
    public float getVolume() {return (float)((1.0/3.0)*Math.PI*Math.pow(getDim1(),2)*getDim2());}
}