/*Task:
https://www.codewars.com/kata/5552101f47fc5178b1000050

Solution: */

#include <vector>
#include <cmath>
using namespace std;

class DigPow
{
public:
  static int digPow(int n, int p);
};
inline int DigPow :: digPow(int n, int p){
  vector<int> l;
  int i = 0; 
  int sum = 0; 
  int m = n;
  int a = 0;
  
  while(n > 0)
  {
    l.push_back(n % 10);
    n /= 10;
  }
  reverse(l.begin(), l.end());
for (size_t i = 0u; i < l.size(); ++i)
  {
    sum += pow(l[i],(p+i));
  }
  if(sum % m == 0){
    a = sum / m;
  } else a = -1;
   return a;
}