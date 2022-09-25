#include<iostream>
using namespace std;


int main(){
	
	int soma = 0;
	for(int i = 0; i < 1000; i++){
		if(((i%3) == 0) or ((i%5) == 0)){
			soma += i;
		}
	}
	
	cout << soma;
	
	return 0;
}
