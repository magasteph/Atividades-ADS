package util;


public class Pessoa {
	
	 protected String nome;
	 protected int idade;
	 
	 // getters e setters
	 // get = pegar atributo
	 // set = mudar atributo
	 
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
		
}

//no mesmo diretorio
//encapsulamento >> private, public,protected 
//default >> public 
//protected >> public 
//private >> apenas selecionados 


//outro  diretorio
//encapsulamento >> private, public,protected 
//default >> private 
//protected >> protected  
//private >> apenas selecionados independente do diretorio
