#include <iostream>

using namespace std;

int main(int argv, char argc)
{
    int n;
    cout<<"input your mark\n";
    cin>>n;
    if(n>=80){
        cout<<"A";
}
    else if(n>=75&&n<=79){
        cout<<"B+";

    }
    else if(n>=70&&n<=74){
        cout<<"B";}

    else if(n>=65&&n<=69){
        cout<<"C+";}

    else if(n>=60&&n<=64){
        cout<<"C";}

    else if(n>=55&&n<=59){
        cout<<"D+";}

    else if(n>=50&&n<=54){
        cout<<"D";}

    else if(n>=45&&n<=49){
        cout<<"E";}

    else if(n>=0&&n<=44){
        cout<<"F";}
    return 0;
}
