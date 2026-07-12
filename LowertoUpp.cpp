#include<iostream>
using namespace std;

void lowerupper(string &str, int index)
{
    if(index==-1)
    {
        return ;
    }
    str[index]='A'+str[index]-'a';
    lowerupper(str,index-1);
}

int main()
{
    string str="ravi";
    lowerupper(str,3);
    cout<<str<<endl;
}