
//10672946

#include <iostream>

using namespace std;

int main()

{


int i;
int n;
int j=0;

cout<<"Please input a value(+ive): ";
cin>>n;

if(n==1){
    cout<<"The value you entered is not a prime number"<<endl;
    }
else{
    for(i=2; i<=n/2; i++)
    if(n%i==0){
        j++;
    }
if(j>=1){
    cout<<"The value you entered is not a prime number.";
}
else { cout<<"The value you entered is a prime number.";
}

}
return 0;
}

