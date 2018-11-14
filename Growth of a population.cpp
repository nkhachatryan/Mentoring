/*Task:
https://www.codewars.com/kata/563b662a59afc2b5120000c6
Solution:*/
class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p);
};
inline int Arge :: nbYear(int p0, double percent, int aug, int p){
int i=0;
while(p0<p){
p0=p0+p0*percent/100.0+aug;
i++;
}
return i;}
