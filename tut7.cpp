#include <iostream>
using namespace std;
int c= 78;
int main(){
/*
    int a, b, c;
    cout<<"enter the value of 'a': ";
    cin>>a;
    cout<<"enter the value of 'b': ";
    cin>>b;

    c = a + b;
    cout<<"the sum is 'c': " <<c <<endl; 
    cout<<"the value of global variable 'c': "<<::c;
    return 0; */

//******************reference variables*******************
    /* int main(){
    float x = 455;
    float & y = x;
    cout<<x <<endl;
    cout<<y;
    return 0; */


//**********typecasting********
int a = 45;
float b = 46.49;
float c = 46.99;
cout<<"The value of 'a' is: " <<a <<endl;
cout<<"The value of 'b' is: " <<b <<endl;
cout<<"The value of 'c' is: " <<c <<endl;
cout<<"The value of 'a' after changing in float is: "<<float(a) <<endl;
cout<<"The value of 'b' after changing in integer is: "<<int(b) <<endl;
cout<<"The value of 'c' after changing in integer is: "<<int(c) <<endl;
float d = int(b);
cout<<d;
cout <<endl <<endl<<endl<<endl;

cout<<"The value of a + b is:";  //91.49
cout<< a + b <<endl; 
cout<<"The value of a + int(b) is:"; // 91
cout<< a + int(b) <<endl;
cout<<"The value of a + c is:"; // 91.99
cout<< a + c <<endl;
cout<<"The value of a + int(c) is:"; //91
cout<< a + int(c) <<endl;
cout<<"The value of a + d is:"; //91
cout<< a + d <<endl;

return 0;
}