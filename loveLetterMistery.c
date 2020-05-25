#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int findno(string s,int l)
{
    int i=0,sum=0;
    while(i<l)
    {
        int o=(s[i]-s[l-1]);
        //cout<<"s[i] is "<<s[i]<<" "<<"s[l-1] is "<<s[l-1]<<endl;
        //cout<<"l is "<<l<<endl;
        if(o<0)
            o=o*(-1);
        sum=sum+o;
        i++;
        l--;
        
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int l=s.size();
        int sum=findno(s,l);
        cout<<sum<<endl;
    }

    return 0;
}

