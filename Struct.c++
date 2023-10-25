#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct fruta {

    float preco;
    string nome;
    int id;
};

int main(){

    int opcao, i;
    vector<int> carrinho;

    struct fruta frutas [5];

    frutas[0].nome = "banana";
    frutas[0].preco = 14.99;
    frutas[0].id = 15;

    frutas[1].nome = "pera";
    frutas[1].preco = 4.99;
    frutas[1].id = 26;

    frutas[2].nome = "maca";
    frutas[2].preco = 3.00;
    frutas[2].id = 36;

    frutas[3].nome = "kiwi";
    frutas[3].preco = 5.00 ;
    frutas[3].id = 41;
    //--------------------------------

    cout <<"bem vindo, a baixo, as frutas em estoque" << endl;
    for(i = 0 ; i < 4 ; i++){
        cout << i+1 << " - " << frutas[i].nome << " R$ " << frutas[i].preco << endl;
    }

    while (true){

        cout << endl << "digite o iten desejado ou 0 para [sair]:" << endl;
        cin >> opcao;


        if ( opcao == 0){
            break;
        }else if (opcao == 1)
        {
            carrinho.push_back(frutas[0].id);
        }else if (opcao == 2)
        {
            carrinho.push_back(frutas[1].id);
        }else if (opcao == 3)
        {
            carrinho.push_back(frutas[2].id);
        }else if (opcao == 4)
        {
            carrinho.push_back(frutas[3].id);
        }else{
            cout<< "opcao invalida" << endl;
        }
    }
    for(i = 0 ; i < 4 ; i++){
        if (carrinho[i] == frutas[i].id){

            cout << frutas[i].nome << endl;
        }
        
    }
    return 0;
}   