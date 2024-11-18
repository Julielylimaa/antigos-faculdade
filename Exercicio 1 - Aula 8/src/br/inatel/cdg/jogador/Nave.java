package br.inatel.cdg.jogador;

import br.inatel.cdg.inimigo.Asteroide;

public class Nave {
    private String nome;
    private double vida;
    private String tipoTiro;



    public Nave(String nome, double vida, String tipoTiro){
        this.nome = nome;
        this.vida = vida;
        this.tipoTiro = tipoTiro;
    }

    public void atirar(Asteroide ast){
        if (tipoTiro == "Explosivo"){
            ast.destruir();
        } //explosivo destroi todos

        else {
            if (ast.getTipoAsteroide() == "Grande"){
                System.out.println("Não pode destruir");
            }
            else{
                ast.destruir();
            }
        }
    }
}
