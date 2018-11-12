/*Task:
Implement a method that accepts 3 integer values a, b, c. The method should return true if a triangle can be built with the sides of given length and false in any other case.

(In this case, all triangles must have surface greater than 0 to be accepted).
Solution:*/
namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
  bool w=false;
  if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0) w=true;
    return w;
  }
};
/*Fail at "Attemp":
Time: 1665ms Passed: 4 Failed: 2 Exit Code: 1
Test Results:
 TriangleTests
 Zero_ReturnsFalse
 Negative_ReturnsFalse
 ValidTriangles_ReturnsTrue
 Limits_ReturnsTrue
 InvalidTriangles_ReturnsFalse
 Random
 Log
Try: 1899385517,1552893716,638299505
Expected: true
Actual: 0
*/