#include<iostream>
using namespace std;


int GD(int n,int k)
{
    if((n>=k)&&((n%k)==0))

        return(k);
    else
        GD(k,(n%k));
//where GD is the greatest common divisor
}

int main()

{
    int n;
    int k;
    int d;


    cout<<"Kindly input the first number:\t";

    cin>>n;

    cout<<"Kindly input the second number:\t";

    cin>>k;

    result=GD(n,k);

    cout<<"The greatest common divisor of "<<n<<" and "<<k<<" is "<<d;

    return 0;
}
