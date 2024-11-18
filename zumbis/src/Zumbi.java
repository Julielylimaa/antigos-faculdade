public class Zumbi {
    double vida;
    String nome;
    boolean verifica;

    double mostraVida(){
        System.out.println(vida);
        return 0;
    }

    boolean transfereVida(Zumbi zumbiAlvo, double quantia){
        verifica = false;
        if (vida > quantia){
            verifica = true;
            vida -=quantia;
            zumbiAlvo.vida += quantia;
            return true;
        }
        else 
            return false;
    }
}
