//Q1. Write a function to print squares of first n natural numbers, taking n as argument to the function.
/*
#include<iostream>
using namespace std;

void Squares(int a) {
    for(int i = 1; i <= a; i++) {
        cout << i << " " << i * i << endl;
    }
}
int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;
    Squares(a);

    return 0;
}
*/

//Q2. Write a function that takes the radius of a circle as an argument and returns its area.
// #include<iostream>
// using namespace std;

// float area(float r){
//      float pi = 3.14;
//     return pi * r * r;
// }
// int main() {
//     float r;
//     cout << "Enter the radius to find the area: ";
//     cin >> r;
//     float areaofcircle = area(r);
//     cout << "The Area is: " << areaofcircle << endl;

//     return 0;
// }


//Q3. Given two numbers a and b, write a function to print all odd numbers between them.
/*
#include <iostream>
using namespace std;

void oddNum(int a, int b) {
    if (a > b) {
        swap(a, b);
    }
    cout << "Odd Numbers Between " << a << " and " << b << ": ";
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    oddNum(x, y);

    return 0;
}
*/

//Q4. Write a function to count the number of digits in a number and then print the square of this number.
/*
#include<iostream>
#include<cmath>
using namespace std;
void  digitCountSquare(int n) {
    int digitCount = 0;
    int tempNumber = abs(n);

do {
        tempNumber /= 10;
        digitCount++;
    } while (tempNumber != 0);

    cout<<"the number of digit: "<<digitCount<<endl;
    cout<<"the number of square:"<<pow(n,2)<<endl;
}
int main(){
     int  num ;
     cout<<"enter the number:";
     cin>>num;
     digitCountSquare(num);
}
*/
//Q5. The minimum number of functions present in any C++ program is:
//Answer is 1

//true and flase
//1. A function may be called more than once from any other function.
//2. it is necessary for function to return some value.
//1. True
//2. False

//Q6.Can the same function name be used for different functions without any conflict?
/*
No, in C++, you cannot use the same function name for different functions without any conflict. Function overloading allows you to use the same function name for different functions within the same scope, but the functions must have different parameter lists.
*/

