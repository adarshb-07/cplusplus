//Fact of 2 to 7
#include<iostream>

using namespace std;
int main()
{
    int fact=1;
        cout<<"Factorial of numbers 2 to 7\n\n";
        
        for(int i=2;i<=7;i++)
        {
            for(int j=i;j>=1;j--)
            {
                fact*=j;
            }
        cout<<"Factorial of "<<i<<" is: "<<fact<<endl;
        fact=1;
        }
}
