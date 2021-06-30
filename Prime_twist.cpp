#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{  int c=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
     {
       c=c+1;
     }
  }
  if(c==2)
  {
    cout<<"Prime";
  }
  else
    cout<<"Not Prime";
   
}

int main()
{
  int n;
  cin>>n;
  if(n>0)
  {
    prime(n);
  }
  else
   cout<<"n is negative";
}