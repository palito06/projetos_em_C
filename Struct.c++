#include <iostream>

using namespace std;


struct fruta {

    float preco;
    string nome;

};

int main(){

    int iten , quantidade , i;

    struct fruta frutas [5];

    frutas[0].nome = "banana";
    frutas[0].preco = 14.99;
    frutas[1].nome = "pera";
    frutas[1].preco = 4.99;
    frutas[2].nome = "maca";
    frutas[2].preco = 3.00;
    frutas[3].nome = "kiwi";
    frutas[3].preco = 5.00 ;
    //--------------------------------

    cout <<"bem vindo, a baixo, as frutas em estoque" << endl;
    for(i = 0 ; i < 4 ; i++){
        cout << i+1 << " - " << frutas[i].nome << " R$ " << frutas[i].preco << endl;
    }

    cout << endl << "digite o iten desejado e sua quantidade ou 0 para [sair]:" << endl;
    
    cout << "iten : ";
    cin >> iten;





}