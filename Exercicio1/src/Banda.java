public class Banda {
    String nome;
    String genero;

    //array empresario 0..1
    Empresario[] empresario = new Empresario[1];
    //array musica 1..*
    Musica [] musicas = new Musica[10];
    //array membro 1..*
    Membro[] membros = new Membro[10];
    

    void mostraInfo(){
        System.out.println("Informações da banda " +nome +":");
        System.out.println("Genero: " +genero +"\nEmpresario = " +empresario[0].nome +" cnpj: " +empresario[0].cnpj);
        System.out.println("\nMembros: ");
        for (int i = 0; i< membros.length; i++){
            if(membros[i]!=null){
                System.out.println(membros[i].funcao +": " + membros[i].nome);
            }
        }

        System.out.println("\nMusicas: ");
        for (int i = 0; i<musicas.length; i++){
            if (musicas[i] != null){
                System.out.println("Nome: "+musicas[i].nome + "  Duração: " +musicas[i].duracao);
            }
        }

        
    }
    void addMusicaNova(Musica musica){
        for (int i =0; i < musicas.length; i++){
            if(musicas[i] == null){
                musicas[i] = musica;
                break;
            }
        }
    }
    void addMembroNovo(Membro membro){
        for (int i =0; i < membros.length; i++){
            if(membros[i] == null){
                membros[i] = membro;
                break;
            }
        }
    }

    Banda(String nome, String genero){
        this.nome = nome;
        this.genero = genero;
    }
}
