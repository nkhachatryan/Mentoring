/*Task:
https://www.codewars.com/kata/53369039d7ab3ac506000467
Solution:*/
using namespace std;

string bool_to_word(bool value)
{
char* string="false";
  if(value==1){
  string="Yes";
  }else if(value==0){
  string="No";}
  return string;
}
