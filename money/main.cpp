//Clayton Arndt
//money.cpp
//Homework2
//9/21/20
//CS201

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::cout;
using std::endl;
using std::cin;


int main() {
int p,n,dim,q,h,dol,total;
double dollars;
    cout << "How many pennies do you have?";
    cin>>p;
    cout << "How many nickels do you have?";
    cin>>n;
    cout << "How many dimes do you have?";
    cin>>dim;
    cout << "How many quarters do you have?";
    cin>>q;
    cout << "How many half dollars do you have?";
    cin>>h;
    cout << "How many dollars do you have?";
    cin>>dol;

    if(p<=1)
        cout<<"\n\nYou have "<<p<<" penny.";
    else
        cout<<"\n\nYou have "<<p<<" pennies.";
    if(n<=1)
        cout<<"\n\nYou have "<<n<<" nickel.";
    else
        cout<<"\n\nYou have "<<n<<" nickels.";
    if(dim<=1)
        cout<<"\n\nYou have "<<dim<<" dime.";
    else
        cout<<"\n\nYou have "<<dim<<" dimes.";
    if(q<=1)
        cout<<"\n\nYou have "<<q<<" quarter.";
    else
        cout<<"\n\nYou have "<<q<<" quarters.";
    if(h<=1)
        cout<<"\n\nYou have "<<h<<" half dollar.";
    else
        cout<<"\n\nYou have "<<h<<" half dollars.";
    if(dol<=1)
        cout<<"\n\nYou have "<<dol<<" dollar.";
    else
        cout<<"\n\nYou have "<<dol<<" dollars.";

    total = p+(n*5)+(dim*10)+(q*25)+(h*50)+(dol*100);
    dollars=total/100.0;
    cout<<"\n\nThe value of all your coins is "<<total<<" cents.";
    cout<<"\nThe value of all your coins is "<<dollars<<" dollars.";
    return 0;
}
