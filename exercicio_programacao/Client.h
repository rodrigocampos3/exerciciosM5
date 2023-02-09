#include <iostream>
using namespace std;

class Client{
private :
  int         imei;
  std::string email;  
public:  
  Client();
  Client(int imei, std::string email);
  string getNome() const;
  int getRa() const;
};
