package br.inatel.cdg.comprador;

import br.inatel.cdg.brownie.Brownie;

public class Comprador {

    private String nome;
    private double saldo;

    public Comprador(String nome, double saldo) {
        this.nome = nome;
        this.saldo = saldo;
    }

    public void efetuarCompra(Brownie brownie){
        if (saldo >= brownie.getPreco()){
            saldo -= brownie.getPreco();
        }
    }

    public String getNome() {
        return nome;
    }

    public double getSaldo() {
        return saldo;
    }
}
