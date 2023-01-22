#include <iostream>
using namespace std;
int digitsum(int num);
main()
{
    int num;
    cout << "enter no.: ";
    cin >> num;
    cout << "sum = " << digitsum(num);
}
int digitsum(int num)
{
    int sum = 0;
    int x;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum = sum + x;
    }
    return sum;
}