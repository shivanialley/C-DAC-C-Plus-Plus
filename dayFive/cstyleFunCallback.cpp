#include<iostream>
using namespace std;

void fun();
void funOne();

int main(){
    void (*fPtr)();
    fPtr = fun;
    fPtr();
    fPtr = funOne;
    fPtr();
}

void fun(){
    cout << "fun() called" << endl;
}

void funOne(){
    cout << "funOne() called" << endl;
}
