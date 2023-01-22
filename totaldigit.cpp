#include<iostream>
using namespace std;
main()
{
    
    int num;
    cout<<"enter no.";
    cin>>num;
    int count=0;
    while(num>0)
    {
        count=count+1;
        num=num/10;       
    }
    cout<<count<<endl;
    
}