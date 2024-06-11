public class ContaBancaria {
    private String nomeCliente;
    private int numeroConta;
    private char tipoConta = 'P';
    private double saldo;

    public ContaBancaria() {}

    public ContaBancaria(String nomeCliente, int numeroConta, char tipoConta, double saldo) {
        this.nomeCliente = nomeCliente;
        this.numeroConta = numeroConta;
        this.setTipoConta(tipoConta);
        this.saldo = saldo;
    }

    public String getNomeCliente() {return nomeCliente;}
    public void setNomeCliente(String nomeCliente) {this.nomeCliente = nomeCliente;}

    public int getNumeroConta() {return numeroConta;}
    public void setNumeroConta(int numeroConta) {this.numeroConta = numeroConta;}

    public char getTipoConta() {return tipoConta;}
    private void setTipoConta(char tipoConta) {
        if (tipoConta == 'P' || tipoConta == 'C') this.tipoConta = tipoConta;
        else System.out.println("tipo de conta invalido");
    }

    public double getSaldo() {return saldo;}
    public void setSaldo(double saldo) {this.saldo = saldo;}

    @Override
    public String toString() {
        return "ContaBancaria{" +
                "nomeCliente='" + nomeCliente + '\'' +
                ", numeroConta=" + numeroConta +
                ", tipoConta=" + tipoConta +
                ", saldo=" + saldo +
                '}';
    }
}
