#include <iostream>
#include "TadVetor.hpp"

TadVetor::TadVetor(){
  for (int i = 0; i < TAMANHO; i++) {
    numeros[i] = 0;
  }
}
//----------------------------------------------------
//Método para imprimir o vetor
void TadVetor::imprimir() {
  cout << "\n[ ";
  for (int i = 0; i < TAMANHO; i++) {
    cout << numeros[i] << " ";
  }
  cout << "]";
}
//----------------------------------------------------
//Método para incluir um novo valor no vetor
string TadVetor::incluir(int indice, int valor) {
// verifica se o valor e´ maior que zero
  if (valor < 0) {
  return "ERRO: o valor tem que ser maior que zero.";
  }
// verifica se o indice e´ valido
  if (indice < 0 || indice > TAMANHO - 1) {
    return "ERRO: o indice esta´ fora dos limites do vetor.";
  }
// verifica se a posicao ja´ esta´ ocupada.
  if (numeros[indice] > 0) {
    return "ERRO: posicao ocupada.";
  }
// passou por todas as verificacoes: inserir
  numeros[indice] = valor;
  return "Inclusao bem sucedida.";
  }
//----------------------------------------------------
//Método para excluir um elemento do vetor
int TadVetor::excluir(int indice) {
// verifica se o indice e´ valido
  if (indice < 0 || indice > TAMANHO - 1) {
    return -1;
  }
  int numero = numeros[indice];
  numeros[indice] = 0;
  return numero;
}
//----------------------------------------------------
//Método para trocar dois elementos no vetor
string TadVetor::trocar(int indice1, int indice2){
//verifica se os indices sao validos
  if(indice1< 0 || indice2<0)
    return "Erro, o indice tem que ser maior do que zero";
  if(indice1> TAMANHO -1 || indice2> TAMANHO-1)
    return "Erro, o indice estÃ¡ fora de alcance";
  if (indice1 == indice2)
    return "Erro, os indices nÃ£o podem ser iguais";
  else{
    int comp;
    comp = numeros[indice1];
    numeros[indice1] = numeros[indice2];
    numeros[indice2] = comp;
    return "Troca bem sucedida!";
  }
}
//------------------------------------------------------------// Método que retorna o maior valor do vetor
int TadVetor::maior_valor(){
  int maior = numeros[0];
  for(int i = 1; i < TAMANHO; i++){
    if(numeros[i] > maior){
    maior = numeros[i];
  }
    }
  return maior;
}
//------------------------------------------------------------// Método que retorna o menor valor do vetor
int TadVetor::menor_valor(){
  int menor = numeros[0];
  for(int i = 1; i < TAMANHO; i++){
    if(numeros[i] < menor){
      menor = numeros[i];
    }
  }
  return menor;
}
//-----------------------------------------------------------// Método que retorna o vetor ordenado de forma crescente
int TadVetor::ordenar_crescente(){
  int temp;
  for (int i=0;i<TAMANHO; i++)
    for(int j=i+1;j<TAMANHO;j++){
      if (numeros[i]>numeros[j]){
        temp=numeros[i];
        numeros[i]=numeros[j];
        numeros[j]=temp;
      }
    }
return 0;
}
//-----------------------------------------------------------
// Método que retorna o vetor ordenado de forma decrescente
int TadVetor::ordenar_decrescente(){
  int temp;
  for(int i=0;i<TAMANHO; i++){
    for(int j=i+1;j<TAMANHO;j++){
      if(numeros[i]<numeros[j]){
        temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
      }
    } 
  }
  return 0;
}
//-----------------------------------------------------------// Método que cria um novo vetor, copia os dados e retorna o vetor ordenado
int TadVetor::ordena_cria(){
  int novo_vetor[TAMANHO];
  for(int i=0;i<TAMANHO;i++)
    novo_vetor[i]=numeros[i];
  int tipo_de_ordenacao;
  cout << "Digite o tipo de ordenacao que deseja\n";
  cout << "1-crescente\n2-decrescente\n";
  cin >> tipo_de_ordenacao;
  if(tipo_de_ordenacao != 1 && tipo_de_ordenacao !=2)
    return -1;
  if(tipo_de_ordenacao == 1){
    int temp;
    for(int i=0;i<TAMANHO; i++)
      for(int j=i+1;j<TAMANHO;j++){
        if(novo_vetor[i]>novo_vetor[j]){
          temp = novo_vetor[i];
          novo_vetor[i] = novo_vetor[j];
          novo_vetor[j] = temp;
        }
      }
  }
  if(tipo_de_ordenacao == 2){
    int temp;
    for(int i=0;i<TAMANHO; i++)
      for(int j=i+1;j<TAMANHO;j++){
        if(novo_vetor[i]<novo_vetor[j]){
          temp = novo_vetor[i];
          novo_vetor[i] = novo_vetor[j];
          novo_vetor[j] = temp;
      }
    } 

  }
  cout << "\n[ ";
  for (int i = 0; i < TAMANHO; i++) {
    cout << novo_vetor[i] << " ";
  }
  cout << "]";
return 0;
}
