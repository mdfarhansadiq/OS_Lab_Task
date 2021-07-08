///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a[1013],b,c,d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa[3013],bbb,ccc,ddd;
    string spc,in,store;

    cin>>a[0];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sum = 0;

    for(i=0;i<n;i++)
    {
        sum += abs(a[i] - a[i+1]);
    }
    cout<<sum<<endl;


    return;
}

int main()
{
    Ok();

    return 0;
}
