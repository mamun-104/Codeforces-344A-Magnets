#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int p,i, group=0,flag_last_digit=0;
    for(i=0;i<n;i++)
    {
        cin>>p;
        if(i==0)
        {
            if(p%2==0){group++; flag_last_digit=0;}
            else {group++; flag_last_digit=1;}
        }
        // Here, this two conditions are enough,,,, only difference is needed to be calculated.
        if(p%2==0 && flag_last_digit==1){group++; flag_last_digit=0;}
        if(p%2==1 && flag_last_digit==0){group++; flag_last_digit=1;}
    }

    cout<<group<<endl;






    return 0;
}

