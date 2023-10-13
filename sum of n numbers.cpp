#include <iostream>
using namespace std;

//recursive
int sum(int n)
{
	if(n == 0)
	return 0;
	else
	return sum(n-1)+n;
}

//by loop
int sum2(int n)
{
	int i;
	int s=0;
	for(int i=0; i<=n; i++)
	s += i;
	return s;
}

//by formula
int sum3(int n)
{
	return n*(n+1)/2;
}

int main()
{
	int a =5;
	cout<<"by recursive : "<<sum(a)<<endl;
	cout<<"by loop : "<<sum2(a)<<endl;
	cout<<"by formula : "<<sum3(a)<<endl;
}
