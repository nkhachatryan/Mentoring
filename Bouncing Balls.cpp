/*Task:
https://www.codewars.com/kata/bouncing-balls/train/cpp/5befdc30e50d1b66c10000c5
Solution: */

using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
      size_t i;
      if( h <= window || h < 0 || bounce < 0 || bounce >= 1)
      {
        return -1; //chek 
      } else 
        {
          for(i = 0; h > window; i++)
          {
            h *= bounce;
          }
        }
        return 2*i-1;
      }  
};