public class Main {
    public static void main (String[] args){
        
        //instanciando objeto personagem
        Personagem miguel = new Personagem();

        miguel.nome = "Miguel";
        miguel.pontos = 100;

        //instanciando objeto arma
        Arma arma_miguel = new Arma();
        arma_miguel.descricao = "Arma do miguel";
        arma_miguel.resistencia = 100;
        arma_miguel.poder = 1000;

        miguel.arma = arma_miguel;


        System.out.println("Vida do personagem: "+miguel.pontos);
        miguel.tomarDano();
        System.out.println("Vida do personagem: "+miguel.pontos);

        
        miguel.arma.mostraInfoArma();
        arma_miguel.mostraInfoArma();
        miguel.usarArma();
        arma_miguel.mostraInfoArma();

    }
    
}
