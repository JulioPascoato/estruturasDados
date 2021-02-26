#include <iostream>

using namespace std;

int vector[10];
int array[10] = {15, 10, 5};


int main(){
    
    array[5] = 30;
    array[7] = 40;
    array[8] = 30;

    for (int i=0; i < 10; i++){
        cout << "array[" << i << "] = " << array[i] << endl;
    }   

    
    return 0;

}