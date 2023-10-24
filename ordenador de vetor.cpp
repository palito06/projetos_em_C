#include <iostream>

using namespace std;

int main(){
		
	int vetor[10];	
	int i , j , troca;
	
	for (i = 0; i < 10 ; i++){
		
		cout <<"digite o "<< i+1 <<" elemento" <<endl;
		cin >> vetor[i];
		
	}
	
	//troca de onder -------------------------
	for (i = 0 ; i < 9 ; i++)
	{
		for(j = i + 1 ; j <10 ; j++)
		{
			if(vetor[i] > vetor[j]){
				
				troca = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = troca;
					
			}
		}	
	}
	
	//system ("cls");
	
	cout << endl << "---- ondem ----" << endl;
	
	for (i = 0 ; i <10 ; i++){
		
		cout << " - "<< vetor[i];
		
	}
	return 0;
}
