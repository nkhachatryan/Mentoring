/*Task:
https://www.codewars.com/kata/559a28007caad2ac4e000083

Solution: */

typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n);
};

inline ull SumFct :: perimeter(int n){
  ull sum = 2;
  ull arr[100000];
  arr[0] = 1;
  arr[1] = 1;
  
  for(int i = 2; i <= n; i++){
    arr[i] = arr[i-1] + arr[i-2];
    sum = sum + arr[i];
  }
  sum = sum*4;
    return sum;
 }