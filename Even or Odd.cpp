/*Task:
Create a function (or write a script in Shell) that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.
Solution:*/
std::string even_or_odd(int number) 
{
std::string str="Odd";
  if(number==0 || number%2==0) str="Even"; //check even or odd
  return str;
}
