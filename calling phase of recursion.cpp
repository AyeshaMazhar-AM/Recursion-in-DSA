#include<iostream>
using namespace std;
//   calling phase of recursion
void fun1(int x)
{
	if(x > 0)
	{
	cout<<x<<endl;
	fun1(x - 1);
	}
}

int main()
{
	int x = 3;
	fun1(x);
}
