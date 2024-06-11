public class Pessoa {
    protected String nome;
    protected String logradouro;
    protected String bairro;
    protected String cidade;
    protected String estado;
    protected String cep;
    protected String telefone;
    protected String email;

    public Pessoa() {
        this.nome = "";
        this.logradouro = "";
        this.bairro = "";
        this.cidade = "";
        this.estado = "";
        this.cep = "";
        this.telefone = "";
        this.email = "";
    }

    public Pessoa(String nome) {
        this.nome = nome;
        this.logradouro = "";
        this.bairro = "";
        this.cidade = "";
        this.estado = "";
        this.cep = "";
        this.telefone = "";
        this.email = "";
    }

    public Pessoa(String nome, String logradouro, String bairro, String cidade, String estado, String cep, String telefone, String email) {
        this.nome = nome;
        this.logradouro = logradouro;
        this.bairro = bairro;
        this.cidade = cidade;
        this.estado = estado;
        this.cep = cep;
        this.telefone = telefone;
        this.email = email;
    }
}