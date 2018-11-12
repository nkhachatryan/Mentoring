/*Task:
Is Prime
Define a function isPrime/is_prime() that takes one integer argument and returns true/True or false/False depending on if the integer is a prime.

Per Wikipedia, a prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself.

Example
bool isPrime(5) = return true
mov edi, 1
call is_prime    ; EAX <- 0 (false)

mov edi, 2
call is_prime    ; EAX <- 1 (true)

mov edi, -1
call is_prime    ; EAX <- 0 (false)
Assumptions
You can assume you will be given an integer input.
You can not assume that the integer will be only positive. You may be given negative numbers as well (or 0).
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