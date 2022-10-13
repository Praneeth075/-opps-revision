#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n,i=1,s=0;
    cout <<"Enter n:";
    cin >> n;
    do
    {
        s=s+i;
        i++;
    }while (i<=n);
    cout <<"Sum = "<<s;
    getch();
    return 0;
}
