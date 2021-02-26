#include <iostream>

using namespace std; 

int count;
int number = 0;
int sum;


int main(){

    do{
        cout << "Insira um novo número: (0 - sair)" << endl;
        cin >> number;
        sum += number;
        count++;

    }while(number != 0);

    float average = (float)sum/(float)(count -1 );
    cout << "A média da série é: " << average << endl;

    return 0;
}