import java.util.Scanner;

public class aula4 {
    public static void main (String[] args){
        
        Scanner entrada=new Scanner(System.in);

        System.out.println("Qual a quantidade de alunos? ");
        int numAlunos = entrada.nextInt();
        switch(numAlunos){

            case 10:
                System.out.println("Sala 1-16");
                break;

            case 20:
                System.out.println("Sala 1-16");
                break;

            case 30:
                System.out.println("Sala 1-22");
                break;
    
            default: 
                System.out.println("Nenhuma sala pode ser selecionada");
        }

        entrada.close();
    }
}
