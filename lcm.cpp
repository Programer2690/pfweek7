#include <iostream>
using namespace std;
int calculategcd(int num1, int num2);
int calculatelcm(int num1, int num2,int gcd);

main()
{
    int num1 =0 , num2 = 0,gcd = 0,LCM = 0;
    cout << "enter first number:";
    cin >> num1;
    cout << "enter second number:";
    cin >> num2;
    // gcd=calculategcd(num1,num2);

    gcd = calculategcd(num1,num2);
    cout<<"GCD is: "<<gcd<<endl;
    LCM=calculatelcm(num1,num2,gcd);
    cout<<"LCM is: "<<LCM;
}

    int calculategcd(int num1, int num2)
    {
        int factor=0;
       
            for (int count = 1; count <= num1; count = count + 1)
            {
                if (num1 % count==0 && num2%count==0)
                {
                    factor=count;
                }
            }



            return factor;
  /*      
        else
        {
            for (int count = 1; count <= num2; count = count + 1)
            {
                if (num1 % count == 0 && num2 % count == 0)
                {
                    factor=count;
                }
            }
        }*/
    }
    int calculatelcm(int num1, int num2,int gcd)
    {
        int lcm=(num1*num2)/gcd;
        return lcm;
    }
