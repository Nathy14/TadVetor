#define TAMANHO 5
#ifndef TADVETOR_CAB_H
#define TADVETOR_CAB_H
#include <stdlib.h>
using namespace std;

class TadVetor{
  private:
  int numeros [TAMANHO];

  public:
  TadVetor();
  void imprimir();
  string incluir(int indice, int valor);
  int excluir(int indice);
  string trocar(int indice1, int indice2);
  int maior_valor();
  int menor_valor();
  int ordenar_crescente();
  int ordenar_decrescente();
  int ordena_cria();
};
#endif
