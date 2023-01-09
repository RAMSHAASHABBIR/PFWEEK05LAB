#include <iostream>
#include <windows.h>
using namespace std;
void mode(int mode1,int mode2,int mode3);
main()
{
    int num;
    int mode1;
    int mode2;
    int mode3;
    cout <<"enter a no:";
    cin >> num;
    mode1 = (num/100)%10;
    mode2 = (num/10)%10;
    mode3 = (num/1)%10;
    mode(mode1,mode2,mode3);
}
    void mode(int mode1,int mode2,int mode3)
    {
    if (mode1 == mode3)
    {
        cout << "num is symmetrical" << endl;
        cout << "true";
    }
    if (mode1 != mode3)
    {
        cout << "num is not symmrtrical" << endl;
        cout << "false";
    }
}