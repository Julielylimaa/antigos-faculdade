package br.inatel.cdg.exercicio1;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Main {
    public static void main(String[] args){
        List<Double> listaDouble = new ArrayList<>();

        for(int i= 0; i <5; i++){
            listaDouble.add(new Random().nextDouble()*100);

        }

        System.out.println("Antes da ordenação: ");
        for(Double double_nao_ordenado : listaDouble){
            System.out.println(double_nao_ordenado);
        }
    }

}
