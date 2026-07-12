#include<iostream>
using namespace std;

void merge(int arr[],int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int left=start, right=mid+1, index=0;
    //element comparing of them it 
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    //left element side out means bacha hua
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++,left++;
    }
    //right element side out means bacha hua 
    while(right<=end)
    {
        temp[index]=arr[right];
        index++,right++;
    }

    //put these value in array
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }

}

void mergesort(int arr[], int start, int end)
{
    //base case
    if(start==end)
    {
        return ;
    }
    int mid=start+(end-start)/2;
    //left side
    mergesort(arr,start,mid);
    //right side
    mergesort(arr,mid+1,end);
    //then merge it
    merge(arr,start,mid,end);
}


int main()
{
    int arr[]={6,3,1,2,8,9,7,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}