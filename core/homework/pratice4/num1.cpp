#include <iostream>
using namespace std;

class Time
{
private:
	  int hours, minutes, seconds;
public:
	  void get_time()
	  {
	     cin>>hours>>minutes>>seconds;
	  }
	  void display_time()
	  {
	    cout<<hours<<':'<<minutes<<':'<<seconds<<endl;
	  }
	  void add_time(Time & t1, Time & t2)
	  {
	    hours=t1.hours+t2.hours;
	    minutes=t1.minutes+t2.minutes;
	    seconds=t1.seconds+t2.seconds;
	    if(seconds>=60)
	    {
	       seconds-=60;
	       minutes++;
	    }
	    if(minutes>=60)
	    {
	       minutes-=60;
	       hours++;
	    }
	  }
};

int main()
{
	   Time one, two, three;
	   cout<<"\nEnter the first time(hours minutes seconds):";
	   one.get_time();
	   cout<<"\nEnter the second time(hours minutes seconds):";
	   two.get_time();
	   three.add_time(one,two);
	   cout<<"the result is:"<<endl;
	   three.display_time();
}
