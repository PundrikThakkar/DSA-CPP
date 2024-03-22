#include<iostream>
using namespace std;

int main(){

/*
     // Q1. take input a and b and print which is greater.

     int a, b;
     cout << "Enter the value of a : ";
     cin >> a;
     cout << "Enter the value of b :";
     cin >> b;
     if (a > b)
     {
         cout << "A is greater than B" << endl;
     }
     else if (b > a)
     {
         cout << "B is greater than A" << endl;
     }
     else
     {
         cout << "Both are equal" << endl;
     }
     */

  /*
    //Q2. number is positive , negative or 0?
    int n;
    cout << "Enter the value of number : ";
    cin >> n;

    if(n>0){
        cout << "POSITIVE" << endl;
    }else if(n<0){
        cout << "NEGATIVE" << endl;
    }else {
        cout << "ZERO" << endl;
    }
    */

   /*
    // difference between cin and cin.get(): cin doesn't take spaces or tabs as input, cin.get() takes spaces and tabs as inputs and returns value of first character;

     int a, b;
     cin >> a >> b;
    cout << "value of a: " << a << " value of b : " << b << endl;

    int c;
    c = cin.get();
    cout << "value of c :" << c << endl;
    */

/*
   // Nested if - else conditional statements:
    // Q. Number is prime or not
   int n;
   int i = 2;

   cout << "Enter the number : " << endl;
   cin >> n;

   if(n>1){
    if(n==2){
        cout << "Number is prime!" << endl;
    }else{
        while(i<=n/2){
            if(n%i==0){
                cout << "Number is not prime!" << endl;
                return 0;
            }
            i++;
        }
        cout << "Number is prime" << endl;
        return 0;
    }
   }
   cout << "Your given number is 1,0 or NEGATIVE. Please enter valid number!" << endl;

   */

/*
// Loops : While Loop -> while(condition){if the condition is true then it will execute this block of code};

    //Q. Print 1 to N
    int n;
    cout << "Enter the number:";
    cin >> n;
    int i = 1;
    while(i<=n){
        cout << n << endl;
    }

    */

   /*
    // Q. sum of all numbers 1 to N;

    int n;
    cout << "Enter the number:";
    cin >> n;
    int sum = 0, i = 1;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout << "Sum of 1 to n is : " << sum << endl;

    */

   /*
    // Q. sum of all even numbers 1 to N;
    int n;
    cout << "Enter the number:";
    cin >> n;
    int i = 2, sum = 0;
    while(i<=n){
        sum = sum + 1;
        i = i + 2;
    }
    cout << "Sum of all even numbers from 1 to n : " << sum << endl;

    */

   
}