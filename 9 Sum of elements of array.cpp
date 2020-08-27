#include <iostream>
using namespace std;
int main()
{
    int num,arr[20],sum=0;
    cout<<"Enter how many number you want to add: ";
    cin>>num;
    cout<<"\nNow enter "<<num<<" to find out sum: \n";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<num;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of all elements in array is :"<<sum;
    return 0;
}
