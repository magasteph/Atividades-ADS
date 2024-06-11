/* Construa uma classe Piloto contendo como atributos a quantidade de horas de voo e o nome do piloto. Implemente nesta classe um método construtor 
que receba como parâmetro uma String com o nome do piloto, e os métodos de acesso/modificadores apenas para o atributo do nome do piloto.
Todo objeto piloto instanciado deve inicialmente estar com a quantidade de horas de voo zerada. Aclasse deve disponibilizar um método
 adicionaHoras(int horas) que adiciona uma quantidade dehoras de voo ao piloto. Crie um método imprime que imprima o nome do piloto e a quantidade 
dehoras de voo, sendo que deverá ser impresso o tipo do piloto: até 200 horas, co-piloto, caso contrário comandante.*/ 


public class Piloto {  
    private String nomePiloto;
    private int horasVoo;
    

    public Piloto(String nomePiloto){
        this.nomePiloto = nomePiloto;
    }
    public String getnomePiloto(){
        return nomePiloto;
    }
    public void setnomePiloto(String nomePiloto){
        this.nomePiloto = nomePiloto;
    }
   

    public void adicionarHoras(int horasVoo){
        this.horasVoo = horasVoo;

    }

    public void imprimirDados(){
        System.out.println("Piloto: " + nomePiloto);
        if(horasVoo <= 200){
            System.out.println("Co-piloto");
        }else{
            System.out.println("Comandante");
        }
    }

   
  


}
