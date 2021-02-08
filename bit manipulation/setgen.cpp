#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int size=1<<n;
    for(int i=0;i<=size;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&1<<j)
            {
                cout<<a[j]<<"\t";
            }
        }
        cout<<"\n";
    }


    return 0;
}