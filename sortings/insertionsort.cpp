#include<iostream>
#include<algorithm>
using namespace std;

void inssort(int a[],int n)
{
    
     for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
cout<<"\n";
for (int  i = 0; i < n; i++)
{
                        for(int j=n-1;j>i;j--)
                        {
                                        if(a[j]<a[j-1])
                                        {
                                            swap(a[j],a[j-1]);

                                        }

                        }

}
 
 for(int i=0;i<5;i++)
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
   
inssort(a,5);

    return 0;
}