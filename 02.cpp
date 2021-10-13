#include<iostream>
float checar (float a, float b, float c, float delta){
	delta = (b*b) - (4*a*c);
	return delta;
}

int main(){
	float a= 0;
	float b= 0;
	float c= 0;
	float delta = 0;
	std::cout << "Digite 3 numeros: "; 
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << "O valor de delta e: " << checar(a, b, c, delta);
}
