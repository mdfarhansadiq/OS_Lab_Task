///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a[313],b,c,d,e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,store;

    memset(a,-1,sizeof(a));
    cin>>b;
    cin>>n;
    j = 0;
    cnt_1 = flag_1 = flag_2 = 0;
    for(i=1; i<=b; i++)
    {
        cin>>c;
        j++;
        a[j] = c;
        for(k=1; k<=b; k++)
            cout<<a[k]<<" ";
        cout<<endl;
    }
    cnt_1 += b;
    j = 1;
    for(i=b+1; i<=n; i++)
    {
        cin>>c;
        flag_1 = 0;
        for(k=1; k<=b; k++)
        {
            if(a[k]==c)
            {
                flag_1 = 1;
                break;
            }
        }
        if(flag_1)
        {
            flag_2 = 0;
        }
        else
        {
            flag_2 = 1;
            a[j] = c;
            j++;
            cnt_1++;
        }
        if(j>b)
        {
            j = 1;
        }
        if(flag_2)
        {
            for(k=1; k<=b; k++)
                cout<<a[k]<<" ";
            cout<<endl;
        }
        else
        {
            for(k=1; k<=b; k++)
                cout<<"-";
            cout<<endl;
        }
    }
    cout<<cnt_1<<endl;

    return;
}

int main()
{
    Ok();

    return 0;
}

