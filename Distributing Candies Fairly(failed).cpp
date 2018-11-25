/*Task:
https://www.codewars.com/kata/59901cd68fc658ab6c000025

Solution: */

#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> distribute(int m, int n) {
  int l, c, i;
  double p,k;
  vector<int> arr;
  
    if(n <= 0 ){
      return {};
    } else if(m<=0){
        for(int z=0; z<n; z++){
          arr.push_back (0);
        }
      } else if(m>0){
            l=m/n;
            k=m*1.0/n;
            c=l++;
            p=ceil(k)-k;
            p=p*n;
              if(l >= 0){
                  for(i = p; i < n; i++){
                      arr.push_back(c);
                    }
                  for(i = 0; i < p; i++){ 
                  arr.push_back (l);
              }
        }
        }
        return arr;
}