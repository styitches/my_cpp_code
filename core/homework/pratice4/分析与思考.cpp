#include<iostream>
using namespace std;
class Time
{
private:
	  int hours, minutes, seconds;
public:
Time(int hours, int minutes, int seconds){
    cin >> hours >> minutes >> seconds;
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
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
            int temp = seconds / 60;
            seconds -= (temp * 60);
            minutes += temp;
        }
	    if(minutes>=60)
	    {
            int temp = minutes / 60;
            hours -= (temp * 60);
            hours += temp;
        }
	  }
};

int main()
{
    int hours, minutes, seconds;
    cout << "\nEnter the first time(hours minutes seconds):";
    Time one(hours, minutes, seconds);
    cout << "\nEnter the second time(hours minutes seconds):";
    Time two(hours, minutes, seconds);
    Time three(0, 0, 0);
    three.add_time(one, two);
    cout << "the result is:" << endl;
    three.display_time();
}
