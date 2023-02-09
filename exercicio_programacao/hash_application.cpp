#include <iostream>
#include "hash.h" 

using namespace std;
// Esta função trás um exemplo de implemetação de tabela hash sem colisões,onde cada imei e usuario estão sendo inseridos em seus lugares corretos na lista
void caso1(){
  Hash hashClient(10);
   int   imeis[7]   = {
     12704, 12705, 1234,
     49001, 52202, 65606,
     91234};
  
  string emails[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"}; 
	    
  for (int i = 0; i < 7; i++) {
    Client client = Client(imeis[i], emails[i]);
    hashClient.insertItem(client);
  }
  hashClient.print();  
  }

// Esta função trás um exemplo de implemetação onde temos colisões, porém elas estão sendo tradada. Quando a posição que o item deveria ser inserido estiver ocupada, o algoritivo insere o item na posição seguinte
void caso2(){
    Hash hashClient(10);
   int   imeis[7]   = {
     12704, 12704, 1234,
     49001, 52202, 65606,
     91234};
  
  string emails[7] = {
    "Pedro", "Pedro", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"}; 
    for (int i = 0; i < 7; i++) {
    Client client = Client(imeis[i], emails[i]);
    hashClient.insertItem(client);
  }
  hashClient.print();
}

// o algoritimo abaixo mostra um exemplo de busca de item em uma lista onde não ocorrem colsões
void caso3(){
    Hash hashClient(10);
   int   imeis[7]   = {
     12704, 12705, 1234,
     49001, 52202, 65606,
     91234};
  
  string emails[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"};
    for (int i = 0; i < 7; i++) {
    Client client = Client(imeis[i], emails[i]);
    hashClient.insertItem(client);
  }
  hashClient.print();  
  Client client(12704,""); 
  bool     found = false;
  hashClient.retrieveItem(client, found);
  cout << client.getNome() << " -> " << found << endl;
  }

// o código abaixo mostra um exemplo de busca onde existem colisões
void caso4(){
    Hash hashClient(10);
   int   imeis[7]   = {
     12704, 12704, 1234,
     49001, 52202, 65606,
     91234};
  
  string emails[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"};
     for (int i = 0; i < 7; i++) {
    Client client = Client(imeis[i], emails[i]);
    hashClient.insertItem(client);
  }

  
  Client client(12704,""); 
  bool     found = false;
  hashClient.retrieveItem(client, found);
  cout << client.getNome() << " -> " << found << endl;
}

// Abaixo temos um exemplo de exclusão em uma tabela onde não temos colisões
void caso5(){
      Hash hashClient(10);
   int   imeis[7]   = {
     12704, 12705, 1234,
     49001, 52202, 65606,
     91234};
  
  string emails[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"};
      for (int i = 0; i < 7; i++) {
    Client client = Client(imeis[i], emails[i]);
    hashClient.insertItem(client);
  }

    Client client(12704,""); 
    hashClient.deleteItem(client);
    hashClient.print();
    cout << "Fim" << endl;
  }


  

int main(){
  // caso de teste sem colisão
  // caso1();
  // // caso de teste co colisão
  // caso2();
  // // caso de teste de recuperação de usuario
  // caso3();
  // // caso de teste com recuperação de usuario onde eram duplicados
  // caso4();
  // // caso de teste de exlusão do usuario
  // caso5();
}
