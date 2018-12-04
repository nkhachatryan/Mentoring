/*Task:
https://www.codewars.com/kata/526233aefd4764272800036f
*/


#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int> > matrixAddition(vector<vector<int> > a,vector<std::vector<int> > b){
  vector<vector<int> > c;
  
  for(size_t i = 0; i < 3; ++i)
  {
    vector<int> temp;
    
    for(size_t j = 0; j < 3; ++i)
    {
      temp.push_back(a[i][j] + b[i][j]);
      c.push_back(temp);
    }
  }
  return c;
}
