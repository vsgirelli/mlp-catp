#include <iostream>

class Data
{
  private:
  int dia;
  int mes;
  int ano;
  int checkDigits(int ano);

  public:
  Data();
  Data(int dia, int mes, int ano);
  ~Data();
  int getDia();
  int getMes();
  int getAno();
};
