public class TimeFutebol{
    String nomeTime;
    int qtdJogo;
    int ptGanhos;
    int estiloJogo;

    public TimeFutebol(String nomeTime, int estiloJogo){
        this.nomeTime = nomeTime;
        this.estiloJogo = estiloJogo;
        this.qtdJogo = 0;
        this.ptGanhos = 0;
    }
    public int EstiloJogo(){
        return estiloJogo;
    }

    public void venceu(){
        ptGanhos += 3;
        qtdJogo++;
    }
    public void empatou(){
        ptGanhos += 1;
        qtdJogo++;
    }
    public void perdeu(){
        ptGanhos += 0;
        qtdJogo++;
    }

    public void imprimirDados(){
        System.out.println("Nome: " + nomeTime);
        System.out.println("Quantidade Jogos: " + qtdJogo);
        System.out.println("Pontos: " + ptGanhos);
        System.out.println("Estilo de Jogo:  " + (estiloJogo==0 ? "Retranqueiro" : "Atacante"));
    
    }
}
