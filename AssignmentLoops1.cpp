//Q1. Print all the odd numbers from 1 to 100.
//code:
/*
  #include <iostream>
  using namespace std;
  int main(){
    for(int i=1; i<=100; i++){
        if(i%2 != 0){
            cout<<i<<endl;
        }
    }
  }
  */

  //Q2. Print all numbers from 1 to 100 that are divisible by 3.
  //code:
  /*
  #include<iostream>
  using namespace std;
  int main(){
    for(int i=3; i<=100; i++){
        if(i%3==0){
            cout<<i<<endl;
        }
    }
  }
  */
  //Q3. Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
  /*
  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cout<<"enter the number for the table: ";
    cin>>n;
    for(int i=1; i<=10; ++i){
       
        cout<<n<<" * "<<i<<"="<<n*i<<endl;
      }
    }
    */

//Q4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
//code:
/*
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter th number of terms: ";
   cin>>n;
   int comDiff = 3;
   for(int i=1; i<=n; i++){
    int term = 4+(i-1)*comDiff;
    cout<<term;
     
     if(i<n){
        cout<<" , ";
     }
   
   }
     return 0;
}
*/
//Q5. Display this GP - 3,12,48,.. upto ‘n’ terms.
//code:
/*
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter th number of terms: ";
   cin>>n;
   int comRatio = 4;
   cout<<"GP "<< n <<" terms: ";
   int terms = 3;
   for(int i=1; i<=n; i++){
    cout<<terms;
     
     if(i<n){
        cout<<" , ";
     }
   terms = terms * comRatio;
   }
     return 0;
}
*/

//Q6.Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
//code:
/*
#include<iostream>
using namespace std;
int main(){
    int i=65;
    while(i<=90){
        cout<<(char)i<<endl;
        i++;
    }
    cout<<endl;
    int j=97;
    while(j<=122){
        cout<<(char)j<<endl;
        j++;
    }
}
*/