#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,j,n,a[30][30];
    ifstream in("input.txt");
    in>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            in>>a[i][j];
        }
    }
    in.close();
    for(i=0;i<n;i++){
        int max=-999;
        int maxoszlop=-1;
        for(j=0;j<n;j++){
            if(a[i][j] > max){
                max=a[i][j];
                maxoszlop=j;
            }
        }

    }
    cout<<i+1<<":"<<maxoszlop+1<<endl;
    return 0;
}
