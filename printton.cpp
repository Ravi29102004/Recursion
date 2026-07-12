#include<iostream>

using namespace std;

void print(int num, int n)
{
     if (num==n)
     {
         cout<<num<<endl;
         return;

     }
     cout<<num<<endl;
     print(num+1,n);
 }

void print1(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    print1(n-1);
    cout<<n<<endl;
}

int main()
{
    //print 1 to N
    int n;
    cin>>n;
    print(1,n);
    
    print1(n);
}