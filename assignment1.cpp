//Q1. How can you output “Physics” and “Wallah” in two different lines in C++?
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"Phusics"<<endl;
    cout<<"Wallah";
}
*/

//Q2.Write a program to print 10 using 2 positive numbers less than 6 in C++ as output.
/*
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int m = 5;
    cout<<m+n;
}
*/

//Q3. How much space does the following data types take?
//  int : 4bytes
//  bool : 1bytes
//  float : 4bytes

//Q4. What is the output of this program?
/*
#include<iostream>
using namespace std;

int main() {
int a = 4;
int b = 5;
a++, b--;
cout << ++a << " " << b--;
}
*/
// output : 6 4

//Q5. Write a program to find the circumference of a circle with radius 10 in C++.
/*
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the radius of the circle : ";
    cin>>r;
    cout<<2*3.14*r;
}
*/

//Q6. How many of these can be a variable name ?
// 01Pwskills, _Float, int, Float, you will succeed

#include<iostream>
using namespace std;
int main(){
    //01Pwskills :  Not allowed as it contains number at starting😄

    double _Float = 6;
     cout<<_Float<<endl;

     int integer_value = 5;
     cout<<integer_value<<endl;

     float vitt = 5.66;
     cout<<vitt;
     // you will successed : white space are not allowed in taking variable

}
