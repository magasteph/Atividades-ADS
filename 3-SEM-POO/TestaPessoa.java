package util;

public class TestaPessoa {

	public static void main(String[] args) {
		Pessoa p = new Pessoa();
		p.setNome("Ari");
		p.setIdade(10);
		
		System.out.println("Nome..: " + p.getNome());
		System.out.println("Idade..: " + p.getIdade());
	}

}
