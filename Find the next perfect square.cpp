/*Task:
https://www.codewars.com/kata/56269eb78ad2e4ced1000013
Solution:*/
#include <cmath>
long int findNextSquare(long int sq) {
long int rez=-1;
double b=sqrt(sq);
if(b==((double)((int) b))){
rez=(b+1)*(b+1);
}
  return rez;
}
