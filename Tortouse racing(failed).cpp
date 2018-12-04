/* Task: https://www.codewars.com/kata/55e2adece53b4cdcb900006c

*/
#include <vector>
#include <cmath>
using namespace std;
class Tortoise
{
public:
    static vector<int> race(int v1, int v2, int g){
  double a,b,c;
  vector<int> vec;
  
  if(v1>=v2){
    return {-1, -1 ,-1};
  }
    else {
      a=g/((v2-v1)*1.0);
      b=trunc(a);
      a=(a-b)*60;
      c=trunc(a);
      a=(a-c)*60;
      a=trunc(a);
      vec.push_back(b);
      vec.push_back(c);
      vec.push_back(a);
    
    return vec;
    }
 }
 };
