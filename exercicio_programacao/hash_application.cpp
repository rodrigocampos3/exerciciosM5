#include <iostream>
#include "hash.h" 

using namespace std;
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
void caso5(){
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
