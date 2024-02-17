//Q1. Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
/*
#include<iostream>
using namespace std;    
int main() {
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
*/

//Q2. Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin>>n;
    for (int i=1; i <= n ; i++){
        for(int  j=1; j<= n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
*/
//Q3. Print the following pattern
// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin>>n;
    for (int i=1; i <= n ; i++){
        for(int  j=1; j<=i;j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}
*/

//Q4. Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin>>n;
    for (int i=1; i <= n ; ++i){
        if(i%2!=0) {
        for(int j=1; j<=i; ++j){
            cout<<j;
           }
        }
        else{
           // char ch=A;
            for(int j=1; j<=i; j++){
                cout<<(char)(j+64);
            }
        }
        cout<<endl;
    }
}
*/

//Q5. Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the number: ";
    cin >> n;
    // Regular pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout <<endl;
    }
    // Inverted pyramid
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout <<endl;
    }

    return 0;
}
*/

// Q6. Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// * *
// * *
// ******
/*
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows(m): ";
    cin>>n;
    cout << "Enter the number of columns(n): ";
    cin>>m;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == m || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << "";
            }
        }
        cout << endl;
    }

    return 0;
}
*/

//Q7. Print the following pattern
// Sample Input : n = 4
// Output :
// ****
// ****
// ****
// ****
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
//Q8. Print the following pattern
// Sample Input : n= 4
// Output :
// 1
// 1 2
// 1 2 3
// 1 2 3 4
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter  the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

*/
//Q9. Print the following pattern
// Input : n = 4
// Output :
// A
// A B
// A B C
// A B C D
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}
*/

//Q10. Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
/*
#include<iostream>
using  namespace std;
int main(){
    int n;
    cout<<"enter the for square: ";
    cin>>n;
 
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
*/