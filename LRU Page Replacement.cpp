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

    memset(c,-1,sizeof(c));
    memset(d,0,sizeof(d));
    cout<<"Enter Number Of Page(s): ";
    cin>>n;
    cout<<"Enter Number Of Block(s): ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>b;
        c[i] = b;
        d[b]++;
        for(j=1;j<=a;j++)
            cout<<c[j]<<" ";
        cout<<endl;
    }
    d[c[1]] += 2;
    d[c[2]] += 1;
    for(i=a+1;i<=n;i++)
    {
        flag_1 = 1;
        cin>>b;
        for(j=1;j<=a;j++)
        {
            if(c[j]==b)
            {
                flag_1 = 0;
                d[b] = 1;
            }
        }
        if(flag_1)
        {
            Max = 0;
            for(j=1;j<=a;j++)
            {
                if(d[c[j]]>Max)
                {
                    Max = d[c[j]];
                    k = j;
                }
            }
            c[k] = b;
            d[c[k]] = 0;
            for(j=1;j<=a;j++)
            {
                d[c[j]]++;
                cout<<c[j]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(j=1;j<=a;j++)
            {
                if(c[j]!=b)
                {
                    d[c[j]]++;
                }
            }
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
