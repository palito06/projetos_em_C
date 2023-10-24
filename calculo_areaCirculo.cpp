#include <iostream>
#include <cmath>

int main(){

    int n1,n2,n3,media;
    
    do{

        std::cout <<" digite sua nota PB: " << std::endl;
        std::cin >> n1;

        std::cout <<" digite sua nota SB: " << std::endl;
        std::cin >> n2;

        std::cout <<" digite sua nota TB: " << std::endl;
        std::cin >> n3;

        if (n1<100 && n2<100 && n3<100){
            break;
        }else{
            std::cout <<"algum dos valores ultrapassa valores pre definidos " << std::endl
                 <<"----------------------------------------------------"<< std::endl;
        }

    }while(true);

    media = (n1 + n2 + n3) / 3;

    std::cout << " a media em sua materia foi : " << media << std::endl;

    if (media < 60){

        std::cout <<" REPROVADO" << std::endl;

    } else{

        std::cout <<" APROVADO" << std::endl;

    }
    return 0;
}