/*Task:
https://www.codewars.com/kata/product-of-consecutive-fib-numbers/train/cpp/5bfabba1871e4f1fde00007b
*/


#include <vector>
#include <algorithm>
typedef unsigned long long ull;
using namespace std;

class ProdFib
{
public:
  static vector<ull> productFib(ull prod)
  {
    vector<ull> l,r;
    ull j;
    ull s;
    ull temp;
    l.push_back(1);
    l.push_back(1);
      for(int i = 2; i < 9999; i++)
      {
        l.push_back(l[i-1] + l[i-2]);
      }
      for(j = 2; s < prod; j++)
      {
        s = l[j-1] * l[j-2];
      }
      if(s == prod)
      {
        temp = l[j-3];
        r.push_back(temp);
        temp = l[j-2];
        r.push_back(temp);
        r.push_back(true);
      } else 
      {
        temp = l[j-3];
        r.push_back(temp);
        temp = l[j-2];
        r.push_back(temp);
        r.push_back(false);
      }
       return r;
  }
};