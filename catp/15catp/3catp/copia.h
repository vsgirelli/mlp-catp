/*Implemente uma função copia que copia as posições de um vetor de
qualquer tipo para um outro vetor do mesmo qualquer tipo.
A função deve funcionar para qualquer tipo da linguagem de
programação escolhida. Implemente esta função no arquivo copia.h.
Na função main, utilize a função polimórfica de cópia.*/
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T> void copia(vector<T> &vec1, vector<T> &vec2) {
  /*
   * After C++11, there is the range-based for loop:
   * i is an object of type T, with a value that is a copy
   * of the item in vec2[i].
   */
  for (const auto i: vec2) {
    /*
     * vec1.push_back() adds a new elemet at the end of vec1,
     * with an automatic reallocation of the allocated storage
     * space (if te new vector size surpasses the current vector
     * capacity).
     */
    vec1.push_back(i);
  }
  /*
   * Thus, the loop above iterates through vec2 copying onto vec1
   * each value of vec2.
   */
}
