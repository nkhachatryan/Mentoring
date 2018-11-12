/*Task:
Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.

If the input array is empty or null, return an empty array.

Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].
Splution:*/
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