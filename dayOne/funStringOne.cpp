#include<iostream>
using namespace std;
/*
void fun(char* str){
	cout << "void fun(char*)"<<str<<endl;
	// This next line will give segfault if we pass a string as argument, 
	// because we are trying to modify a read only string 
	cout<<"printing......"<<*str<<endl;
}
*/
void funONe(string &st)
{
	cout<<"In funONe...."<<st<<endl;
	st ="OH My GOd";
	cout<<"In funONe..MP.."<<st<<endl;
}

int main(){
	// This will give segfault:
	//fun("testing some strings here");
	
	// on the other hand this will run:
	char str[] = "testing some strings here"; 
	string st = "I love my india";
//	fun(str);
	funONe(st);
	return 0;
}
