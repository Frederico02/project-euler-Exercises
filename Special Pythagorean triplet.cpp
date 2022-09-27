#include <iostream>
using namespace std;

int main(){
	const int soma = 1000;
	int a;
	
	for(a = 1; a <= soma/3; a++){
		int b;
		for(b = a+1; b <= soma/2; b++){
			int c = soma - a - b;
			if(a*a + b*b == c*c){
				cout << a << " " << b << " " << c << " " << a+b+c << " " << a*b*c;
			}
		}
	}
	return 0;
}
