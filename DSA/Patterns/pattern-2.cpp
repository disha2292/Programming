/*
Examples:

Input Format: N = 3
Result: 
* 
* * 
* * *

Input Format: N = 6
Result:
* 
* * 
* * *
* * * *
* * * * *
* * * * * *
*/

#include <iostream>
using namespace std;
void pattern2(int N){
    for(int i=0; i<N; i++ ){
        for(int j=0; j<=i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main(){

    int N;

   std::cout<<"Print N";
   std::cin>>N;

   pattern2(N);

   return 0;
}