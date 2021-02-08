#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nbit[33];
    int size=0;
      while(n>0)
    {
      nbit[size]=n%2;
      n=n/2;
      size++;  
    }
    for (int i = 0; i < size; i++)
    {
      cout<<nbit[size-1-i];
    }
    
    return 0;
}