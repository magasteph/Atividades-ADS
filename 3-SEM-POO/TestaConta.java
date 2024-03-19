
public class TestaConta {

	public static void main(String[] args) {
		// criação da conta
		Conta c = new Conta(1000.00,"102030","Stephanne", "894441320",89);
		// impressao de dados
		c.imprimeDados();
		c.saque(500.00);
		c.imprimeDados();
		c.deposito(200.00);
		c.imprimeDados();
		System.out.println(c.getSaldo());
		

	}

}
