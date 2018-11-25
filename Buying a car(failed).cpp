/*Task:
https://www.codewars.com/kata/554a44516729e4d80b000012

Solution: */

#include <vector>
#include <cmath>
using namespace std;

class BuyCar
{

  public:
  static vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
  {
  
  int sum = 0;
  int i = 0;
  int k = 1 - percentLossByMonth/100.0;
  vector<int> l;
  
    if(startPriceNew > startPriceOld)
    {
      for(i = 0; sum < startPriceNew; ++i)
      {
        startPriceOld *= k;
        startPriceNew *= k;
        savingperMonth *= i;
        sum = startPriceOld + savingperMonth;
        k =k - 0.005;
      }
      sum = round(sum);
      l.push_back(i);
      l.push_back(sum - startPriceNew);
    } else {
      l.push_back(0);
      l.push_back(abs(startPriceNew - startPriceOld));
    }
    return l;
  }
};