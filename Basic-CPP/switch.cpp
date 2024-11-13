#include<iostream>
using namespace std;

// int main(){
//     int day;
//     cin>>day;

//     switch(day){
//         case 1:
//         cout<<"Sunday";
//         case 2:
//         cout<<"Monday";
//         case 3:
//         cout<<"Tuesday";
//         case 4:
//         cout<<"Wednesday";
//         case 5:
//         cout<<"Thursday";
//         case 6:
//         cout<<"Friday";
//         case 7:
//         cout<<"Saturday";
//     }
// }

int main(){
    int day;
    cin>>day;

    switch(day){
        case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3:
        cout<<"Tuesday";
        break;
        case 4:
        cout<<"Wednesday";
        break;
        case 5:
        cout<<"Thursday";
        break;
        case 6:
        cout<<"Friday";
        break;
        case 7:
        cout<<"Saturday";
        break;
        default:
        cout<<"Invalid";
    }

    cout<<"   i did check";
    return 0;
}