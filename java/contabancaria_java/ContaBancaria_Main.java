public class ContaBancaria_Main {
    public static void main(String[] args) {
        ContaBancaria conta1 = new ContaBancaria();
        ContaBancaria conta2 = new ContaBancaria("Joao", 12345, 'C', 1000.0);

        conta1.setNomeCliente("Maria");
        conta1.setNumeroConta(54321);
        conta1.setSaldo(500.0);

        System.out.println(conta1.toString());
        System.out.println(conta2.toString());
    }
}