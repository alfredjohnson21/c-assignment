#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct stu{
double average;
int marks;
int age;
string name;
string gender;
string id;
char grade;
}
ns[5];

int main(){

for(int i=0; i<5;i++){
cout<<"Please enter your ID number\t":;
cin>>ns[i].id>>endl;

cout<<"Please enter your name\t";
cin>>ns[i].name>>endl;

cout<<"Please enter your age\t";
cin>>ns[i].age>>endl;

cout<<"Please enter your gender\t";
cin>>ns[i].gender>>endl;

cout<<"Please enter your marks for C++\t";
cin>>ns[i].marks>>endl;

if(ns[i].marks<=100 && ns[i].marks>=80){
ns[i].grade='A';
}

else if(ns[i].marks<=79 && ns[i].marks>=70){
ns[i].grade='B';
}

else if(ns[i].marks<=69 && ns[i].marks>=60){
ns[i].grade='C';
}

else if(ns[i].marks<=59 && ns[i].marks>=50){
ns[i].grade='D';
}

else if(ns[i].marks<=49 && ns[i].marks>=40){
ns[i].grade='E';
}

else if(ns[i].marks<40){
ns[i].grade='F';

}



}

cout<<endl<<endl<<endl<<endl<<endl;

cout<<"STUDENT INFOMATION:"<<endl;

for (int i=0; i<5; i++)
{
cout<<"students number"<<i+1<<endl;
cout<<"Student ID NUMBER:\t"<<ns[i].id<<endl;
cout<<"Student Name:\t"<<ns[i].name<<endl;
cout<<"Gender:\t "<<ns[i].gender<<endl;
cout<<"Marks'\t"<<ns[i].marks<<endl;
cout<<"Grade:\t"<<<<ns[i].grade<<endl;
}













return0;

}
