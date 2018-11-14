/*Task:
https://www.codewars.com/kata/56747fd5cb988479af000028

#Output

The middle character(s) of the word represented as a string.
Solution:*/
std::string get_middle(std::string input) 
{
int n;
int i;
std::string s1;
std::string s2;
n=input.size();
 if(n%2==0){
 i=n/2;
 s1=input[i-1];
 s2=input[i];
 s1=s1+s2;
 } else{
 i=n/2;
s1=input[i];
 }
 return s1;
}
