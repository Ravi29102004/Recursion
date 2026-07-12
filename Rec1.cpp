#include<iostream>
using namespace std;

//Recursive Approach
void fun3(int n)
{
    //Base Case
    if(n==0)
    {
        cout<<"Happy Birthday\n";
        return ;
    }
    cout<<n<<" days left birthday\n";
    fun3(n-1);
}

int main()
{
    fun3(5);
}
