public class Principal {
	public static void main (String[] args){
		
		Aluno aluno1 = new Aluno();
		System.out.print(" Nome...: " + aluno1.nome);
		System.out.print(" RGM...: " + aluno1.rgm);
		
		System.out.print(" \n");

		Aluno aluno2 = new Aluno("Melissa","1020-4");
		System.out.print(" Nome...: " + aluno2.nome);
		System.out.print(" RGM...: " + aluno2.rgm);

	}
}
