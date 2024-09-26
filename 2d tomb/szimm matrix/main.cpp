#include <iostream>

using namespace std;

int main()
{
    int a[50][50],n,i,j;
    cout<<"matrix hossza = ";
    cin>>n;
    for(i=0; i<n-1;i++){
            for(j=i+1 ;j<n;j++){
        cin>>a[i][j];
        a[j][i]=a[i][j];
            }
    }

    for(i=0 ; i<n;i++){
        for(j=0;j<n;j++){
            if( i == j){
                a[i][j]=1;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
