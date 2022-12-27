#include <iostream>
using namespace std;


int main() {
	double cartao;
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16;
	
	cin >> cartao;
	d1 = cartao / 1000000000000000; d1 %= 10;
	d2 = cartao / 100000000000000; d2%=10;
	d3 = cartao / 10000000000000; d3%=100;
	d4 = cartao / 1000000000000; d4%=1000;
	
	cout << d1 << " "<< d2 << " " << d3 <<" "<< d4 <<" "<< d5 <<" "<< d6 <<" "<< d7 <<" "<< d8 <<" "<< d9 <<" "<< d10 <<" "<< d11 <<" "<< d12 <<" "<< d13 <<" "<< d14 <<" "<< d15 <<" "<< d16;
   return 0;
}
