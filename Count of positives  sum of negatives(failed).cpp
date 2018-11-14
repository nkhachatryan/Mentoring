/*Task:
https://www.codewars.com/kata/576bb71bbbcf0951d5000044
Solution:*/
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> myVector)
{
int count=0;
int sum=0;
    for(int i=0;i<myVector.size();i++){
    if(myVector[i]>0) {
    count=count+1;} 
    else if(myVector[i]<0){
    sum=sum+myVector[i];}
    }
    std::vector<int> arr(2);
    if(count!=0 || sum!=0){
    arr[0]=count;
    arr[1]=sum;} 
    return arr;
}
/* Fail at Attemp
Time: 1709ms Passed: 3 Failed: 1 Exit Code: 1
Test Results:
 Test
 Test1
 Test2
 Test3
Expected: equal to [  ]
Actual: [ 0, 0 ]
 RandomTests
 */
