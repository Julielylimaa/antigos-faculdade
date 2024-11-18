public class Personagem{
    //atributos
    String nome;
    int pontos;
    Arma arma; //agregaçao


    //metodos
    void usarArma(){
        arma.resistencia -=2;
    }

    void tomarDano(){
        pontos -=5;
    }
}