#include <iostream>

#include <iomanip>

using namespace std;

class Time
{
private:
int seconds;
int hh,mm, ss;
public:
void getTime(void);
void convert(void);
void display(void);
};
void Time::getTime (void)
{
cout<<"Enter time:" << endl;
cout << "Hours?";
cin >>hh;
cout<<endl;
cout << "Minutes? ";
cin >>mm;
cout<<endl;
cout << "Seconds? ";
cin >>ss;
cout<<endl;
}
void Time::convert(void)
{
seconds = hh*3600+ mm*60+ ss;
}
void Time::display(void)
{
cout << "The time is = " <<  hh <<":" << mm <<":"
<< ss << endl;
cout << "Time in total seconds: " << seconds;
}
int main()
{
Time T; 
T.getTime();
T.convert();
T.display();
}
return 0;
