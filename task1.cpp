#include <iostream>
using namespace std;
double vol(float length,float width,float height);
main(){
    double length;
    double width;
    double height;
    double volume;
    string answerin;
    double result;
   volume = vol(length,width,height);
}
double vol(float length,float width,float height)
{
double volume;
double result;
string answerin;
 cout <<"enter length:";
 cin >> length;
 cout <<"enter width:";
 cin >> width;
 cout <<"enter height:";
 cin >> height;
 cout <<"answer in:";
 cin >> answerin;
if(answerin == "cubicm")
{
volume = (length*width*height)/3;
cout <<"in cubic meter answer is:" << volume;
}
if(answerin == "cubickm")
{
volume =(length*width*height)/3000000000;
cout <<"in cubic km answer is:" << volume;
}
if(answerin == "cubiccm")
{
    volume = length*width*height*3000000;
    cout <<"in cubic cm answer is:" << volume;
}
if(answerin == "cubicmm")
{
    volume = length*width*height*3000000000;
    cout <<"in cubic  mm answer is:"  << volume;
}
return result;
}

