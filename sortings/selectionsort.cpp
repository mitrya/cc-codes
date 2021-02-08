#include<iostream>
using namespace std;
void selsort(int a[],int n)
{
    
for(int i=0;i<n-1;i++)
{
    int min=a[i];
                    for(int j=i+1;j<n;j++)                                  /*5 4 3 2 1
                                                                              0 1 2 3 4 */

                    {
                                             if(a[j]<min)
                                            {
                                                int temp=a[j];
                                                a[j]=min;
                                                min=temp;
                                            }
                                       

                    }
     a[i]=min;

}
                for (int i = 0; i < n; i++)
                {
                cout<<a[i]<<"\t"; 
                }


}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    selsort(a,5);
    return 0;
}