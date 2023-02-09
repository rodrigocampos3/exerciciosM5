#include "Client.h"

Client::Client(){
  this->imei   = -1;
  this->email = "";
};  
Client::Client(int imei, std::string email){
  this->imei    = imei;
  this->email  = email;
}
string Client::getNome() const {
  return email;
}
int Client::getRa() const{
  return imei;
}
