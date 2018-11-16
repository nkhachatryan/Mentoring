/*Task:
https://www.codewars.com/kata/56606694ec01347ce800001b
Splution:*/
namespace Triangle
{
	bool isTriangle(long int a, long int b, long int c){
		bool w=false;
		if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0 && a+b+c>0) w=true;
	
		return w;
	}
};