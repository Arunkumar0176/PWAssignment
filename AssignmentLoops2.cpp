//Q1. Predict the output
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
while ('1' < '2')
cout << "In while loop" << endl;
}
*/
//output:
//the output will be an infinite loop printing "In while loop" continuously.

//Q2. Predict the output
/*
#include <bits/stdc++.h>
using namespace std;
int main( ) {
int t = 10;
while (t /= 2) {
cout << "Hello" << endl;
}
}
*/
//output:
// Hello
// Hello
// Hello

//Q3. Predict the output
/*
#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}
*/
//output:
// In for loop
// In for loop
// In for loop

//Q4. Predict the output
/*
#include <bits/stdc++.h>
using namespace std;
int main( ) {
      int x = 10, y = 0 ;
         while ( x >= y ) {
              x-- ;
              y++ ;
     cout << x << " " << y << endl ;
    }
}
*/
//output:
// 9 1
// 8 2
// 7 3
// 6 4
// 5 5
// 4 6

//Q5. WAP to print the sum of all the even digits of a given number.
//Sample Input : 4556
//Output: 10
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n<0){
        cout<<"enter the positive number: ";
        return 1;
    }
    int sum=0;
    while(n>0){
       int digits = n%10;
        if(digits%2==0){
            sum = sum+digits;
        }
        n = n/10;
    }
    cout<<sum;
    return 0;
}
*/
//output:
//enter the number: 345678
//18   

//Q6. WAP to print the sum of a given number and its reverse.
//Sample Input : 12
//Sample Output : 33 [12+21]
/*
#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"enter the number :";
   cin>>n;

   int RealNum = n;
    int RevNum = 0;
    while(n>0){
        int digits = n%10;
        RevNum = RevNum*10+digits;
        n = n/10;
    }
    int sum = RealNum+RevNum;
    cout<<RealNum<<"+"<<RevNum<<"="<<sum;
    return 0;
}
*/
//output:
//enter the number :12
//12+21=33    

//Q7. Print the factorials of first ‘n’ numbers
/*
Sample Input : 10
Output :
1
2
6
24
120
720
5040
40320
362880
3628800
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        int fact  = 1;
        for(int j=1; j<=i; j++){
            fact = fact*j;
        }
        cout<<fact<<endl;
    }
}
*/
//output:
/*
enter the number: 10
1
2
6
24
120
720
5040
40320
362880
3628800
*/

//Q8. Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output : 1 1 2 3 5 8 13 21 34 55
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the factorial: ";
    cin>>n;
    int a=1, b=1, sum=0;
    for(int i=1; i<=n-2; i++){
        int sum = a+b;
        a = b;
        b = sum;
        cout<<" "<<sum;
    }
    
}
*/
//enter the factorial: 10
// 2 3 5 8 13 21 34 55 

// Q9. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
/*
#include <iostream>
using namespace std;
int calculateArmstrongSum(int num) {
    int sum = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return (sum == originalNum) ? sum : 0;
}

int main() {
    cout << "Armstrong numbers between 1 and 500:" <<endl;

    for (int i = 1; i <= 500; ++i) {
        int armstrongSum = calculateArmstrongSum(i);
        if (armstrongSum != 0) {
            std::cout << armstrongSum << std::endl;
        }
    }

    return 0;
}
*/
//output:
/*
Armstrong numbers between 1 and 500:
1
153
370
371
407
*/
