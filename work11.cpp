#include <iostream>
using namespace std;
char alphabet(char alpha);
main()
{
    char alpha;
    string result;
    alphabet(alpha);
    return 0;
}
char alphabet(char alpha)
{
    string result;
    cout <<"enter alphabet:";
    cin >> alpha;
    if(alpha == 'a')
    {
        cout <<"small case";
    }
    if(alpha == 'A')
    {
        cout <<"capital case";
    }
    return result;
}

