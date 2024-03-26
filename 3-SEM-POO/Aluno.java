package util;

public class Aluno {
	//atributos
	private String nome; 
	private String matricula; 
	private double nota1;
	private double nota2;
	private double nota3;
	private int peso1;
	private int peso2;
	private int peso3;
	// construtor padrão
	public Aluno() {
		
	}
	// construtor com campos
	public Aluno(String nome, String matricula, 
			double nota1, double nota2, 
			double nota3, int peso1, 
			int peso2, int peso3) {
		this.nome = nome;
		this.matricula = matricula;
		this.nota1 = nota1;
		this.nota2 = nota2;
		this.nota3 = nota3;
		this.peso1 = peso1;
		this.peso2 = peso2;
		this.peso3 = peso3;
	}
	
	//getters e setters 
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		if(nome.length()>2)
			this.nome = nome;
	}
	public String getMatricula() {
		return matricula;
	}
	public void setMatricula(String matricula) {
		if(matricula.length()==9)
			this.matricula = matricula;
	}
	public double getNota1() {
		return nota1;
	}
	public void setNota1(double nota1) {
		this.nota1 = nota1;
	}
	public double getNota2() {
		return nota2;
	}
	public void setNota2(double nota2) {
		this.nota2 = nota2;
	}
	public double getNota3() {
		return nota3;
	}
	public void setNota3(double nota3) {
		this.nota3 = nota3;
	}
	public int getPeso1() {
		return peso1;
	}
	public void setPeso1(int peso1) {
		this.peso1 = peso1;
	}
	public int getPeso2() {
		return peso2;
	}
	public void setPeso2(int peso2) {
		this.peso2 = peso2;
	}
	public int getPeso3() {
		return peso3;
	}
	public void setPeso3(int peso3) {
		this.peso3 = peso3;
	}
	// media ponderada 
	public double mediaPonderada() {
		double media = ((nota1*peso1)+
				(nota2*peso2)+
				(nota3*peso3))
				/(peso1+peso2+peso3);
		return media;
	}
}

