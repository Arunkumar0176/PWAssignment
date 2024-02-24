//Q1. Write a program to find out the product of two numbers using pointers.
/*
#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"enter the number :";
    cin>>x;
    cin>>y;
    int  *ptr1 = &x;  //address of x is stored in ptr1
    int  *ptr2 = &y;  //address of y is stored in ptr2
    int ans;
    int *ptrans = &ans;
    *ptrans = (*ptr1) * (*ptr2);   
    cout<<*ptrans<<endl;
    return 0;
}
*/
//Q2. int *p, q; What does both of these terms signify?
//p is a pointer and q is an integer. * is grouped with variables, not data types.

//Q3. Predict the output of the following code snippet.
/*
#include <iostream>
using namespace std;
int main(){
int a = 10,b = 20;
int *ptr = &a;
  b = *ptr + 1;
  ptr = &b;
cout << *ptr << " "<< a <<" "<< b;
}
*/
//output : 11 10 11

//Q4. Predict the output of the following code snippet.
/*
#include <iostream>
using namespace std;
int main(){
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    cout<<*ptr<<" "<<*ptr2;
}
*/
//output: 20 20  a gets the value of b

//Q5. Predict the output of the following code snippet.
/*
#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    cout<<*ptr<<endl;
}
*/
/*
The program is correct and will compile but might result in runtime error.This is
because ptr will have a garbage address which might even point to a location which does not belong to our program and hence might result in Segmentation Fault when we are trying to access it. */