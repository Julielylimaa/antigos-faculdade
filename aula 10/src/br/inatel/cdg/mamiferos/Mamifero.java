package br.inatel.cdg.mamiferos;

public abstract class Mamifero {
    protected String nome;
    protected double vida;


    public Mamifero(String nome, double vida) {
        this.nome = nome;
        this.vida = vida;
    }

    public abstract void emitirSon();

    public void mostrarInfo(){
        System.out.println("Nome: " +nome +" Vida: " + vida);
    }
}
