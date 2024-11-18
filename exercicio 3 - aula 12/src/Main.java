import java.util.*;

public class Main {
    public static void main(String[] args) {

        List <Integer> lista = new ArrayList<>();
        Set <Integer> conjunto = new HashSet<>();
        Map<Integer, Integer> conjunto1 = new HashMap<>();


        int aux = 100000;
        long ti;
        long tf;
        long tt;

        ti = System.currentTimeMillis();

        for (int i = 0; i < aux; i++){
            lista.add(i);
        }
        tf = System.currentTimeMillis();

        tt = tf - ti;

        System.out.println("Tempo para inserir: "+tt +"ms");

        ti = System.currentTimeMillis();
        for (int i = 0; i < aux; i++){
            lista.contains(i);
        }
        tf = System.currentTimeMillis();
        tt = tf - ti;
        System.out.println("Tempo para acessar: "+tt +"ms");

        ti = System.currentTimeMillis();
        for (int i = 0; i < aux; i++){
            conjunto.add(i);
        }
        tf = System.currentTimeMillis();

        tt = tf - ti;

        System.out.println("Tempo para inserir: "+tt +"ms");
    }
}