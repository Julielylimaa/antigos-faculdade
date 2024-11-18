public class zumbi{

    //membros da classe
    String nome;
    double vida = 20;
    boolean alimentado;
    double posicao; //em metros
    double velocidade = 4; // m/s

    public void comeu(double maisvida){
        vida += maisvida;
    }

    public void naocomeu(double menosvida){
        vida -= menosvida;
        
    }

    public void distancia(double posPessoa){
        posicao = posPessoa - posicao;

        double segundos; //segundos para chegar ate determinado lugar
        segundos = (posicao/4.0);

        if (segundos <0){
            segundos = segundos * -1;
        }

        System.out.println("O zumbi levará "+segundos +" segundos para chegar ate voce");

    }
}