#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int height[],int n,int k)
{
    int i,max,jump;
    max=height[0];
    for(i=1;i<n;i++)
    {
        if(height[i]>max)
        {
            max=height[i];
        }
    }
    if(k>=max)
    {
        jump=0;
    }
    if(k<max) 
    {
        jump=max-k;
    }
    return jump;
}

int main()
{
    int i,n,k,jump;
    cin>>n>>k;
    int height[n];
    for(i=0;i<n;i++)
    {
        cin>>height[i];
    }
    jump=hurdleRace(height,n,k);
    cout<<jump<<endl;
    return 0;
}
