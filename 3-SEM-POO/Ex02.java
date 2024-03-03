/* Ex02 - Faça um programa que receba a quantidade e o valor de dois produtos, no
seguinte formato: quantidade1 valor1 quantidade2 valor2. O programa deve
calcular esses valores seguindo a fórmula total = (quantidade1 x valor1) +
(quantidade2 x valor2). O valor total deve ser apresentado no final da execução */

public class Ex02{
	public static void main(String args[]){

		// converter string em inteiro (int)

		int quantidade1 = Integer.parseInt(args[0]);
		int valor1 = Integer.parseInt(args[1]);

		int quantidade2 = Integer.parseInt(args[2]);
		int valor2 = Integer.parseInt(args[3]);

		int total = (quantidade1 * valor1) + (quantidade2 * valor2);

		System.out.println("Total : " + total );
		
	}
}