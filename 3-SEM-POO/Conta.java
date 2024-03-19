
public class Conta {
	double saldo;
	String nrAgencia;
	String titular;
	String nrConta;
	int codBanco;

	public Conta() {
		
	}

	public Conta(double saldo, String nrAgencia, String titular, String nrConta, int codBanco) {
		
		this.saldo = saldo;
		this.nrAgencia = nrAgencia;
		this.titular = titular;
		this.nrConta = nrConta;
		this.codBanco = codBanco;
	}
	public void saque(double valor){
		if(valor>0){
			if(saldo>valor){
				saldo = saldo - valor;
			}else {
				System.out.println("Saldo insuficiente");
			}
		}
	}
	public void deposito(double valor ){
		if(valor>0){
			saldo=saldo+valor;
		}
	}

	public void imprimeDados() {
		System.out.println("\n----------------------------");
		System.out.println("AGENCIA:\t"+nrAgencia+"\t BANCO:\t"+codBanco);
		System.out.println("Conta: \t"+nrConta);
		System.out.println("TITULAR: \t"+titular);
		System.out.println("SALDO: \t"+saldo);
		System.out.println("-----------------------------\n");
		
	}
	double getSaldo() {
		return saldo;
	}
}