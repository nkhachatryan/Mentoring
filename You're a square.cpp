/*Task:
https://www.codewars.com/kata/54c27a33fb7da0db0100040e
Solution:*/
#include <cmath>
bool is_square(int n)
{
bool c;
double b;
  b=sqrt(n);
  if (b==((double)((int) b)) && n>=0){
   c=1;} else{
  c=0;}
  return c;
}
