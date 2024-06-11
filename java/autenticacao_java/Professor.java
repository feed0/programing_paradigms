public class Professor extends Pessoa implements Autenticacao{
    Professor() {}
    Professor(String nome, int id, Endereco end, String cpf, String titulacao){
        this.nome = nome;
        this.id = id;
        this.end = end;
        this.cpf = cpf;
        this.titulacao = titulacao;
    }
    
    @Override
    public boolean autenticar(String id){
        return id.equals("Professor");
    }
}
