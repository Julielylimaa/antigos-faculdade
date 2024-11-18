public class Main {
    public static void main (String[] args){
        Kart k1 = new Kart();
        Kart k2 = new Kart();
        Piloto p1 = new Piloto();
        Piloto p2 = new Piloto();


        p1.nome = "vilao";
        p1.vilao = true;
        p2.nome = "heroi";
        p2.vilao = false;

        k1.piloto = p1;
        k2.piloto = p2;

        k1.nome = "kart 1";
        k1.motor.cilindradas = "100";
        k1.motor.velocidadeMaxima= 120;
        k2.nome = "kart 2";
        k2.motor.cilindradas = "150";
        k2.motor.velocidadeMaxima= 150;

        System.out.println("Kart 1: ");
        k1.pular();
        k1.fazerDrift();
        k1.soltarTurbo();
        if (k1.piloto.vilao == true){
            System.out.println("é vilao");
            k1.piloto.soltaSuperPoder();
        }
        k1.motor.mostraInfo();

        System.out.println("Kart 2: ");
        k2.pular();
        k2.fazerDrift();
        k2.soltarTurbo();
        if (k2.piloto.vilao == true){
            System.out.println("é vilao");
            k2.piloto.soltaSuperPoder();
        }
        k2.motor.mostraInfo();
    }
}
