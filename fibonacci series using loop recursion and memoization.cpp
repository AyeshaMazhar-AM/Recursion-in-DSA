#include<iostream>
using namespace std;


//fibonacci using loop
int fib(int n)
{
	int t0=0, t1=1, s=0;
	if (n<=1)
	return n;
	else
	for(int i=2; i<=n; i++)
	{
		s=t0+t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}


//fibonacci using recursion
int rfib(int n)
{
	if(n<=1)
	return n;
	else
	return rfib(n-2)+rfib(n-1);
}


//fibonacci using memoization

int F[10];  //global array
int mfib(int n)
{
	if(n<=1)
	return n;
	else
	{
		if(F[n-2] == -1)
		F[n-2] = mfib(n-2);
		if(F[n-1] == -1)
		F[n-1] = mfib(n-1);
		
		F[n] = F[n-2]+F[n-1];
		return F[n-2]+F[n-1];
	}
	
}


int main()
{
//	for memoization
	for(int i=0; i<10 ; i++)
	{
		F[i]=-1;
	}
	
	int userinput;
	cout<<"enter the term no :";
	cin>>userinput;
	
	
	cout<<"the "<< userinput<<"th term using loop is : "<<fib(userinput)<<endl;
	
	cout<<"the "<< userinput<<"th term using recursion is : "<<rfib(userinput)<<endl;
	
	cout<<"the "<< userinput<<"th term using memoization is : "<<mfib(userinput)<<endl;
	return 0;
	
}
