package br.inatel.cdg;

import br.inatel.cdg.mamiferos.Boi;
import br.inatel.cdg.mamiferos.Cachorro;
import br.inatel.cdg.mamiferos.Lontra;
import br.inatel.cdg.mamiferos.Mamifero;


public class Main {
    public static void main(String[] args) {
        Cachorro cachorro = new Cachorro("Dog", 10.5);
        Lontra lontra = new Lontra("Lontrinha", 4);
        Boi boi = new Boi("boi", 22);

        



        cachorro.mostrarInfo();
        cachorro.emitirSon();

        lontra.mostrarInfo();
        lontra.emitirSon();
        lontra.nadar();

        boi.mostrarInfo();
        boi.emitirSon();
    }
}