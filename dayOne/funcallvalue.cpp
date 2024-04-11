//------Call by value------------//
#include<iostream>

using namespace std;

int change(int);

int main()
{
	int var = 10;
	cout<<"Before Var: "<<var<<endl;
	//var = change(20);
	var = change(var);
	cout<<"After Var: "<<var<<endl;
}

int change(int x)
{
	int xVar = 30;
		xVar+=x;
	return xVar;
}

