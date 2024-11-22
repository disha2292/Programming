/*
Examples:

Input Format: N = 3
Result: 
* * *
* * 
*

Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include <iostream>
using namespace std;

void pattern5(int N);

void pattern5(int N){
    // for (int i=0 ; i<N; i++){
        // for(int j=N ; j>i; j--){
        //     std::cout<<"*";
        // }

        for(int i=1; i<=N; i++){
            for(int j=N ; j>=i; j--){
                cout<<"*";
            }{

        cout<<endl;

    }
}
}

int main(){
    int N;
    cout<<"Enter N: ";
    cin>>N;
    pattern5(N);
    return 0;
}