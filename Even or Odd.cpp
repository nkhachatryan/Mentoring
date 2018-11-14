/*Task:
https://www.codewars.com/kata/53da3dbb4a5168369a0000fe
Solution:*/
std::string even_or_odd(int number) 
{
std::string str="Odd";
  if(number==0 || number%2==0) str="Even"; //check even or odd
  return str;
}
