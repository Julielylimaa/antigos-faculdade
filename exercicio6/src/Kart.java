public class Kart {
    String nome;
    Piloto piloto;
    Motor motor;

    //Composição
    public Kart(){
        motor = new Motor();
    }


    void pular(){
        System.out.println("pula");
        
    }

    void soltarTurbo(){
        System.out.println("soltar turbo");
    }

    void fazerDrift(){
        System.out.println("fazer drift");
    }

    
}