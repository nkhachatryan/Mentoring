//Task:
//In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?
//Solution:
int makeNegative(int a)
{
int b=a;
if(b>0){ 
b=-1*b;
}
  return b;
}