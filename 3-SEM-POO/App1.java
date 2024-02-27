package aula2602;

import java.util.Scanner;
public class App1 {
	
	public static void main (String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite um nome:");
		String nome = sc.nextLine();
		
		System.out.println("Digite sua idade: ");
		int idade = sc.nextInt();
		
		System.out.println("Digite seu salario: ");
		double salario = sc.nextDouble();
		
		System.out.println("Nome...: " +nome);
		System.out.println("Idade..: " +idade);
		System.out.println("Salário..: " +salario);
	}
}
