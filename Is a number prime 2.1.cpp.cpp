/*Task:
https://www.codewars.com/kata/5262119038c0985a5b00029f
Splution:*/
#include <cmath>
bool isPrime(int n) {
 
    if(n<2)
        return false;
    if(n==2)
        return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    
    return true;
  
}