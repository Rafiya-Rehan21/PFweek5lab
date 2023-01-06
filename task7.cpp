#include <iostream>
using namespace std;
int time(int hours , int min);
main()
{
    int hours;
    int min;
    int result;
    cout << "Enter hours in 24 hr format:";
    cin >> hours;
    cout << "Enter minutes:";
    cin >> min;
    result = time(hours,min);
   

}
int time(int hours, int min)
{
    int min15;
    int newHours;
    int result;
    cout <<  "current time is:" << hours << "::" << min << endl;
    min15 = min + 15;
   
    if(min15 > 59)
    {
        
        hours = hours + 01;
        min15 = min15-60;
    }
    if(hours > 23)
    {
        hours = hours-24;;
    }
     cout << hours << "::" << min15 << endl;
    
     
    return result;
  
}