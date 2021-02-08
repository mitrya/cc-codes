#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)                     //n-1 cause if n-1 goog than n good
    {
        for(int j=0;j<n-1;j++)                 // using j+1 thus for no overflow n-1  
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    

}
int main()
{
int a[5];
for(int i=0;i<5;i++)
{
    cin>>a[i];
}
bubble(a,5);
    return 0;
}