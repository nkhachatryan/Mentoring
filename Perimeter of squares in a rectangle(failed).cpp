/*Task:
The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. It's easy to see that the sum of the perimeters of these squares is : 4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80

Could you give the sum of the perimeters of all the squares in a rectangle when there are n + 1 squares disposed in the same manner as in the drawing:


#Hint: See Fibonacci sequence

#Ref: http://oeis.org/A000045

The function perimeter has for parameter n where n + 1 is the number of squares (they are numbered from 0 to n) and returns the total perimeter of all the squares.

perimeter(5)  should return 80
perimeter(7)  should return 216
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