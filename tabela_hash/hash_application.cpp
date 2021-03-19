#include <iostream>
#include "hash.h"

using namespace std;

int main(){
  Hash alunosHash(10);
   int   ras[8]   = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234, 1257};
  string nomes[8] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta", "Julio"};

  for (int i = 0; i < 8; i++) {
    Aluno aluno = Aluno(ras[i], nomes[i]);
    alunosHash.insertItem(aluno);
  }
  alunosHash.print();
  cout << "------------------------------" <<  endl;

  Aluno aluno(1257,"");
  bool found = false;
  alunosHash.retrieveItem(aluno, found);
  cout << aluno.getNome() << " -> " << found << endl;

  cout << "------------------------------" <<  endl;

  Aluno aluno1(9999,"Pascoato");
  bool found1 = false;
  
  alunosHash.insertItem(aluno1);
  alunosHash.retrieveItem(aluno1, found1);
  cout << aluno1.getNome() << " -> " << found1 << endl;

  cout << "------------------------------" <<  endl;

//   alunosHash.deleteItem(aluno1);
  alunosHash.print();
  cout << "Fim" << endl;
}
