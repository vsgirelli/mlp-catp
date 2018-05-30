#include <iostream>

using namespace std;

template<class T> void imprime(T a, T b)
{
    cout << "Exibindo " << a << "e" << b << endl;
    T c = a + b;
    cout << "Somando temos: " << c << endl;
}
