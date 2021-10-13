#include<iostream>
float checar (float a, float b, float c){
	if(a > b && a > c){
		return a;
	}else if(b > a && b > c){
		return b;
	}else if(c > a && c > b){
		return c;
	}
		
}


int main(){
	float a= 0;
	float b= 0;
	float c= 0;
	std::cout << "Digite 3 numeros: "; 
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << "O maior numero e: "<< checar(a, b, c);
	
}
