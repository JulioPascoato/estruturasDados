#include <iostream>
#include <cstddef> // pacote para utilização da constante NULL

using namespace std; 

int anotherInt;

// Declarando variáveis forma estática
int alpha;
int *intPointer;

// Declarando variaveis forma Dinâmica
int *intPointer2;

//Ponteiro com valor 0 (zero) utilizaremos constante NULL
bool *truth = NULL;
float *money = NULL;


int main(){
    // Inicializando ponteiro estático
    intPointer = &alpha;

    // Inicializando ponteiro dinâmico
    intPointer2 = new int;
    
    // Alterando conteudo do ponteiro
    *intPointer2 = 25;

    // Obtendo conteúdo do ponteiro
    anotherInt = *intPointer2;

    //operações
    float *value = new float;
    *value = 33.46;
    cout << *value << endl; 

    // cout << intPointer << endl;
    // cout << intPointer2 << endl;
    // cout << anotherInt << endl;
    

    return 0;
}