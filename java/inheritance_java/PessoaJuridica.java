public class PessoaJuridica extends Pessoa {
    private String inscricaoEstadual;
    private String cnpj;

    public PessoaJuridica(String razaoSocial, String inscricaoEstadual) {
        super(razaoSocial);
        this.inscricaoEstadual = inscricaoEstadual;
        this.cnpj = "";
    }

    public PessoaJuridica(String razaoSocial, String inscricaoEstadual, String cnpj) {
        super(razaoSocial);
        this.inscricaoEstadual = inscricaoEstadual;
        this.cnpj = cnpj;
    }

    public PessoaJuridica(String razaoSocial, String logradouro, String bairro, String cidade, String estado, String cep, String telefone, String email, String inscricaoEstadual, String cnpj) {
        super(razaoSocial, logradouro, bairro, cidade, estado, cep, telefone, email);
        this.inscricaoEstadual = inscricaoEstadual;
        this.cnpj = cnpj;
    }

    public String getInscricaoEstadual() {return inscricaoEstadual;}
    public void setInscricaoEstadual(String inscricaoEstadual) {this.inscricaoEstadual = inscricaoEstadual;}

    public String getCnpj() {return cnpj;}
    public void setCnpj(String cnpj) {this.cnpj = cnpj;}
}
