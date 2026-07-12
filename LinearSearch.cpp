#include<iostream>
using namespace std;

bool linearsearch(int arr[],int x, int index, int n)
{
    if(index==n)
    {
        return 0;
    }
    if(arr[index]==x)
    {
        return 1;
    }
    return linearsearch(arr,x,index+1,n);
}

int main()
{
    int arr[]={2,4,7,3,11,8,12};
    cout<<linearsearch(arr,8,0,7)<<endl;
    
}