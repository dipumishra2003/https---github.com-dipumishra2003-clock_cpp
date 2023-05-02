//clock by Dipu Mishra (IT)
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<unistd.h>
using namespace std;

int main()
{
    int h,m,s;
    cout<<"Enter current time in hh : mm : ss "<<endl;
    cin>>h>>m>>s;
    while (true)
    {
        system("cls");
        cout<<"\t***********"<<endl;
        cout<<"\t"<<h<<" : "<<m<<" : "<<s<<endl;
        cout<<"\t***********"<<endl;
        s++;
        if(s==60)
        {
            m++;
            s=0;
            if(m==60)
            {
                h++;
                m=0;
                if(h==24)
                {
                    h=0;
                }
            }
            
        }
        Sleep(1000);
    }
    

    return 0;
}
