#include <iostream>

const int TAMANHO_MATRIZ = 10;

void iniMatriz (int (*matriz)[TAMANHO_MATRIZ]){
	for (int i = 0; 1 < TAMANHO_MATRIZ; ++i) {
		for (int j=0; j < TAMANHO_MATRIZ; ++j) {
			matriz [i][j] = 0;
		}
	}
}

void preencMatriz (int (*matriz) [TAMANHO_MATRIZ]){
	int contador = 99;
	for (int i = 0; i < TAMANHO_MATRIZ; ++i) {
		for (int j = 0; j< TAMANHO_MATRIZ; ++j){
			matriz [i] [j] = contador--;
		}
	}
}
void impriMatriz (int (*matriz)[TAMANHO_MATRIZ]) {
	for (int i = 0; i<TAMANHO_MATRIZ; ++i){
		for (int j=0; j < TAMANHO_MATRIZ; ++j){
			std::cout << matriz[i][j] << "\t";
		}
		std::cout << std:: endl;
	}
}
int main () {
	int matriz [TAMANHO_MATRIZ][TAMANHO_MATRIZ];
	iniMatriz (matriz);
	preencMatriz (matriz);
	impriMatriz (matriz);
	
	return 0;
}
