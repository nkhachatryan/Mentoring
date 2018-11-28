/*Task:
https://www.codewars.com/kata/554a44516729e4d80b000012

Solution: */

#include <vector> 
#include <cmath> 
using namespace std; 

class BuyCar 
{ 

	public: 
	static vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) 
	{ 

		int sum = 0; 
		int i = 0; 
		double k = 1 - percentLossByMonth/100.0; 
		vector<int> l; 

		if(startPriceNew <= startPriceOld) 
		{ 
			l.push_back(0); 
			l.push_back(startPriceOld - startPriceNew); 

			return l; 
		} 
		else 
		{ 
			while((startPriceOld + sum) <= startPriceNew) 
			{ 
				i++; 
				if(i % 2 == 0) k -= 0.005; 
				startPriceOld *= k; 
				startPriceNew *= k; 
				sum += savingperMonth; 
			} 
		} 
		l.push_back(i); 
		l.push_back(round(startPriceOld + sum - startPriceNew)); 

		return l; 
	}; 
};