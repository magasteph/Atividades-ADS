package aula0403;

public class App2 {
	public static void main (String[] args) {
		
		int v[]= {11,22,34,24,35,6,37,84,9,10};
		for (int i=0; i<v.length; i++) {
			System.out.println(v[i]);
		
		}
		int soma = 0;
		int impar = 0;
		
		for (int i=0; i<v.length; i++) {
			soma = soma + v[i];
		}
		System.out.println("Soma >> " + soma);
		
		for (int i=0; i<v.length; i++) {
			if (v[i]%2==1){
				impar = impar + v[i];
			}
		}
		System.out.println("Impar >> "+impar);
	}
}
