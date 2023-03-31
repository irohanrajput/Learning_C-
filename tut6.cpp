//this is a system header file
#include <iostream>

//this is a user defined header file 
//ek file bana do "this.h" ka, tabhi to define hoga na vro :D)
#include "this.h"
// #include "this.h"... this will produce an error if "this.h" file is not present is the current direc

using namespace std;

int main(){
    cout<<"let us talk bout some operators in cpp \n";
    cout<<"Types of Operators"<<endl;



//1.Arithemtic Operators


    int a=23, b=5  ;

    cout<< "As we know, a = " <<a <<" and b = " <<b <<endl;
    cout<<"The value of a + b is: " << a + b <<endl;
    cout<<"The value of a - b is: " << a - b <<endl;
    cout<<"The valu-e of a x b is: " << a * b <<endl;
    
    cout<<"The value of a / b is: " << a / b <<endl; 
    //this gives only integer part and ignores the decimal value i.e. for 1.6 answer, ouptput is 1 and for -1.6 the output is -1.
    
    cout<<"The value of remainder in  a / b ( value of a % b) is: " << a % b <<endl;
    // "%" is called modulo operator, used to get the remainder in a division i.e. 11 % 3 gives output 2 which is the remainder :) 

    cout<<"The value of a ++  is: " << a++ <<" and after doing that a++ thing, the value of 'a' becomes: " <<a <<endl;
    //Here it prints the value of "a" but at the same time adds "1" to "a" internally to make its value "a+1"

    cout<<"The value of b --  is: " << b-- <<" and after doing that b-- thing, the value of 'b' becomes: " <<b <<endl;
    //Here it prints the value of "b" but at the same time subtracts "1" from "b" internally to make its value "b-1"

    cout<<"The value of ++ a  is: " << ++a <<endl;
    // Here first the CURRENT VALUE OF 'a' (not necessarily the original value) is increamented by "1" and then printed.
    cout<< a <<endl;

    cout<<"The value of -- b  is: " << --b <<endl;
    // Here first the CURRENT VALUE OF 'b' (not necessarily the original value) is decreased by "1" and then printed.
    cout<< b <<endl<<endl<<endl;



//2. Assignment operator: to assign the values, i.e. a=5


//3. Comparison Operators: to compare values..
     cout<<"we know a = 23, b = 5"<< endl;
     cout<<"The value of a == b is: "<<(a==b)<<endl;
     cout<<"The value of a != b is: "<<(a!=b)<<endl;
     cout<<"The value of a >= b is: "<<(a>=b)<<endl;
     cout<<"The value of a <= b is: "<<(a<=b)<<endl;
     cout<<"The value of a > b is: "<<(a>b)<<endl;
     cout<<"The value of a < b is: "<<(a<b)<<endl<<endl<<endl;
cout<<"Here 1 denotes true and 0 denotes false"; 
cout<<endl <<endl <<endl;


//4.Logical Operators
//i.  AND (&&) operator
//ii. OR (||) operator
//iii.NOT (!) operator

cout<<"a=23, b=5\n";
    cout<<"The value of this logical 'AND' oprator ((a==b) && (a>b )) is: "<<((a==b) && (a>b)) <<endl; //AND operator i.e. Dono cases satisfy krne chaiye tbhi true (1) print hoga.

    cout<<"The value of this logical 'OR' oprator ((a==b) || (a>b )) is: "<<((a==b) || (a>b)) <<endl; //OR operator i.e. Either of the cases satisfy krna chaye tabhi true (1) print hoga.

    cout<<"The value of this logical 'NOT' oprator (!(a>b)) is: "<<(!(a>b)) <<endl; //OR operator i.e. Either of the cases satisfy krna chaye tabhi true (1) print hoga.
        return 0;
}