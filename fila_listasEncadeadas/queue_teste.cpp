#include "queue.h"
#include <iostream>

using namespace std;

int main(){
    ItemType character;
    Queue queue;
    ItemType queueChar;

    cout << "Adicione uma String." << endl;

    while(character != '\n' and !queue.isFull()){
        queue.enqueue(character);
        cin.get(character);
    }

    while(!queue.isEmpty()){
        queueChar = queue.dequeue();
        cout << queueChar;
    }
    cout << endl;
}