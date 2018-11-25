/*Task:
https://www.codewars.com/kata/bouncing-balls/train/cpp/5befdc30e50d1b66c10000c5
Solution: */

using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};
inline int Bouncingball :: bouncingBall(double h, double bounce, double window){
  int i;
  
  if(h < 0 || bounce < 0 || bounce > 1 || window >= h){
    return -1;
  } else{
      for(i=0; h >= window; i++){
        h*=bounce;
      }
  
        return i*2-1;
    }
}