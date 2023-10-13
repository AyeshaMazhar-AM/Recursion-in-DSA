#include<iostream>
using namespace std;

int fact(int n)
{
	if(n == 0)
	return 1;
	else
	return fact(n-1)*n;
}

int fact2(int n)
{
	int k=1;
	for(int i=1;i<=n; i++)
	k *= i;
	return k;
}

int main()
{
	int a = 5;
	cout<<"factorial using recursion : "<<fact(a)<<endl;
	cout<<"factorial using loop : "<<fact2(a)<<endl;
}
