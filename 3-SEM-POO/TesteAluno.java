package util;

public class TesteAluno {
	public static void main(String[] args) {
		Aluno a1 = new Aluno();
		a1.setNome("Jose");
		a1.setMatricula("1231020-1");
		a1.setNota1(8.0);
		a1.setNota2(7.0);
		a1.setNota3(4.0);
		a1.setPeso1(1);
		a1.setPeso2(2);
		a1.setPeso3(3);
		Aluno a2 = new Aluno("lara","1214547-9", 4.5,8.75,5.5,1,2,3);
		System.out.println("Nome....: " +a1.getNome());
		System.out.println("Matricula...:" +a1.getMatricula());
		System.out.println("Media...: %.2f", a1.mediaPonderada());
		System.out.println("\n---------------");
		System.out.println("Nome....:"+a2.getNome());
		System.out.println("");
	
	}
}
