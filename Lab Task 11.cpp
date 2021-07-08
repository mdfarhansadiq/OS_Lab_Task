///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;

void Ok()
{
    long int a,b,c[113],d[113],e,f,g,h,t,i,j,k,l,m,n,Min,Max;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa,bb,cc,dd,ee,ff,gg;
    char aaa[10013],bbb,ccc,ddd;
    string spc,in,store;

    memset(d,-1,sizeof(d));
    cin>>n;
    cin>>a;
    for(i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    for(i=1;i<=a;i++)
    {
        d[i] = c[i];
        for(j=1;j<=a;j++)
            cout<<d[j]<<" ";
        cout<<endl;
    }
    for(i=a+1;i<=n;i++)
    {
        flag_1 = 1;
        for(j=1;j<=a;j++)
        {
            if(d[j]==c[i])
            {
                flag_1 = 0;
                break;
            }
        }
        if(flag_1)
        {
            Max = 0;
            for(j=1;j<=a;j++)
            {
                cnt_1 = 0;
                for(k=i+1;k<=n;k++)
                {
                    cnt_1++;
                    if(c[k]==d[j])
                        break;
                }
                if(cnt_1>Max)
                {
                    Max = cnt_1;
                    l = d[j];
                }
            }
            for(j=1;j<=a;j++)
            {
                if(d[j]==l)
                {
                    d[j] = c[i];
                }
                cout<<d[j]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(j=1;j<=a;j++)
                cout<<"-";
            cout<<endl;
        }
    }

    return;
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    Ok();

    return 0;
}
