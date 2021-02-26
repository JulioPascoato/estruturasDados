#include <iostream>

using namespace std;

int main(){
    
    int numElem;
    cout << "Digite o tamanho do vetor: ";
    cin >> numElem;

    int *array = new int[numElem];

    for (int i=0; i < numElem; i++){
        array[i] = 2 * i;
    }  
  
    for (int i=0; i < numElem; i++){
        cout << "array[" << i << "] = " << array[i] << endl;
    }   

    delete [] array; // desalocar o vetor
    return 0;

}