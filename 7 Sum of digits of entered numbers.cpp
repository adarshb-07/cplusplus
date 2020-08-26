//Sum of digits of given number.
#include<iostream>

using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"Enter any integer number ";
    cin>>num;
    
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    cout<<"\n Sum of digits of given integer: "<<sum;
    return 0;
}
