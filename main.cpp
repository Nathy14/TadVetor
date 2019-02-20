#define TAMANHO 5
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "TadVetor.hpp"
// MAIN
//==============================================================================
int main() {
//numeros = new int[TAMANHO];
TadVetor vetorzinho;
while(true) {
system("CLS");
cout << "\n----------------------------------------------";
cout << "\n RELEMBRANDO VETORES";
cout << "\n----------------------------------------------";
cout << "\n0 - sair.";
cout << "\n1 - imprimir o vetor.";
cout << "\n2 - inserir um elemento ( >0 e a posicao no vetor tem que estar livre (=0)";
cout << "\n3 - excluir um elemento.";
cout << "\n4 - trocar dois elementos de lugar entre si.";
cout << "\n5 - localizar o maior e o menor elementos do vetor";
cout << "\n6 - ordenar os elementos do vetor em ordem crescente";
cout << "\n7 - ordenar os elementos do vetor em ordem decrescente";
cout << "\n8 - ordenar os elementos do vetor em um segundo vetor (o metodo cria o novo vetor, copia os dados e retorna o vetor ordenado";
cout << "\n---------------------";
cout << "\nQual a sua opcao -> ";
int opc;
cin >> opc;
if (opc == 0) {
  break;
} else if (opc == 1) {
vetorzinho.imprimir();
cout << "\n\n";
system("PAUSE");
} else if (opc == 2) {
//= precisa pedir os dados: posicao no vetor (indice) e valor do elemento.
cout << "Indice do novo elemento: ";
int idx;
cin >> idx;
cout << "Valor do novo elemento: ";
int val;
cin >> val;
cout << vetorzinho.incluir(idx, val) << endl;
system("PAUSE");
} else if (opc == 3) {
cout << "Indice do elemento a ser removido: ";
int idx;
cin >> idx;
int val = vetorzinho.excluir(idx);
if (val == 0) {
cout << "Nao haÂ´ elemento na posicao " << idx;
} else if (val == -1) {
cout << "ERRO: o indice esta' fora dos limites do vetor.";
} else {
cout << "Valor excluido da posicao " << idx << ": " << val;
}
cout << "\n\n";
system("PAUSE");
} else if (opc == 4) {
  int idx1;
  int idx2;
cout << "Indice do primeiro elemento a ser trocado ";
cin >> idx1;
cout << "Indice do segundo elemento a ser trocado ";
cin >> idx2;
cout <<vetorzinho.trocar(idx1,idx2) << endl;
system("PAUSE");
}
 else if (opc == 5) {
  cout << "O maior valor do vetor e: " << vetorzinho.maior_valor() << "\n";
  cout << "O menor valor do vetor e: " << vetorzinho.menor_valor();
  system("PAUSE");
 } 
 else if (opc == 6) {
  vetorzinho.ordenar_crescente();
  cout << "Ordenacao feita com sucesso";
  system("PAUSE");
} else if (opc == 7) {
  vetorzinho.ordenar_decrescente();
  cout << "Ordenacao feita com sucesso";
  system("PAUSE");
} else if (opc == 8) {
vetorzinho.ordena_cria();
cout << "Ordenacao feita com sucesso";
system("PAUSE");
}
}
//system("PAUSE");
cout << "\n-------------------------------------------------";
cout << "\n\nObrigado e ate' a proxima vez.\n\n\n";
return 0;
}
