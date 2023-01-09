#include <iostream>
#include <windows.h>
using namespace std;
void plus15min(int hour, int min);
main()
{
    int hour;
    int min;
    cout << "enter hours:";
    cin >> hour;
    cout << "enter min:";
    cin >> min;
    plus15min( hour,min);
}
void plus15min(int hour, int min)
{
    if (min > 59)
    {
        hour = hour + 1;
        min = min - 59;
    }
    if(min < 59)
    {
    min = min + 15;
    min = min % 60;
    cout << hour;
    cout << min;
    
    }
}
