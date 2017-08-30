#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x,y,z,a,b,c;
	cout<<"enter P,T,R and the number of times it is compounded per year";
	cin>>x>>y>>z>>a;
	b=x*z/a;
	c=a*y;
	cout<<"the compound interest is  "<<pow(b,c);


	return 0;
}
