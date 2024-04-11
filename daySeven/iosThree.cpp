//-------------------------------------------------------------------------
//Institute : CDAC Bangalore
//-------------------------------------------------------------------------
//Abstract : fstream include file take output of file data
//-------------------------------------------------------------------------
//Author : Shivani Garg
//-------------------------------------------------------------------------

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char ch;
	ifstream in("iosThree.cpp");
	while(in.get(ch))
		cout<<ch;
}
