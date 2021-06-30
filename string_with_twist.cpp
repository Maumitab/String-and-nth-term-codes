#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a, b, c;
  cin>>a>>b>>c;
  for(int i=0;i<a.size();i++)
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'|| a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U' )
    {
      a[i]='%';
    }
  }
  for(int j=0;j<b.size();j++)
  {
    if(b[j]=='b'||b[j]=='c'||b[j]=='d'||b[j]=='f'||b[j]=='g'||b[j]=='h'||b[j]=='j'||b[j]=='k'||b[j]=='l'||
         b[j]=='m'||b[j]=='n'||b[j]=='p'||b[j]=='q'||b[j]=='r'||b[j]=='s'||b[j]=='t'||b[j]=='v'||b[j]=='w'||
         b[j]=='x'||b[j]=='y'||b[j]=='z'|| b[j]=='B'||b[j]=='C'||b[j]=='D'||b[j]=='F'||b[j]=='G'||b[j]=='H'||b[j]=='J'||b[j]=='K'||b[j]=='L'||
         b[j]=='M'||b[j]=='N'||b[j]=='P'||b[j]=='Q'||b[j]=='R'||b[j]=='S'||b[j]=='T'||b[j]=='V'||b[j]=='W'||
         b[j]=='X'||b[j]=='Y'||b[j]=='Z')
         {
           b[j]='#';
         }
  }
   
   transform(c.begin(), c.end(), c.begin(), ::toupper);
   cout<<a<<"\n"<<b<<"\n"<<c;
   return 0;
}