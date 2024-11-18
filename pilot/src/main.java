import java.util.Scanner;

public class main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Informe o primeiro numero: ");
        int num1 = sc.nextInt();
        System.out.println("Informe o segundo numero: ");
        int num2 = sc.nextInt();
        int result = num1+num2;
        System.out.println("A soma é: " + result);
    }
}
