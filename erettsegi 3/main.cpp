#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m,sor,oszlop,a[20][20];

    cin>>n;
    cin>>m;
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<m;oszlop++){
            cin>>a[sor][oszlop];
        }
    }
    cout<<endl;
    for(sor=1;sor<n;sor+=2){
        int min =a[sor][0];
        for(oszlop=0;oszlop<m;oszlop++){
            if(a[sor][oszlop] < min){min=a[sor][oszlop];}
        }
        for(oszlop= 0; oszlop<m;oszlop++){
            if(a[sor-1][oszlop] > min-1){a[sor-1][oszlop]=min-1;}
        }
    }
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<m;oszlop++){
            cout<<a[sor][oszlop]<<" ";
        }cout<<endl;
    }


    return 0;
}
