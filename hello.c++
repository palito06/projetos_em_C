#include <iostream>

using namespace std;

int main(){

    string nome;
    int num[4];
    int i;
    int soma = 0 ;

    cout <<" ola mundo e hola git" << endl;

    cout <<"digite seu nome: " ;
    cin>> nome;

    for (i = 0 ; i < 4 ; i++){

        cout << nome <<" digite o "<< i+1 <<" numero: ";
        cin >> num[i];

    }
    
    for ( i = 0 ; i < 4; i++){
        soma += num[i];
    }
    
    cout << nome << " a soma desses valores: " << soma;
}