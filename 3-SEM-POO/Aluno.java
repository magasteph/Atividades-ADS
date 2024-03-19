public class Aluno{
	String nome;
	String rgm;
	// construtor Vazio ou Default 
	// construtor >> Inicializar os atributos
	// métodos com o mesmo nome >> Ovewrload ou sobrecarga
	public Aluno() {
		// primeiro chama vazio porque ainda n tem os dados p preencher
	}
	public Aluno(String nome, String rgm){
		// this. diferencia o atributo chamado da classe da variavel declarada no metodo 
			this.nome = nome;
			this.rgm = rgm;
		}
}
