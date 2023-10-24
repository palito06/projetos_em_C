#include <iostream>
#include <string>

using namespace std;

int main (){
	// variareis ---------------
	
		
	string login = "";
	string senha = "";
    
	
	int opcao;
	string entrada = "";
	
	// ------------------------
	
	// tela de inicio com login ou cadastro
	do{
		cout << "obg por acessar minha pagina, faca o login a baixo ou se cadastre --->" <<endl;
		cout<<"---------------------------------" << endl
		 	<<"[1] fazer login"<< endl
		 	<<"[2] fazer cadastro" << endl
		 	<<"opcao: " ;
		 	
		cin >> entrada ;
		
		// verifica se a entrada é um inteiro --------------------
			
		try 
		{
        	opcao = stoi(entrada); // Tenta converter a entrada em um inteiro
        	cout << "Você digitou um número inteiro: " << opcao << endl;
   		} 
		catch (invalid_argument const &e) 
		{
        	cerr << "Erro: Entrada não é um número inteiro." << endl;
    		return 1;
        }	 	
		
		if (opcao == 2 ){
			
			// cadastro de login --------------------------------
			
				cout << "ola bem vindo ao cadastro" << endl ;
				cout << "insira o seu email: ";
				cin >> login ;
				
			// cadastro de senha correta (validacao) -------------------------
			
			bool senhaCORRETA = false ;
			string senhaCF;
			
			do{ 
				
				cout << " agora insira a sua senha: ";
				cin >> senha ;
				cout <<" confirme sua senha: ";
				cin >> senhaCF;
				
				if (senha == senhaCF){
					senhaCORRETA = true;
				}
				else{
					cout<<"senha incorreta tente novamente . . ." << endl << endl;
				}
				
			}while(senhaCORRETA != true);
			
			if (senhaCORRETA == true){
				cout <<"cadastro feito com sucesso !!" << endl;
			}
		}
		else{
			cout <<" carregando ..... "<< endl << endl;
		}
		
	}while(opcao != 1);
	
	
	// tela de login -------------------------------------
	
	string Rlogin = "";
	string Rsenha = "";
	int loginS = 0 ;
	
	cout<< " ola seja bem vindo a tela de login" << endl;
	
	do{
		
		cout << " digite o login: ";
		cin >> Rlogin ;
		
		cout <<" digite a senha:";
		cin >> Rsenha;
		
		if(Rlogin == login && Rsenha == senha ){
			
			cout <<"login efetuado com sucesso !!" << endl
				 << "acessando pagina . . ." << endl ;
			loginS = 1 ;
			
		}
		else{
			
			cout << endl << " ----- login ou senha incorreto, por favor tente novamente -----" << endl ;
			
		}
		
	//---------------------------------------------------------------------
		
	}while(loginS != 1);
	
	if (loginS == 1){
		
		cout<<"entrou"<< endl;
		
	}
	
	return 0;
}
