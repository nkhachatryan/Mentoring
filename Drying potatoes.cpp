/*Task:
https://www.codewars.com/kata/58ce8725c835848ad6000007
Solution:*/
using namespace std;

int potatoes(int p0, int w0, int p1)
{
    return w0*(100.0-p0*1.0)/(100.0-p1*1.0);
}
