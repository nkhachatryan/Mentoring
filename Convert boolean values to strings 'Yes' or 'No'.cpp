/*Task:
Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.
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