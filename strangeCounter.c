#include <bits/stdc++.h>
#include<iostream>

using namespace std;

// Complete the strangeCounter function below.
long long strangeCounter(long long t) 
{
    long long strt_time=1,end_time=3,val=3,res;
    for(;;)
    {
        if(t<=end_time)
        {
            res=val-(t-strt_time);
            return res;
        } 
        else 
        {
            strt_time+=val;
            val*=2;
            end_time+=val;
        }
    }
}

int main()
{
    long long t;
    cin>>t;
    long long result=strangeCounter(t);
    cout<<result;
    return 0;
}

