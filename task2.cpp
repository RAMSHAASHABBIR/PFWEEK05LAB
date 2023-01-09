#include <iostream>
using namespace std;
float taxcalculator(char type,float price);
main()
{
    char type;
    float price;
    float result;
    float finalprice;
    float taxamount;
   finalprice = taxcalculator(type,price);
}
float taxcalculator(char type,float price)
{
    float taxrate;
    float taxamount;
    float finalprice;
    float result;
    cout <<"enter vehicle code:"; 
    cin >> type;
    cout <<"enter item price:";
    cin >> price;
    if(type == 'M')
    {
        taxamount = price*(6.0/100.0);
        cout <<"tax amount is:" << taxamount << endl;
        finalprice = price + taxamount;
        cout <<"final price is:" << finalprice << endl;
    }
    if(type == 'E')
    {
        taxamount = price*(8.0/100.0);
        cout <<"tax amount is:" << taxamount << endl;
        finalprice = price + taxamount;
        cout <<"final price is:" << finalprice << endl;
    }
    if(type == 'S')
    {
        taxamount = price*(10.0/100.0);
        cout <<"tax amount is:" << taxamount << endl;
        finalprice = price + taxamount;
        cout <<"final price is:" << finalprice << endl;
    }
    if(type == 'V')
    {
         taxamount = price*(12.0/100.0);
        cout <<"tax amount is:" << taxamount << endl;
        finalprice = price + taxamount;
        cout <<"final price is:" << finalprice << endl;
    }
    if(type == 'T')
    {
        taxamount = price*(15.0/100.0);
        cout <<"tax amount is:" << taxamount << endl;
        finalprice = price + taxamount;
        cout <<"final price is:" << finalprice << endl; 
    }
    return result;
}