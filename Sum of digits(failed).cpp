/* Task:
https://www.codewars.com/kata/541c8630095125aba6000c00
*/

int digital_root(int n)
{
int sum=0;
   
   if(n == 0){
     return 0;
   }  else if(n<10){
       return n;
     } else {
         while(n != 0){
           sum += n % 10;
           n = n / 10;
           }
             if(sum > 10){
               n = sum;
               digital_root(n);
             } else return sum;
       }
}   
