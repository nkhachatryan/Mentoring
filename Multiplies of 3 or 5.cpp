/*Task:
https://www.codewars.com/kata/514b92a657cdc65150000006
Solution:*/
int solution(int number) 
{
int sum=0;
for(int i=1;i<number;i++){
if(i%3==0||i%5==0) sum=sum+i;
}
return sum;
}
