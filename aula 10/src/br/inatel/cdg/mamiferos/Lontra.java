package br.inatel.cdg.mamiferos;

public class Lontra extends Mamifero implements Aquatico{
    public Lontra(String nome, double vida) {
        super(nome, vida);
    }

    @Override
    public void emitirSon(){
        System.out.println("A lontra ta gritando.");
    }

    public void nadar(){
        System.out.println("Lontra está nadando.");
    }

}
