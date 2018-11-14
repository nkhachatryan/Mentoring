/*Task:
https://www.codewars.com/kata/5262119038c0985a5b00029f
Splution:*/
bool isPrime(int num) {
if (num <= 1 ) 
{
return false;
}
else
{
for (int i = 2; i < num; i++)
{ 
if (num%i == 0) return false;
break;}
}
return true;
}

/* Fail at Attemp
Time: 1629ms Passed: 1 Failed: 2 Exit Code: 1
Test Results:
 is_Prime
 Some_Test
Expected: false
Actual: 1
 Negative_Test
 Random_Test
Expected: false
Actual: 1
 */
