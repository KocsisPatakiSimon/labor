#include <iostream>

using namespace std;

int main()
{
    //matrix beolvasas filebol
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
