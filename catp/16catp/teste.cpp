// exceptions
#include <iostream>
using namespace std;

int main () {
  try
  {
    throw 20;
  }
  catch (int e)
  {
    cout << "An exception occurred. Exception Nr. " << e << '\n';
  }
  catch (int a)
  {
    cout << "outra " << a << endl;
  }
  return 0;
}
