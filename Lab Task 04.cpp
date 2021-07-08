///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a[113],b[113],c[113],d,e,f,g,h,t,i,j,k,l,m,n,Min,Max,sum,cnt_1;
    double aa,bb,cc,dd,ee,ff,gg;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    cin>>m;
    memset(c,0,sizeof(c));
    sum = 0;
    cout<<"0";
    while(1)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]>m)
            {
                c[i] += m;
                a[i] -= m;
                sum += m;
                cout<<"p"<<i<<" "<<sum;
            }
            else if(a[i]!=0 && a[i]<=m)
            {
                sum += a[i];
                c[i] += a[i];
                a[i] = 0;
                cout<<"p"<<i<<" "<<sum;
            }
        }
        cnt_1 = 0;
        for(i=1;i<=n;i++)
        {
            if(b[i]==c[i])
                cnt_1++;
        }
        if(cnt_1==n)
            break;
    }

    return;
}

int main()
{
    Ok();

    return 0;
}
