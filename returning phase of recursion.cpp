#include<iostream>
using namespace std;
//   returning phase of recursion
void fun1(int x)
{
	if(x > 0)
	{
	fun1(x - 1);
	cout<<x<<endl;
	}
}

int main()
{
	int x = 3;
	fun1(x);
}
