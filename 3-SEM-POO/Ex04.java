/* Crie um programa que receba quatro valores quaisquer e mostre a média e
soma entre eles. */

public class Ex04{
	public static void main(String args[]){
		int valor1 = Integer.parseInt(args[0]);
		int valor2 = Integer.parseInt(args[1]);
		int valor3 = Integer.parseInt(args[2]);
		int valor4 = Integer.parseInt(args[3]);

		int media = ((valor1 + valor2 + valor3 + valor4) / 4);

		int soma = (valor1 + valor2 + valor3 + valor4);

		System.out.println("A media e de: " + media + " E a soma de: " + soma);
	}
} 