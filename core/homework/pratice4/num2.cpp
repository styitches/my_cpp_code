#include<iostream>
using namespace std;
class Date {
       public:
          Date(){};
          int date(int year,int month,int day);
          ~Date(){};
          int &GetYear(){return year;}
          int &GetMonth(){return month;}
          int &GetDay(){return day;}
        private:
          int year=2000;
          int month=12;
          int day=31;
          static bool IsLeapyear;//是否闰年   //静态变量 存放在全局区
      };
bool Date::IsLeapyear=true;
int Date::date(int year,int month,int day)
{
    (*this).year=year;
    (*this).month=month;
    (*this).day=day;
}

int main()
{
  int year,month,day;
  cin>>year>>month>>day;
  Date mydate;
  mydate.date(year, month, day);
  int  &myyear=mydate.GetYear();
int  &mymonth=mydate.GetMonth();
int  &myday=mydate.GetDay();
  cout<<myyear<<endl<<mymonth<<endl<<myday<<endl;
myyear=8888;
cout<< mydate.GetYear();
}
