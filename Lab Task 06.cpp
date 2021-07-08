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

    long int val = sum = 0;

    cout<<a[0]<<" ";
    for(j=1;j<=n;j++)
    {
        Min = 9999999;
        for(i=1; i<=n; i++)
        {
            if(val!=i && a[i]!=-1)
            {
                ans_1 = abs(a[val] - a[i]);
                if(Min>ans_1)
                {
                    Min = ans_1;
                    b = i;
                }
            }
        }
        cout<<a[b]<<" ";
        a[val] = -1;
        sum += Min;
        val = b;
    }
    cout<<endl;
    cout<<sum<<endl;


    return;
}

int main()
{
    Ok();

    return 0;
}
