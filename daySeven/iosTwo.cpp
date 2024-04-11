//--------------------------------------------------------------------------------------
//Institute : CDAC Bangalore
//---------------------------------------------------------------------------------------
//Abstract : Iostream using character by user with cin.get so space also considered
//---------------------------------------------------------------------------------------
//Author : Shivani Garg
//---------------------------------------------------------------------------------------

#include<iostream>

using namespace std;

int main()
{
	char ch;
	while(cin.get(ch))
		cout<<ch;
}
