/* Task:
https://www.codewars.com/kata/5b55c49d4a317adff500015f
*/
static int pointsNumber(int radius)
{
  int count = 0;
  
  for(int i = 1; i <= radius; i ++)
  {  
    for(int j = 1; j <= radius; j ++)
    {
      if((i * i + j * j) <= (radius * radius))
      {   
        count++;
      }
    } 
  }  
 return count * 4 + radius * 4 + 1;
}
