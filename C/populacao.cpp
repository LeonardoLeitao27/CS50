#include <iostream>
using namespace std;


int main() {
	int n1, max,anos=0,temp,ka;
	bool trava = false;
	
	cout << "Qual a populacao inicial?\n";
	cin >> n1;
	cout << "Qual a populacao desejada?\n";
	cin >> max;
	
	while(n1<max){
		if(n1<max || trava==false){
			n1 += n1/3;
			trava = true;
		}

		if(n1<max && trava==true){
			n1-=n1/4;
			trava = false;
		}
		anos++;
		cout << n1 << " ";
	}
	cout << "A populacao chegara nesse numero em " << anos << " anos";
	
   return 0;
}
