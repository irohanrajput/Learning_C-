#include <iostream>

using namespace std;
int glo = 7;
int main (){
    int a = 46;
    int b = 5;
    cout<<" ->This is tutorial 4. Here the value of a is " <<a  
    <<" and the value of b is "<<b <<".";


//Here "a" and "b" are variables and that too user defined.


//we don't really need the variables to define in two different lines, 
// they can be separated by using a comma as shown below


    int p =67, q=33;
    float pi = 3.14;
    char c = 'd';
    cout<<glo <<"\n";
    int glo = 9;  
    
    //always use only one character in a chartacter variable 
    // i.e. char c = 'fd' is incorrect.

    cout<<"The value of p and q is "<<p <<" and " <<q <<" respectively.\n";
    cout<<"And the value of pi is " <<pi <<"." <<endl;
    cout<<"And the value of c is " <<c <<"." <<endl;    
    cout<<glo;    

// local variable dominates over global variable.



    bool z = false;
    cout <<z;



return 0;
}