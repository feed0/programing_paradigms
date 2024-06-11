public class Aluno extends Pessoa implements Autenticacao {
    Aluno() {}
    Aluno(String nome, int id, Endereco end, String cpf, String curso){
        this.nome = nome;
        this.id = id;
        this.end = end;
        this.cpf = cpf;
        this.curso = curso;
    }
    @Override
    public boolean autenticar(String id){
        return (id.equals("Aluno"));
    }
}
