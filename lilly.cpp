#include<iostream>
using namespace std;
float calculatemoney(float age,float price,float toy);
main()
{
    float age,price,toy;  
    cout<<"Lilly's age: ";
    cin>>age;
    cout<<"price of washing machine: ";
    cin>>price;
    cout<<"price of each toy: ";
    cin>>toy;
    calculatemoney(age,price,toy);

}
float calculatemoney(float age,float price,float toy)
{
    float toyp=0,have,req,f;
    for(int x=1;x<=age;x=x+2)
    {
        toyp=toyp+toy;
    }
    
    float count=1,usd = 0;
    for(int x=2;x<=age;x=x+2)
    {
        
        usd=usd + (count*10)-1;
        count++;
    }
    
    
    have=toyp+usd;
    if(price<=have)
    {
        f=have-price;
        cout<<"yes!"<<endl<<f;
    }
    else
    {
        f=price-have;
        cout<<"no!"<<endl<<f;
    }
    return f;                       
}   