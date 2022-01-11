/*(Find the Largest) The process of finding the largest number (i.e., the maximum
of a group of numbers) is used frequently in computer applications. For example, 
a program that determines the winner of a sales contest inputs the number of units
sold by each salesperson. The salesperson who sells the most units wins the contest.
Write a C++ program that uses a while statement to determine and print the largest 
of 10 numbers input by the user.( c++ how to program )*/

#include<iostream>
using namespace std ;

int main(){
    int counter(1) , number(0) , largest(0);

    while (counter<=10){
        cout << "Enter number " << counter<<" : " ;
        cin>> number ;

        if(number > largest){
            largest = number ;
        }

        counter++ ;
    }
    cout << " The largest is : " << largest << endl ;


}