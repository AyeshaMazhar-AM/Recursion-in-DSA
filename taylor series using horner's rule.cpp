#include<iostream>
using namespace std;

double e(int x, int n)
{
	static double s = 1;
	if(n==0)
	return s;
	s = 1+x*s/n;
	return e(x, n-1);
}

int main()
{
	double r = e(3, 25);
	cout<<r<<endl;
}
