/*Task:
https://www.codewars.com/kata/526c7363236867513f0005ca

Solution: */

bool IsLeapYear(int year) 
{
  if(year % 4 != 0 || (year % 100 == 0 && year%400 != 0)) return false;
  else return true;
}