// exercicio logica de programação c++
// BEECROWD PROBLEMA 1142


#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main()
{
    int x; //quantidade de linhas

    std::cin >> x;
    for(int i = 1; i <= x * 4; i++){
        if(i % 4 == 0){ // condicao do print PUM
            std::cout << "PUM\n";
        }else{
            std::cout << i << " ";
        }
    }


    return 0;
}