#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

int main(){
	
	char i1, i2, i3; 
	int a, b, c;
	bool r = false ;
	
	cout <<" bem vindo, a seguir insira os numeros inteiros que deseja calcular"<<endl
		 <<"-------------------- F(x) = aX^2 - bX + c -------------------------"<< endl;
		 
	//obtendo valores de a,b,c----------------------------------------------------------
	
	cout <<"digite um numero interio para 'a': "; 
	cin >> a ;
	
	cout << "digite um numero inteiro para 'b': ";
	cin >> b;
	
	cout << "digite um numero inteiro para 'c': ";
	cin >> c;
	
	
	cout <<"--------------------------------------" << endl
		 <<"f(x) = "<< a << "X^2 - "<< b << "X +"<< c << endl
		 <<"--------------------------------------" << endl << endl << endl;
		 
	
	//  calculo do Delta -------------------------------------------------
	
	cout << endl <<"######################################################"<< endl
		 <<" DELTA= b^2 - 4 * a * c  --->  DELTA = " << b <<"^2 - 4 *"<< a <<"*"<< c << endl
		 <<"######################################################"<< endl << endl;
		 
	double delta = pow(b,2) - 4 * a * c ;
	
	cout <<"O delta e : "<< delta << endl << endl;
	
	//-obtendo o valor de X1 e x2 -------------------------------------------------------------------------------------
	
	cout <<" Obtendo valor de x1 e x2" << endl
		 <<" x = -b +- raiz(DELTA) / 2 * a" << endl << endl;
	
	delta = abs(delta);
	
	int x1 = (-b + (sqrt(delta))) / (2 * a);
	int x2 = (-b - (sqrt(delta))) / (2 * a);
	
	cout <<"valor de x1 e : " << x1 << endl;
	cout <<"valor de x2 e : " << x2 << endl;
	
	return 0;
}
