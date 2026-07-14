#include<iostream>
using namespace std;


int subset(int arr[], int index, int n, int sum)
{
    //base case
    if(index==n)
    {
        if(sum==0)
        return 1;
        else 
        return 0;
    }
    //number of subset problem
    return subset(arr,index+1,n,sum)+subset(arr,index+1,n,sum-arr[index]);
}

int main()
{
    int arr[]={2,5,6,1};
    int sum=8;
    cout<<subset(arr,0,4,sum)<<endl;
}