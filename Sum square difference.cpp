#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int soma1  = 0, soma2 = 0, resposta=0;
	for(int i = 1; i <= 100; i++){
		soma1 += pow(i,2);
		//cout << soma1 << " ";
	}
	
	for(int i = 0; i <= 100; i++){
		soma2 += i;
		//cout << soma2 << " ";
	}
	resposta = pow(soma2,2);
	cout << "Resposta e : " << resposta << " " << soma1 << endl << "A diferença e " << resposta-soma1;
	
	return 0;
}
