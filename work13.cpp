#include <iostream>
#include <windows.h>
using namespace std;
void oddeven(int modolus);
main()
{
    int num;
    int modolus;
    cout <<"enter a no:";
    cin >> num;
    modolus = (num/10000)%10+(num/1000)%10+(num/100)%10+(num/10)%10+num%10;
    oddeven(modolus);
}
void oddeven(int modolus)
{
if(modolus%2 == 0)
{
    cout <<"evenish";
}
if(modolus%2 == 1)
{
    cout <<"oddish";
}
}