#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[30][30],i,j,n;
    ifstream in("input.txt");
    in>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            in>>a[i][j];
        }
    }
    for(i=n;i>n/2;i--){
        for(j=0;j<n;j++){
            a[i][j]=a[i-1][j];
        }
    }
        for(j=0;j<n;j++){
            a[n/2][j]=4;
        }

    for(i=0;i<n+1;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j];
        }cout<<endl;
    }
    return 0;
}
