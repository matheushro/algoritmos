#include<iostream>
void checar (float numero){
	if(numero > 0){
		std::cout << "Este numero e positivo";
	}else{
		std::cout << "Este numero e negativo";
	}
}


int main(){
	float numero = 0;
	
	std::cout << "Digite um numero: " << std::endl;
	std::cin >> numero;
	checar(numero);
	return 0;
}
