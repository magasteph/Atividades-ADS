#include <iostream>
int main(){
    double numero1, numero2,
resultado;

    std::cout<<"Digite o primeiro numero:";
    std::cin>>numero1;
    std::cout<<"Digite o segundo numero:";
    std::cin>>numero2;

resultado = numero1 - numero2;

if (resultado<0){
    std::cout<<"O resultado e negativo"<< std::endl; 
}    
std::cout<<"O resultado da subtracao e:"<<resultado<<
std::endl;

return 0;


}
