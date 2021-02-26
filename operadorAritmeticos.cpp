#include <iostream>

int number1;
int number2;

int main(){

    std::cout << "Digite o primeiro número: ";
    std::cin >> number1;
    std::cout << "Digite o segundo número: ";
    std::cin >> number2;

    int sum = number1 + number2;
    int sub = number1 - number2;
    int mult = number1 * number2;
    int div = (float)number1 / (float)number2;

    std::cout << "Soma: " << sum << "\n";
    std::cout << "Subtração: " << sub << "\n";
    std::cout << "Multiplicação: " << mult << "\n";
    std::cout << "Divisão: " << div << "\n";

}