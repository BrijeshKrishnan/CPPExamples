#include <iostream>
using namespace std;


//int fun(int a, int b){
//   return (a > 5) && (b < 15);
// }

int covFunc(int test1, int test2)
{
	int a;
	if (test1 || test2) {
		a=5;
	}
	else {
		a=0;
	}
	return a;
}
