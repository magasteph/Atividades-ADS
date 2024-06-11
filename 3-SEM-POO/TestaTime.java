public class TestaTime {
    public static void main(String[] args) {
        TimeFutebol time1 = new TimeFutebol("Time A",0);
        TimeFutebol time2 = new TimeFutebol("Time B",0);
        TimeFutebol time3 = new TimeFutebol("Time C",1);


        time1.empatou();
        time2.venceu();
        time3.perdeu();

        
        time1.imprimirDados();
        
        time2.imprimirDados();
       
        time3.imprimirDados();
    }

}
