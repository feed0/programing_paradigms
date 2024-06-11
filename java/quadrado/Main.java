import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try(Scanner scanner = new Scanner(System.in)){
            Quadrado quadrado = null;
            
            int opcao;
            do {
                System.out.println("\nMENU:");
                System.out.println("1 - Criar um quadrado padrão de lado = 1");
                System.out.println("2 - Criar um quadrado com valor específico de lado");
                System.out.println("3 - Criar um quadrado dado o valor do perímetro");
                System.out.println("4 - Criar um quadrado dado o valor da área");
                System.out.println("5 - Criar um quadrado dado o valor da diagonal");
                System.out.println("6 - Imprimir atributos do quadrado (lado, perímetro, área, diagonal)");
                System.out.println("\n9 - Encerrar o programa");
                System.out.print("\n\nEscolha uma opção: ");
                opcao = scanner.nextInt();
                
                switch(opcao) {
                    case 1 -> quadrado = new Quadrado(); // Criar quadrado padrão
                    case 2 -> {
                        System.out.print("Digite o valor do lado: ");
                        double lado = scanner.nextDouble();
                        quadrado = new Quadrado(lado); // Criar quadrado com lado específico
                    }
                    case 3 -> {
                        System.out.print("Digite o valor do perímetro: ");
                        double perimetro = scanner.nextDouble();
                        quadrado = new Quadrado(perimetro,"perimetro"); // Criar quadrado com base no perímetro
                    }
                    case 4 -> {
                        System.out.print("Digite o valor da área: ");
                        double area = scanner.nextDouble();
                        quadrado = new Quadrado(area,"area"); // Criar quadrado com base na área
                    }
                    case 5 -> {
                        System.out.print("Digite o valor da diagonal: ");
                        double diagonal = scanner.nextDouble();
                        quadrado = new Quadrado(diagonal, "diagonal"); // Criar quadrado com base na diagonal
                    }
                    case 6 -> {
                        if (quadrado != null) {
                            System.out.println("\nValores do quadrado:");
                            System.out.println("Lado: " + quadrado.getLado());
                            System.out.println("Perímetro: " + quadrado.Perimetro());
                            System.out.println("Área: " + quadrado.Area());
                            System.out.println("Diagonal: " + quadrado.Diagonal());
                        } else {
                            System.out.println("Crie um quadrado primeiro (opção 1 a 5)!");
                        }
                    }
                    case 9 -> {
                        System.gc();
                        System.out.println("Encerrando o programa...");
                    }
                    default -> System.out.println("Opção inválida!");
                }
            } while (opcao != 9);
        }
    }
}