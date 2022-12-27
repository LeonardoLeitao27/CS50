#include <iostream>
using namespace std;


int main() {
	float dinheiro;
	int moedas = 0, vinteECinco = 0, dez = 0, cinco = 0, um = 0;
	
	cin >> dinheiro;
	//erro
	dinheiro+=0.01;
	
	while(dinheiro >= 0.2500000000){
		dinheiro-=0.2500000000;
		vinteECinco++;
		moedas++;
	}
	
	while(dinheiro >= 0.1000000000){
		dinheiro-=0.1000000000;
		dez++;
		moedas++;
	}
	
	while(dinheiro >= 0.0500000000){
		dinheiro-=0.0500000000;
		cinco++;
		moedas++;
	}
	
	while(dinheiro >= 0.0100000000){
		dinheiro-=0.0100000000;
		um++;
		moedas++;
	}
	
	
	 
   	cout << "Moedas: "<< moedas <<"\n25: " << vinteECinco <<"\n10: " << dez <<"\n05: " << cinco <<"\n01: " << um <<"\nresto: " << dinheiro;
   return 0;
}
