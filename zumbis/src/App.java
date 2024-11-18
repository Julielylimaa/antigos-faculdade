public class App {
    public static void main (String [] args){
        Zumbi z1 = new Zumbi();
        Zumbi z2 = new Zumbi();
    
        z1.vida = 200;
        z2.vida = 100;

        System.out.println("Vida de z1:");
        z1.mostraVida();
        System.out.println("Vida de z2: ");
        z2.mostraVida();

        boolean res = z1.transfereVida(z2, 400);
        if (res == true){
            System.out.println("É possivel transferir");
        }
        else 
            System.out.println("Nao é possivel transferir.");

        System.out.println("Vida de z1:");
        z1.mostraVida();
        System.out.println("Vida de z2: ");
        z2.mostraVida();




    }
}
