#include<iostream>
using namespace std;
/*
write a Program that takes an input of age and prints if one is adult or not
*/

// int main(){
//     int age;
//     cin >> age;
//     if(age>=18){
//         cout<<"You are an adult";
//     }
    // else{
    //     cout<<"You are not an adult";
    // }
    // else if(age<10){
    //     cout<<"You are not an adult";
    // }
//     return 0;
// }

/*
If marks are less than 25, it prints "Grade: F."
If marks are between 25 and 44 (inclusive), it prints "Grade: E."
If marks are between 45 and 49 (inclusive), it prints "Grade: D."
If marks are between 50 and 59 (inclusive), it prints "Grade: C."
If marks are between 60 and 69 (inclusive), it prints "Grade: B."
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered."
*/

// int main(){
// int marks;
// cout<<"Please Enter your marks : " <<endl;
// cin>>marks;

// if(marks < 25)
// cout<<"Grade F" <<endl;
// else if(marks >= 25 && marks <= 44){
//     cout<<"Grade E" <<endl;
// }
// else if(marks>= 45 && marks <=49){
//     cout<<"Grade D" <<endl;
// }
// else if(marks>= 50 && marks <=59){
//     cout<<"Grade C" <<endl;
    
// }
// else if(marks>= 60 && marks <=69){
//     cout<<"Grade B" <<endl;

// }
// else if(marks >= 70){
//     cout<<"Grade A" <<endl;
// }
// else{
//     cout<<"Invalid marks entered." <<endl;
// }

// return 0;
// }



// int main() {
//     int marks = 54;
//     char grade;

//     if (marks < 25) {
//         grade = 'F';
//     } else if (marks <= 44) {
//         grade = 'E';
//     } else if (marks <= 49) {
//         grade = 'D';
//     } else if (marks <= 59) {
//         grade = 'C';
//     } else if (marks <= 69) {
//         grade = 'B';
//     } else if (marks >= 70) {
//         grade = 'A';
//     } else {
//         grade = 'X'; 
//     }

//     std::cout << "Grade: " << grade << std::endl;
    
//     return 0;
// }
/*

1.if age <18,
print -> not elgible for job
2.else if age >= 18 && age < 54,
print -> eligible for job
3.else if age >= 55 && age <=57
print -> eligible for job but retirement soon
4. else if age > 57,
print -> eligible for retirement
*/

int main () {
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age < 18){
        cout<<"Not eligible for job";
    }
    // else if(age >= 18 && age < 54){
    //     cout<<"Eligible for job";
    // }
    // else if(age >= 55 && age <=57){
    //     cout<<"Eligible for job but retirement soon";
    // }

    else if(age<=57){
        cout<<"Eligible for job";
        if(age>=55){
            cout<<" but retirement soon";
}
    else {
        cout<<"Eligible for retirement";
    }
    return 0;

}
}