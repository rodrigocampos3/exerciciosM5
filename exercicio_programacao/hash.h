#include "Client.h"

class Hash {
 public:
  Hash(int max_items = 100);
  ~Hash();
  bool isFull() const;
  int getLength() const;
  
  void retrieveItem(Client& client, bool& found);   
  void insertItem(Client client); 
  void deleteItem(Client client);  
  void print();
 private:
  int getHash(Client client);
  int   max_items;
  int   length;
  Client* structure;
};


