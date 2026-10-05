// exercicio logica de programação c++
// BEECROWD PROBLEMA 1094

//A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤
//Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main()
{
    int N, quantidade, quantiade_coelho = 0, quantidade_rato = 0,
    quantidade_sapo = 0, total = 0;
    char cobaia;

    std::cin >> N; // pede a quantidade de casos

    for(int i = 0;i < N; i++){
        
        std::cin >> quantidade; //pede a quantidade de cobaias
        std::cin >> cobaia; // informa qual o tipo de cobaia

        total += quantidade;

        if(cobaia == 'C'){
            quantiade_coelho += quantidade;
        }
        else if(cobaia == 'R'){
            quantidade_rato += quantidade;
        }
        else if(cobaia == 'S'){
            quantidade_sapo += quantidade;
        }

    }

    std::cout << "Total: " << total << " cobaias\n";
    std::cout << "Total de coelhos: " << quantiade_coelho << "\n";
    std::cout << "Total de ratos: " << quantidade_rato << "\n";
    std::cout << "Total de sapos: " << quantidade_sapo<< "\n";
    std::cout << "Percentual de coelhos: " << std::fixed <<std::setprecision(2) <<
    (quantiade_coelho * 100.0) / total << " %\n";
    std::cout << "Percentual de ratos: " << std::fixed <<std::setprecision(2) <<
    (quantidade_rato * 100.0) / total << " %\n";
    std::cout << "Percentual de sapos: " << std::fixed <<std::setprecision(2) <<
    (quantidade_sapo * 100.0) / total << " %\n";

    return 0;
}