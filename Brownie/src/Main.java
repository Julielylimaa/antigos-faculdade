import br.inatel.cdg.brownie.BrownieNutella;
import br.inatel.cdg.brownie.BrownieCafe;
import br.inatel.cdg.brownie.BrownieDoceDeLeite;
public class Main {
    public static void main (String[] args){
        BrownieCafe bwCafe = new BrownieCafe("Brownie de Café", 10, "Café");
        BrownieNutella bwNutella =
                new BrownieNutella("Brownie de Nutella", 70, "Nutella");
        BrownieDoceDeLeite bwDoceLeite =
                new BrownieDoceDeLeite("Brownie Doce de Leite", 15, "Doce de leite");


        bwCafe.addCarrinhoDeCompras();
        bwNutella.addCarrinhoDeCompras();
        bwDoceLeite.addCarrinhoDeCompras();
    }
}
