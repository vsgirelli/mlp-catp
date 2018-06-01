// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
  const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;

int main () {
  try
  {
    throw "coutld not open\n";
  }
  catch (int e)
  {
    cout << e << '\n';
  }
  return 0;
}
