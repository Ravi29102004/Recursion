#include<iostream>
using namespace std;

//Sum of N natural number
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    if (n<0)
    {
        cout<<"Not Summing of natural number\n";
        return 0;
    }
    cout<<sum(n);

}