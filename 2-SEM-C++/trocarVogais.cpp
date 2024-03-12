#include <iostream>
#include <cstring>
using namespace std;

void trocVogal (char *frase){
	while (*frase) {
		switch (*frase) {
			case 'a':
				*frase = 'u';
				break;
			case 'e':
				*frase = 'o';
				break;
			case 'i':
				*frase = 'u';
				break;
			case 'o':
				*frase= 'a';
				break;
			case 'u':
				*frase = 'e';
				break;
		}
		frase++;
	}
}
void imprimirFrase(const char *frase) {
	std::cout << "Frase trocada: " << frase << std::endl;
}
int main (){
	char frase [100];
	
	std:cout << "Digite uma frase (max. 100 carac. ):";
	gets (frase);
	
	trocVogal(frase);
	imprimirFrase (frase);
	
	return 0;
}
