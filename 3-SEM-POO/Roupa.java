/* Construa uma classe Roupa, contendo um atributo para armazenar o peso em Kg da roupa e 
um atributo para controlar se ela está suja ou limpa. 
Implemente nesta classe um método  construtor que receba como parâmetro o peso da roupa. 
Todo objeto instanciado da classe Roupa deve estar limpo. 
Crie os métodos de acesso/modicadores para o atributo de peso e disponibilize dois métodos: suja() e limpa() para alterar 
o estado do atributo que controla (roupa suja / limpa). 
Crie um método status que imprima o peso da roupa e seu estado de limpeza.

Faça a classe TestaRoupa contendo o método main para testar o funcionamento da classe e instanciar 2 objetos, 
um para roupa sua e outro para roupa limpa.*/ 

public class Roupa {
    private double peso;
    private boolean limpa;

    public Roupa(double peso){
        this.peso = peso;
        this.limpa = true;
    }

    public double getPeso(){
        return peso;
    }
    public void setPeso(double peso){
        this.peso=peso;
    }
    
    public void suja(){
        limpa = false;
    }
    public void limpa(){
        limpa = true;
    }

    public void imprimirDados(){
        System.out.println("Peso: " +peso);
        if(limpa){
            System.out.println("Roupa Limpa");
        }else{
            System.out.println("Roupa Suja");
        }
       
    }

}
