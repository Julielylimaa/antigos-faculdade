package br.inatel.cdg.mamiferos;

public class Cachorro extends Mamifero {

    public Cachorro(String nome, double vida) {
        super(nome, vida);
    }

    @Override
    public void emitirSon(){
        System.out.println("O cachorro está latindo.");
    }
}
