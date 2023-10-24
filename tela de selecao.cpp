#include <iostream>

using namespace std;

int main(){
	
	int num1 = 0;
	
	cout <<"ola mundo" << endl;
	
	
	while ( num1 != 3){	
	
		// tela de selecao 
		
		cout <<"selecione a baixo" << endl
			 <<"[1] selecao" << endl
			 <<"[2] selecao" << endl
			 <<"[3] sair" << endl << endl;
		
		// valor digitado
		cout <<"---->" ;	 
		cin >> num1;
		
		
		//oque as opçoes faram
		if (num1 == 1){
			cout << "@@@ vc selecionou 1 @@@" << endl << endl;
		}
		else if (num1 == 2){
			cout << "@@@ Vc selecionou 2 @@@ " << endl << endl;
		}
		else if (num1 == 3) {
			cout <<" saindo...." << endl << endl;
			system ("pause");
		}
		else{
			
			cout << "!!!! ERRO !!!!" << endl
				 << "numero invalido" << endl << endl;
				 			 		 
		}
	}
	return 0;
}
