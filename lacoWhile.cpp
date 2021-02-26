#include <iostream>

using namespace std; 

int number1;
int counter = 0;
int amount = 0;

int main(){

    while(counter < 10){
    
        cout << "Digite um número: (" << counter << ")" << endl;
        cin >> number1;
        

        if (number1 < 5){
            amount++;
        }

        counter++;
    }

    return 0;
}