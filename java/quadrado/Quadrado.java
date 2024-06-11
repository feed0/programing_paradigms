public final class Quadrado {
    private double lado;

    public Quadrado() { this.lado = 1.0; }
    public Quadrado(double lado) { this.lado = lado; }
    public Quadrado(double valor, String tipo){
        try {
            if(tipo.equalsIgnoreCase("area")) this.lado = LadoFromArea(valor);
            else if(tipo.equalsIgnoreCase("perimetro")) this.lado = LadoFromPerimetro(valor);
            else if(tipo.equalsIgnoreCase("diagonal")) this.lado = LadoFromDiagonal(valor);
            else throw new Exception("tipo invalido");
        } catch (Exception e) {
            System.out.println("erro: "+e.getMessage());
            this.lado = 1.0;
        }
    }

    public double getLado() { return lado; }
    public void setLado(double lado) { this.lado = lado; }

    protected double LadoFromArea(double area) { return Math.sqrt(area); }
    protected double LadoFromPerimetro(double perimetro) { return perimetro/4.0; }
    protected double LadoFromDiagonal(double diagonal) { return diagonal/Math.sqrt(2.0); }

    public boolean validateLado() { return this.lado>0; }

    public double Perimetro(){
        try {
            if(validateLado()) return 4.0*this.lado;
            else throw new Exception("lado invalido");
        } catch (Exception e) {
            System.out.println("erro: "+e.getMessage());
            return -1;
        }
    }
    public double Area(){
        try {
            if(validateLado()) return this.lado*this.lado;
            else throw new Exception("lado invalido");
        } catch (Exception e) {
            System.out.println("erro: "+e.getMessage());
            return -1;
        }
    }
    public double Diagonal(){
        try {
            if(validateLado()) return this.lado*Math.sqrt(2.0);
            else throw new Exception("lado invalido");
        } catch (Exception e) {
            System.out.println("erro: "+e.getMessage());
            return -1;
        }
    }

    // no java, não tem um método destruidor
    // podiamos criar um método por boa prática super.finalize, mas ele está Deprecated
    // se quer ter certeza do garbage collector, podemos chamá-lo na main por System.gc()

}