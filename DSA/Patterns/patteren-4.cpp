/*
Examples:

Input Format: N = 3
Result: 
1
2 2 
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/

#include <iostream>
using namespace std;

void pattern4(int N){
    for (int i=1;i<=N;i++){
        for(int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    int N;
    cout<<"Enter N: ";
    cin>>N;
    pattern4(N);
    return 0;
}