#include<iostream>
using namespace std;

int main()
{
    int x,a,b,c,c1,tnt=0,i=0;
    cin>>x;
    while (x--)
    {
        int w1=0;
        tnt=0;
        cin>>a>>b>>c;

        if (a>=0)
        {
            tnt+=a;
            //cout<<"tent after a: "<<tnt<<endl;
        }
        if (b>=0 && (b%3==0))
        {
            tnt+=(b/3);
            //cout<<"tent after b: "<<tnt<<endl;
        }
        else if (b>=0 && (b%3!=0))
        {
            if ((b%3==1) && c>=2)
            {
                b+=2;
                c-=2;
                tnt+=b/3;
               // cout<<"tent after b (b%3=1): "<<tnt<<endl;
            }
            /*else
            {
                w1++;
                cout<<"w (b%3=1): "<<w1<<endl;
            }*/
            else if ((b%3==2) && c>=1)
            {
                b+=1;
                c-=1;
                tnt+=b/3;
               // cout<<"tent after b (b%3=2): "<<tnt<<endl;
            }
            else
            {
                w1++;
                //cout<<"w (b%3=2): "<<w1<<endl;
            }
        }
        if (c>=0)
        {
            tnt+=c/3;
            if (c%3!=0)
                tnt++;
                //cout<<"c: "<<c<<endl;
               // cout<<"tent after c: "<<tnt<<endl;
        }
        if (w1>0)
            cout<<"-1"<<endl;
        else
            cout<<tnt<<endl;
    }
}
