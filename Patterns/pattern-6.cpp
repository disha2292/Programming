/*
Examples:

Input Format: N = 3
Result: 
1 2 3
1 2
1

Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/

#include <iostream>
using namespace std; 

void pattern6(int N){
    for(int i=1 ;i<=N ;i++){
        for(int j=N ; j>=i ; j--){
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    int N;
    cout<<"Enter N: ";
    cin>>N;
    pattern6(N);
    return 0;
}