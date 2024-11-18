package br.inatel.cdg.mamiferos;

public class Boi extends Mamifero{
    public Boi(String nome, double vida) {
        super(nome, vida);
    }

    @Override
    public void emitirSon(){
        System.out.println("O boi está mugindo.");
    }
}

