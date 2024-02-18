//Q1. Print the following pattern
// Input: n = 5
// Output:
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        //print the space 
        for(int j=1; j<=n-i; j++){
        cout<<" ";
        }
        //print the number
        for(int j=1; j<=2*i-1; j++){
            cout<<j<<"";
        }
         cout<<endl;
    }  
}
*/

//Q2. Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        //space printing
        for(int j=1; j<=n-i; j++){
            cout<<" ";
    }
    char A = 65;
       for(int j=1; j<=2*i-1; j++){
        cout<<A<<"";
        A++;
       }
    cout<<endl;
    }
}
*/
// Q3. Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
     char A = 65;
    for(int i=1; i<=n; i++){
        //space printing
        for(int j=1; j<=n-i; j++){
            cout<<" ";
    }
   
       for(int j=1; j<=2*i-1; j++) {
        cout<<A;
           if(j<i){
            --A;
           }
           else{
            ++A;
           }
       }
 
    cout<<endl;
    }
    ++A;
}
*/
//Q4. Print the following pattern
// Input: n = 4
// Output:

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;
//     char A = 65;
//     for(int i=1; i<=2*n-1;i++){
//         cout<<A;
//         A++;
//     }
//     cout<<endl;
//     int m = n-1;
//     int nsp = 1;

//     for(int i=1; i<=m; i++){
//         //Letter
//         char A=65;
//         for(int j=1; j<=m+1-i; j++){
//         cout<<A;
//         A++;
//         }
//         //space
//         for(int k=1;k<=nsp; k++){
//             cout<<" ";
//             A++;
//         }
//         nsp+=2;
//         //Letter
//         for(int j=1; j<=m+1-i; j++){
//             cout<<A;
//             A++;
//         }
//        cout<<endl;
    
        
//     }
// }

//Q5. Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i;
    }
    for(int i=n-1;i>=1;i--){
        cout<<i;
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;

    for(int i=1; i<=m; i++){
        //Number 
        for(int j=1; j<=m+1-i; j++){
        cout<<j;
        }
        //space
        for(int k=1;k<=nsp; k++){
            cout<<" ";
        }
        nsp+=2;
        //Number 
        for(int j=n-i; j>=1; j--){
            cout<<j;
        }
       cout<<endl;  
    }
}
*/

//Q6. Print the following pattern
// Input : n = 5
// Output:
//  *         *
//   *       *
//    *     *
//     *   *
//       *
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) {
                cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    for(int j=i; j<=n; j++){
        if(i!=j){
            cout<<" ";
        }
        else  cout<<" ";
    }
    for(int j=i; j>=i; j--){
         if(i==j){
            cout<<"*";
        }
        else  cout<<" ";
    }
      cout<<endl;
  }
}
*/
//Q7. Print the following pattern
// **** ****
// ***   ***
// **     **
// *       *        
// *       *
// **     **
// ***   ***
// **** ****
/*
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter the number : ";
    cin>>N;

    for (int i = 0; i < N; i++){
        for (int j =0; j<N-i-1; j++)
        {
            cout <<"*";
        }
        for(int j=0;j< 2*i+1;j++){
            cout<<" ";
        }
         for (int j =0; j<N-i-1; j++)
        {
            cout <<"*";
        }
        cout<<endl;
    }

    for (int i = 0; i < N; i++){
        for (int j =0; j<i; j++)
        {
            cout <<"*";
        }
        for(int j=0;j< 2*N -(2*i +1);j++){
            cout<<" ";
        }
         for (int j =0; j<i; j++)
        {
            cout <<"*";
        }
        cout << endl;
    }
} 
*/
//Q7. Print the following pattern
//Input : n = 4
// Output :
//  *      *
//  **    **
//  ***  ***
//  *******
//  *******
//  *** ***
//  **   **
//  *     *
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }

          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }

    }
*/

      


