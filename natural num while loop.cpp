#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter number:" << endl;
    cin >> n;
    cout << endl;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum N no. is " << sum << endl;
    return 0;
}
