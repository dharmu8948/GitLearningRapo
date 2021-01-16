#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,i,count,j,k;
   cin>>t;
    cin.ignore();
   while(t--)
   {
      string str;
      getline(cin,str);
      //cin>>str;
      count=0;
      for(i=0;i<str.length();i++)
      {
          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
             {
               cout<<str[i];
               count++;
             }
          else if(str[i]==' ')
              cout<<" ";
      }

            if(count==0)
            cout<<"NO VOWEL";

      cout<<endl;
   }
}

