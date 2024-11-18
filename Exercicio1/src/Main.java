public class Main {
    public static void main (String[] args){
        Banda banda = new Banda("Malucos", "Rock");
    banda.empresario[0] = new Empresario("Jose Carlos", 9655357);

        //instanciando musicas
        Musica musica1= new Musica("musica1", 2.5);
        Musica musica2 = new Musica("musica2", 3.14);
        Musica musica3 = new Musica("musica3", 4.05);

        //instanciando membros
        Membro membro1= new Membro("Vini", "vocalista");
        Membro membro2 = new Membro("Nic", "Guitarrista");
        Membro membro3 = new Membro("Andrade", "baterista");

        //adicionando musicas e membros
        banda.addMusicaNova(musica1);
        banda.addMusicaNova(musica2);
        banda.addMusicaNova(musica3);

        banda.addMembroNovo(membro1);
        banda.addMembroNovo(membro2);
        banda.addMembroNovo(membro3);



        banda.mostraInfo();
    }
}
