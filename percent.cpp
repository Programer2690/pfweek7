#include <iostream>
using namespace std;
void printper(int num);
main()
{
    int num;
    cout << "enter no.: ";
    cin >> num;

    printper(num);
}
void printper(int num)
{
    int count;
    int num2;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for (count = 1; count <= num; count++)
    {

        cout << "enter number" << endl;
        cin >> num2;
        cout << endl;

        if (num2 < 200)
        {
            p1 = p1 + 1;
        }
        else if (num2 >= 200 && num2 < 399)
        {
            p2 = p2 + 1;
        }

        else if (num2 >= 400 && num2 < 599)
        {
            p3 = p3 + 1;
        }
        else if (num2 >= 600 && num2 < 799)
        {
            p4 = p4 + 1;
        }
        else
        {
            p5 = p5 + 1;
        }
    }
        float per1, per2, per3, per4, per5;
        per1 = (p1 / num) * 100;
        per2 = (p2 / num) * 100;
        per3 = (p3 / num) * 100;
        per4 = (p4 / num) * 100;
        per5 = (p5 / num) * 100;
        cout << per1 << endl
             << per2 << endl
             << per3 << endl
             << per4 << endl
             << per5 << endl;
}
