// exercicio logica de programação c++
// BEECROWD PROBLEMA 1099

//Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de 
//todos os ímpares existentes entre X e Y.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main()
{
    int N,X,Y,soma = 0;

    std:: cin >> N;

    for(int i = 0; i < N; i++){
        soma = 0;
        std::cin >> X >> Y;

        if(X > Y) std::swap(X, Y);

        for(int j = X +1;j < Y;j++){
            if(j % 2 != 0){
                soma += j;
            }
        }

        std::cout << soma << "\n";

    }

    return 0;
}