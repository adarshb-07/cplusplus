//Swap Two numbers
#include <iostream>

using namespace std;
int swap(int*,int*);

int main()
{
    int a,b;
    cout<<"Enter two number to swap  ";
    cin>>a>>b;
    cout<<"\nNumber before swaping: a= "<<a<<" b = "<<b<<endl;
    swap(&a,&b);
    cout<<"Befor Swapping numbers a="<<a<<" b= "<<b;
    return 0;
}

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
