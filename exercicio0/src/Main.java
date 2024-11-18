public class Main {
    public static void main (String[] args){
        Cantina cantina = new Cantina();
        cantina.nome = "Cantina do Inatel";


        Salgado salgado1 = new Salgado();
        Salgado salgado2 = new Salgado();
        Salgado salgado3 = new Salgado();

        salgado1.nome = "telebacon";
        salgado2.nome = "coxinha";
        salgado3.nome = "empada ";

        cantina.addSalgado(salgado1);
        cantina.addSalgado(salgado2);
        cantina.addSalgado(salgado3);   
        cantina.mostraInfo();

    }
}
