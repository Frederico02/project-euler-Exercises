//Even Fibonacci numbers
#include<iostream>
using namespace std;


int main()
{
    double n = 4000000, aux, temp, ult=1, penult=0;
    double soma = 0, fibo = 0;

    for(aux=3 ; aux<=n ; aux++){
	    fibo = (ult+penult);
	    //cout << fibo << " ";
		if((fibo%2) == 0){
	    	soma += (ult+penult);
		}

        temp = penult;
        penult = ult;
        ult = ult + temp;
    }
    cout << endl <<soma;

    return 0;
}

