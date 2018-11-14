/*Task:
https://www.codewars.com/kata/559a28007caad2ac4e000083
Splution:*/
typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n);
};
inline ull SumFct:: perimeter(int n){
  int sum=8;
  int ptarr[100000];
  ptarr[0]=1;
  ptarr[1]=1;
  for(int i=2; i<= n; i++){
    ptarr[i]=ptarr[i-1]+ptarr[i-2];
    sum=sum+4*ptarr[i];}
    return sum;
 }
/* Fail at Attemp
Time: 1681ms Passed: 0 Failed: 2 Exit Code: 1
Test Results:
 perimeter_Tests
 Fixed__Tests
 Random_tests
 Log
 ****************** perimeter
Expected: equal to 1232246084680512
Actual: 18446744072202173248
 */
