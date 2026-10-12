// exercicio logica de programação c++
// BEECROWD PROBLEMA 1132

//Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números
//que não são múltiplos de 13 entre X e Y, incluindo ambos.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main()
{
    int x,y,soma = 0; //dois valores inteiros e soma dos nao multiplos de 13

    std::cin >> x >> y;
    if(x > y) std::swap(x,y);
    for(int i = x; i <= y; i++){
        if(i % 13 != 0){ // condição dos nao multiplos
            soma += i;
        }
    }

    std::cout << soma <<"\n";

    return 0;
}