///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a[113],b[113],c,d,e,f,g,h,t,i,j,k,l,m,n;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum,Min,Max;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,store[13];

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sum = 0;
    for(i=1;i<=n;i++)
    {
        Min = 99999;
        for(j=1;j<=n;j++)
        {
            if(Min>a[j])
            {
                Min = a[j];
                d = j;
            }
        }
        sum += Min;
        b[i] = sum;
        if(i==1)
            cout<<"0";
        cout<<"p"<<d<<" "<<sum;
        a[d] = 99999;
    }
    cout<<endl;
    sum = 0;
    for(i=1;i<n;i++)
        sum += b[i];

    aa = n;
    bb = sum/aa;
    cout<<bb<<endl;

    return;
}

int main()
{
    Ok();

    return 0;
}
