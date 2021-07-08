///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a[113],b[113],c[113],d,e,f,g,h,t,i,j,k,l,m,n,Min,sum,Max;
    double aa,bb,cc,dd,ee,ff,gg;

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cin>>b[i];

    c[0] = 0;
    sum = 0;
    for(i=1;i<=n;i++)
    {
        Min = 9999999;
        for(j=1;j<=n;j++)
        {
            if(Min>b[j])
            {
                Min = b[j];
                d = j;
            }
        }
        sum += a[d];
        c[i] = sum;
        b[d] = 9999999;
        cout<<c[i-1]<<"p"<<d<<" ";
    }
    cout<<c[n]<<endl;

    sum = 0;
    for(i=1;i<n;i++)
        sum += c[i];

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
