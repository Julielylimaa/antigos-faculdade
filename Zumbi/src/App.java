import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        zumbi z = new zumbi();
        z.nome = "Zumbi 1";
        z.alimentado = false;


        Scanner entrada = new Scanner(System.in);
        System.out.println("Qual a posição inicial do zumbi? ");
        z.posicao = entrada.nextDouble();

        System.out.println("Qual sua posição inicial? ");
        double posInicial = entrada.nextDouble();
        
        z.distancia(posInicial);

        System.out.println("O " +z.nome + " estava com " +z.vida);
        
        //if (z.alimentado == true){
           // z.comeu(25);
        //}
        //else{
           // z.naocomeu(10);
       // }
       // System.out.println("Agora está com " +z.vida);
    }
}
