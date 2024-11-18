import java.util.Scanner;


public class main{
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite a quantidade de lanches da hora 1:");
        int x = entrada.nextInt();
        System.out.println("Digite a quantidade de lanches da hora 2:");
        int y = entrada.nextInt();
        System.out.println("Digite a quantidade de lanches da hora 3:");
        int z = entrada.nextInt();
    int soma = x+y+z;

    System.out.println("A soma de lanches é " +soma);
        
    }

    
}