import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Aluno> alunos = new ArrayList<>();
        List<Professor> professores = new ArrayList<>();
        List<FunAdm> funcionarios = new ArrayList<>();

        for(int i=1;i<=10;i++){
            Aluno aluno = new Aluno();
            alunos.add(aluno);
        }

        for(int i=1;i<=5;i++){
            Professor professor = new Professor();
            professores.add(professor);
        }
        for(int i=1;i<=5;i++){
            FunAdm funAdm = new FunAdm();
            funcionarios.add(funAdm);
        }

        System.out.println("numero de alunos: "+alunos.size());
        System.out.println("numero de professores: "+professores.size());
        System.out.println("numero de funcionarios administrativos: "+funcionarios.size());
    }
}