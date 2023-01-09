#include <iostream>
using namespace std;
int number(int n1);
main()
{
    int n1;
    int product;
    int total;
    cout <<"enter a no:";
    cin >> n1;
    product = number(n1);
    return 0;
}
int number(int n1)
{
    int product;
    int total;
    product = n1*5;
    cout <<"product is" << product;
    return total;
}