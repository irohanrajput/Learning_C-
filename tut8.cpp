#include <iostream>
#include <iomanip>
using namespace std;
int main(){
/******Constants in C++*****
const int pi = 3.14;
now value of pi is fixed, any attempt to change it will give an error...
cout <<a; */

//*****manupulators in c++******
//1. endl;
//2. setw; defined in <iomanip>

int a=4, b = 55, c = 879, d = 8878, e= 999;
cout<<"The value of 'a' without using setw is: "<<a <<endl;
cout<<"The value of 'b' without using setw is: "<<b <<endl;
cout<<"The value of 'c' without using setw is: "<<c <<endl;
cout<<"The value of 'd' without using setw is: "<<d <<endl;

cout<<"The value of 'a' with setw is: " <<setw(4) <<a <<endl;
cout<<"The value of 'b' with setw is: " <<setw(4) <<b <<endl;
cout<<"The value of 'c' with setw is: " <<setw(4) <<c <<endl;
cout<<"The value of 'd' with setw is: " <<setw(4) <<d <<endl;
return 0;

}