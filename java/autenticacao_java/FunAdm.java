public class FunAdm extends Pessoa implements Autenticacao {
    FunAdm() {}
    FunAdm(String nome, int id, Endereco end, String cpf, String funcao){
        this.nome = nome;
        this.id = id;
        this.end = end;
        this.cpf = cpf;
        this.funcao = funcao;
    }
    @Override
    public boolean autenticar(String id){
        return (id.equals("FunAdm"));
    }
}
