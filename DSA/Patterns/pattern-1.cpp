/*
Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *


Example 2:
Input: N = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *

*/

#include <iostream>
using namespace std;

void pattern1(int N){

    for(int i=0;i<N;i++){
        for(int j=0 ;j<N; j++){
            std::cout<<"*";
        }

        cout<<endl;
    }
}

int main(){

int N;

   std::cout<<"Print N";
   std::cin>>N;

   pattern1(N);

   return 0;
}