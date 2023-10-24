#include <iostream>
#include <cmath>

int main(){
	
	int resultado , X1 , Y1 , X2 , Y2 ;
	
	do{
		
		std::cout <<"digite um valor interio x1: "<< std::endl;
		std::cin>> X1;
		
		std::cout <<"digite um valor interio y1: "<< std::endl;
		std::cin>> Y1;
		
		std::cout <<"---------------------------------" << std::endl;
		
		std::cout <<"agora insira valor de x2: " << std::endl;
		std::cin >> X2;
		
		std::cout << " insira valor de y2: " << std::endl;
		std::cin >> Y2;
		
		std::cout <<"---------------------------------" << std::endl;
		
		if(X1>0 && X2>0 && Y1>0 && Y2>0){
			break;
		}else{
			std::cout <<" algum dos valores e menor que 0" << std::endl;
		}
		
	}while(true);
	
	
	resultado = sqrt( pow((X2 - X1),2) + pow((Y2 - Y1),2) );
	
	
	std::cout << " a distancia de A a B e: " << resultado <<std::endl;
	

	
}
