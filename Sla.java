import java.util.Scanner;
import java.util.Random;

public class Sla {
    public static void main (String[] args){
        Scanner entrada = new Scanner(System.in);

        Random rand = new Random();

        int x = rand.nextInt(10)+1;

        System.out.println("Tente adivinhar um numero entre 1 e 10: ");

        int x1 = entrada.nextInt();

        while (x != x1){
            if (x1 < x){
                System.out.println("O numero é maior do que " +x1);
            }
            else{
                System.out.println("O numero é menor do que " +x1);
            }
            System.out.println("Voce errou! Tente novamente:");

            x1 = entrada.nextInt();
        }

        System.out.println("Voce acertou!");
        entrada.close();

    }
}