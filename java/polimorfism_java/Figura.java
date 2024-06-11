public abstract class Figura {
    protected String nome;
    protected float dim1;
    protected float dim2;
    protected float dim3;

    public Figura(String nome, float dim1) {
        this.nome = nome;
        this.dim1 = dim1;
        this.dim2 = 0;
        this.dim3 = 0;
    }

    // Construtor para Figura com dim1 e dim2
    public Figura(String nome, float dim1, float dim2) {
        this.nome = nome;
        this.dim1 = dim1;
        this.dim2 = dim2;
        this.dim3 = 0;
    }

    // Construtor para Figura com dim1, dim2 e dim3
    public Figura(String nome, float dim1, float dim2, float dim3) {
        this.nome = nome;
        this.dim1 = dim1;
        this.dim2 = dim2;
        this.dim3 = dim3;
    }

    public abstract void display();
    public abstract float getArea();
    public abstract float getVolume();

    // Getters e Setters
    public String getNome() {return nome;}

    public float getDim1() {return dim1;}

    public float getDim2() {return dim2;}

    public float getDim3() {return dim3;}

    public void setNome(String novoNome) {this.nome = novoNome;}

    public void setDim1(float novoDim1) {this.dim1 = novoDim1;}

    public void setDim2(float novoDim2) {this.dim2 = novoDim2;}

    public void setDim3(float novoDim3) {this.dim3 = novoDim3;}

    // Método para aumentar as dimensões em uma porcentagem
    public void aumentar(float percentage) {
        this.dim1 *= (1+percentage/100);
        this.dim2 *= (1+percentage/100);
        this.dim3 *= (1+percentage/100);
    }
}