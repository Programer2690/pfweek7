#include <iostream>
using namespace std;
int frequnencycheck(int num, int freq);
main()
{

    int num, freq;
    cout << "enter no.";
    cin >> num;
    cout << "enter frequency";
    cin >> freq;
    cout << frequnencycheck(num, freq);
}
int frequnencycheck(int num, int freq)
{
    int x;
    int count = 0;
    while (num > 0)
    {

        x = num % 10;
        num = num / 10;

        if (x == freq)
        {
            count = count + 1;
        }
    }
    return count;
}