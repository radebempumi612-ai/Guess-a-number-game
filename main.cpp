#include <iostream>

using namespace std;

int tries=10;
double number;

void  PasswordGen()
{
    cout<<"Enter any odd number from 1 - 70"<<endl;
    cin>> number;

    if( number == 31)
    {
        cout<<"You got it "<<endl;
        tries = 0;
    }
    else if(number < 31)
    {

        cout<<"Too low. Try again"<<endl;
        tries--;
        cout<<"You have "<<tries<<" tries left"<<endl;
    }
    else if(number > 31)
    {

        cout<<"Too high. Try again"<<endl;
        tries--;
        cout<<"You have "<<tries<<" tries left"<<endl;
    }
    else
    {
        cout<<"Game over. Out of tries!!"<<endl;
        tries = 0;
    }
}

int main()
{
    do
    {
        PasswordGen();
    }
    while(tries!=0);
}
