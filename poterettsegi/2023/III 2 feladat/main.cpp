#include <iostream>

using namespace std;

int main()
{
    int a[40][40],n,m,sor,oszlop,S=0,maxim=-999;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<m;oszlop++){
            cin>>a[sor][oszlop];
        }
    }
    for(sor=0;sor<n-1;sor++){
        for(oszlop=0;oszlop<m-1;oszlop++){
            S=a[sor][oszlop]+a[sor][oszlop+1]+a[sor+1][oszlop]+a[sor+1][oszlop+1];
            if(S > maxim){
                maxim=S;
            }
        }
    }

    cout<<maxim;
    return 0;
}
