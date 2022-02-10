#include<iostream>
using namespace std;
int main()
{
int a,age;
cout<<"\nEnter your age :";
cin>>age;
if(age>=18)
a=1;
else if(13<=age<18)
a=2;
else
a=3;
switch(a)
{
case 1:
cout<<" You are eligible to vote";
break;
case 2:
cout<<"You are not eligible to vote,but eligible to vote for next elections.";
break;
case 3:
cout<<"You are not eligible to vote";
}
}
