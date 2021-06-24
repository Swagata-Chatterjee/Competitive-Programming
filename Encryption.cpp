#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string st;
    string s;
    int len=str.length();
    int i,j=0,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
        {
            str[j++]= str[i];
        }
        else 
        {
            count++;
        }  
    }
    for(i=j;i<len;i++)
    {
        str[i]='\0';
    } 
    int l=len-count;
    double dln=l;
    double r=sqrt(dln);
    int r1=floor(r);
    int r2=ceil(r);
    if(r1!=r2)
    {
        for(i=0;i<=r1;i++)
        {
            for(j=i;j<l;j=j+r2)
            {
                cout<<str[j];
            }
            cout<<" ";
        }
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=i;j<l;j=j+r2)
            {
                cout<<str[j];
            }
            cout<<" ";
        }
    }
    return 0;
}
