/* 3) Construa uma classe Arma contendo um atributo char para armazenar o tipo da arma ('L' lança, 'E' espada e 'A' arco e flecha) e 
um atributo para armazenar a força de destruição da arma (5 para espada, 4 para a lança e 3 para arco e flecha). 
Implemente nesta classe um método construtor que receba como parâmetro um valor char com o tipo da arma. 
Todo objeto instanciado da classe Arma deve ter a força de destruição configurada dependendo do tipo da arma. 
Crie um método de acesso (get/set) para o atributo do tipo da arma e um para o atributo força de destruição. 
Crie um método imprime que imprima o tipo da arma e sua força de destruição.

Faça a classe TestaArma contendo o método main para testar o funcionamento da classe e instanciar 3 armas, um para cada tipo de arma, 
imprima o tipo e força de destruição de cada arma.  */

public class Arma {
    char tipoArma;
    int forca;

    public Arma(char tipoArma){
        this.tipoArma = tipoArma;
        switch (tipoArma) {
            case 'L':
                forca = 4;
                break;
            case 'E':
                forca = 5;
                break;
            case 'A':
                forca = 3;
                break;
            default:
                System.out.println("Tipo não indentificado");
                break;
        }
    }
    public char getTipoArma(){
    
        return tipoArma;
    }
    public void setTipoArma(char tipoArma) {
        this.tipoArma = tipoArma;
    }

    public int getForca(){
        return forca;
    }
    public void setForca(int forca){
        this.forca = forca;
    }

    public void imprimeDados(){
        System.out.println("Tipo arma " + tipoArma );
        System.out.println("Forca de Destruicao: " + forca);
    }

}
