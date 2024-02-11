//Q1. Find the output for this code. Let input:- 2 3 6
/*
#include <iostream>
using namespace std;
int main()
{
    int x;
        cout << "Enter first number\n";
        cin >> x; // user will give ‘x’ a value.
        int y, m;
        cout << "Enter second number and value for taking modulus\n";
        cin >> y >> m; // user will give ‘y’ a value.
        int Z = (x * y) % m;
        cout << "Output is: " << Z;
}
*/
//after the input of number 2,3,6 the output will be : 0

//Q2. Find the output for this code. Let input:- 3 2
/*
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x; // user will give 'x' a value.
    int y;
    cout<<"Enter second number\n";
    cin>>y; // user will give 'y' a value.
    cout<<(x!=y)<<" "<<(x>=y);
}
*/
//when we give input 3, 2 the output will be 1 1

//Q3. Find the output for this code. Let input:- 2 3
/*
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;
}
*/
//the output will be 2

//Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
 //the formula of volume of cylinder is pi*r*r*h
 /*
#include <iostream>
using namespace std;
int main(){
    int r,h;
    cout<<"enter a radius of cylinder: "<<endl;
    cin>>r;
    cout<<"enter the height of cylinder: "<<endl;
    cin>>h;
    float value = (3.14) * (r * r) * h;
    cout<<"The Volume of Cylinder is : " <<value;
}
*/
//Q5. WAP to find the difference between ASCII of two characters ,take them as input .
/*
#include<iostream>
using namespace std;
int main(){
    char ch1;
    char ch2;
    cout<<"enter the first character: "<<endl;
    cin>>ch1;
    cout<<"enter the second character: "<<endl;
    cin>>ch2;
    int diff = int(ch1) - int(ch2);
    cout<<"Difference between ASCII values of two characters is : "<<diff;
}
*/

//Q6. Find the output of the below code
/*
#include <iostream>
using namespace std;
int main(){
    int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
    cout<<i;
}
*/
//the output will be 49