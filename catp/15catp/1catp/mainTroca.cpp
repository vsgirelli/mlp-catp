#include "troca.h"

using namespace std;

int main(int argc, char **argv) {
  string birthday = "Val", name = "birthday";
  int day = 2, month = 17;

  trocaGenerica(name, birthday);
  trocaGenerica(day, month);

  cout << name << " " << birthday << endl;
  cout << day << "/" << month << endl;
}
