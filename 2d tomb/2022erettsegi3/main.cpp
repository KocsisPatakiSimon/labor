#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[10][10],i,j,n,m,S=0,min=999;
    ifstream in("input.txt");
    in>>m;
    in>>n;

    for(i=1;i<m;i++){
        for(j=1;j<n;j++){
            in>>a[i][j];
        }
    }
    for(i=0;i<m+1;i++){
        a[0][i]=10;
        a[m+1][i]=10;
    }
    for(j=0;j<n+1;j++){
        a[j][0]=10;
        a[j][n+1]=10;
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]<a[i+1][j] &&
               a[i][j]<a[i-1][j] &&
               a[i][j]<a[i][j-1] &&
               a[i][j]<a[i][j+1] ){
                int minNeighbour=a[i+1][j];
                if(minNeighbour>a[i-1][j]){
                    minNeighbour=a[i-1][j];
                }
                if(minNeighbour>a[i][j+1]){
                    minNeighbour=a[i][j+1];
                }
                if(minNeighbour>a[i][j-1]){
                    minNeighbour=a[i][j-1];
                }
                S+=minNeighbour-a[i][j];

               }
        }
    }


    cout<<S;
    return 0;
}
