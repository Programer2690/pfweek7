#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"enter no.: ";
    cin>>num;

    int previous=0,current=1;
    int next;
    for(int count=0;count<num-2;count++)
    {
        next=previous+current;
        cout<<","<<next;
        previous=current;
        current=next;
    }
}
