#include <iostream>

using namespace std; 

int main(){

    int total;

    for (int i = 2; i <=20; i += 2){
        total += i;
        cout << total << " | ";
    }

    cout << "A soma da série é " << total << endl;

    return 0;
}