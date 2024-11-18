import java.util.ArrayList;
import java.util.List;
public class Carrinho {
    private List<Produto> produtos = new ArrayList<>();

    public void addProduto(Produto produto){
        produtos.add(produto);
    }
}
