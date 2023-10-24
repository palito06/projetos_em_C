#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct usuario{
	string nome;
	int cpf;
	int senha;
	int telefone;
	int saldo;
};

int main(){
	//int cliente = { string nome , cpf= 0, telefone =0 };
	usuario usuarios [2];
	
	usuarios[0].cpf = 111222333;
	usuarios[0].nome  = "cleyton";
	usuarios[0].senha = 123;
	usuarios[0].saldo = 1000;
	
	
	// cadastro de conta ou login
	
	int opcao   = 0 ;
	int senhaL  = 0 , cpfL = 0;	
	bool valido = false;
	
		
	do{
		cout <<" MENU PRINCIPAL" << endl;
		cout <<" [1] acessar conta " << endl
			 <<" [2] cadastrar" << endl
			 <<" [3] sair" << endl;
		cin >> opcao;
		
		if (opcao == 1)
		{
			
			//login---------
			cout<<"digite seu cpf "<<endl;
			cin >> cpfL;
			cout << " digite sua senha" << endl ;
			cin >> senhaL;
			
			if (cpfL == usuarios[0].cpf && senhaL == usuarios[0].senha )
			{
				cout<<" deu certo "<< endl;
				valido == true;
				break;
				system ("pause");
			}
			else{
				cout<<" errado " << endl;
				system ("pause");
			}
			system("cls");
				
		}
		else if (opcao == 2)
		{
			//cadastro------------- 
			cout <<"infome seu CPF: " << endl;
			cin >> usuarios[0].cpf;
			cout <<"informe sua senha: " << endl;
			cin >> usuarios[0].senha;
			cout <<"informe sua senha: " << endl;
			cin >> senhaL;
			
			if(usuarios[0].senha == senhaL){
				cout<<" tudo certo para login" << endl;
			}else{
				cout << " valores invalidos" << endl;
			}
			system("pause");
			system("cls");
		}
		else if (opcao == 4){
			
			cout <<"saindo . . ." << endl;
			return 0;
			
		}
		else
		}
			cout << " opcao invalida" << endl;
		
		{
		
	}while(valido == false);

	system("cls");
	opcao = 0;
	
	
	do{
		//conta acessa , tela com opcao interna da conta
		cout <<"bem vindo ao painel principal do banco" << endl
			 <<"[1] acessar perfil" << endl 
			 <<"[2] acessar saldo" << endl 
			 <<"[3] sacar" << endl
			 <<"[4] sair" << endl << endl 
			 <<"digite: " ;
			 
			 cin >> opcao;
		
		switch(opcao){
			
			case 1:
				system("cls");
				
				cout <<"nome: " << usuarios[0].nome << endl
					 <<"CPF: " << usuarios[0].cpf << endl
					 <<"telefone: " << usuarios[0].telefone << endl << endl;
					 
				break;
			case 2:
				
				cout <<"Seu saldo: " << usuarios[0].saldo << endl << endl;
				system ("pause");
				system ("cls");
				break;
				
			case 3: // sacar.............
				
				int valor;
				
				cout <<" digite o valor desejado: ";
				cin >> valor;
				
				if( valor <= usuarios[0].saldo){
					
					cout << endl <<" aprovado" << endl
						 <<" sacando  . . . " << endl << endl;
					usuarios[0].saldo = usuarios[0].saldo - valor ;
					cout <<"saque realizado com sucesso, seu saldo agora e de: " << usuarios[0].saldo << endl;		
					system("pause");
					system ("cls");
				}
				else{
					cout << " vc nao tem esse valor"  << endl;
				}
				
				break;
			
			case 4:
				
				cout <<"saindo" << endl;
				break;
				
			default:
				
				cout <<"opcao invalida" << endl;
				break;
			
		}	 
		
	}while(opcao != 4);
	
	return 0;
}
