public class TestarRoupa {
    public static void main(String[] args) {
        Roupa roupa1 = new Roupa(50);
        Roupa roupa2 = new Roupa(80);

        roupa1.limpa();
        roupa2.suja();
        roupa1.suja();

        System.out.println("Roupa 1:" );
        roupa1.imprimirDados();
        System.out.println("Roupa 2:" );
        roupa2.imprimirDados();
        
    }
}
