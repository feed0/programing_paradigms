public class Triangulo {
    private double lado1, lado2, lado3;
    
    Triangulo(){
        this.lado1 = 3.0;
        this.lado2 = 4.0;
        this.lado3 = 5.0;
    }
    Triangulo(double lado1, double lado2, double lado3){
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }

    double getLado1() {return(this.lado1);}
    double getLado2() {return(this.lado2);}
    double getLado3() {return(this.lado3);}

    void setLado1(double lado1) {this.lado1 = lado1;}
    void setLado2(double lado2) {this.lado1 = lado2;}
    void setLado3(double lado3) {this.lado1 = lado3;}

    double perimetro() { return(this.lado1 + this.lado2 + this.lado3);}
    double area(){
        double sp = (this.lado1+this.lado2+this.lado3)/2;
        return Math.sqrt(sp*(sp-this.lado1)*(sp-this.lado2)*(sp-this.lado3));
    }
    
}
