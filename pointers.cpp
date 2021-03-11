#include <iostream>
#include <cstddef> // pacote para utilização da constante NULL

using namespace std; 

//Ponteiro com valor 0 (zero) utilizaremos constante NULL
bool *truth = NULL;
float *money = NULL;


int main(){

    int anotherInt;
   

    // Inicializando ponteiro estático
    int alpha = 150;
    
    // Declarando variáveis forma estática
    int *intPointer;

    // atribuindo ponteiro para a variavel
    intPointer = &alpha;
    // *intPointer = 25;
    
    cout << alpha << ", " << *intPointer<< endl;
    cout << "Valor de alpha: " << alpha << endl ;


    // Declarando variaveis forma Dinâmica
    int *intPointer2;
    
        // Inicializando ponteiro dinâmico
    intPointer2 = new int;
    cout << "IntPointer2 dinamico: "<< intPointer2 << endl;

    // Alterando conteudo do ponteiro
    *intPointer2 = 25;
    cout << *intPointer2 << endl;
    
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