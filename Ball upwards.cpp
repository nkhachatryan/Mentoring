/*Task:
https://www.codewars.com/kata/566be96bb3174e155300001b
Solution:*/
class Ball
{
    public: static int maxBall(int v0);
};
inline int Ball::maxBall(int v0){
double max=0;
double h;
int a=0;
for(int i=1;i<100;i++){
h=v0*(i/10.0)/3.6-(9.81*(i/10.0)*(i/10.0)*0.5);
if(h>max){ 
max=h;
a=i;}
}
return a;
}
