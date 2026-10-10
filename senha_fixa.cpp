// exercicio logica de programação c++
// BEECROWD PROBLEMA 1114

//Escreva um programa que repita a leitura de uma senha até que ela seja válida.
//Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida".
//Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. 
//Considere que a senha correta é o valor 2002. 

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main()
{
    int tentativa = -1;

    while(std::cin >> tentativa && tentativa != 2002){

       std::cout << "Senha Invalida\n";
    }

    std::cout << "Acesso Permitido\n";

    return 0;
}