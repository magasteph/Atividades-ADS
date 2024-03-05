package aula0403;

public class App1 {
	public static void main (String[] args) {
		String nome[]= new String[3];
		nome[0]="Gabriel";
		nome[1]="Maria Clara";
		nome[2]="Eduardo";
		int []valor = {43,3,54,56,6,2};
		
		System.out.println("vetor nome > " + nome.length);
		System.out.println("vetor nome > " + valor.length);
		
		System.out.println("Nome >> " +nome[1]);
		System.out.println("Valor >> " + valor[3]);
		
	}
}
