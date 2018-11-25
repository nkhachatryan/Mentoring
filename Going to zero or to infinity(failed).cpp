/*Task:
https://www.codewars.com/kata/55a29405bc7d2efaff00007c
Solution: */

#include <cmath>
class Suite
{
public:
  static double going(int n);
};
inline double Suite :: going(int n){
long double ans;
long double fac=1.0;
long double sum=1.0;
for(int i=2; i<=n; i++){
fac=fac*i;
sum=sum+fac;
}
ans=sum/fac;
ans=( (float) (( (int) ((ans+0.000005)*1000000))/1000000.0));
return ans;
}
