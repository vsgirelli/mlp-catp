#include <iostream>

class Data
{
  private:
  int dia;
  int mes;
  int ano;

  public:
  Data();
  ~Data();
  int getDia();
  int getMes();
  int getAno();
  void setDia();
  void setMes();
  void setAno();
};
