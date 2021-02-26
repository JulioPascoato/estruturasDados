#include <iostream>

using namespace std; 

int sum (int number1, int number2){
    return number1 + number2;
}

//passagem de parâmetro por valor
int sub (int number1, int number2){
    return number1 - number2;
}

void troca_por_referencia(int &a, int &b){
    int temp;
    temp = a;
    a=b;
    b= temp;
}


int main(){
    int a=2, b=3;

    cout << "Antes: a = " << a << " b = " << b << endl;
    troca_por_referencia(a, b);
    cout << "Depois: a = " << a << " b = " << b << endl; 

    cout << "A função soma retorna : " << sum(2, 3) << endl;

    return 0;
}