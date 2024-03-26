package util;

public class TestaPessoa {

	public static void main(String[] args) {
		// cria o objeto
		Pessoa p = new Pessoa();
		// inicalizar
		p.setNome("Ari");
		p.setIdade(10);
		// imprimir 
		System.out.println("Nome..: " + p.getNome());
		System.out.println("Idade..: " + p.getIdade());
	}

}
