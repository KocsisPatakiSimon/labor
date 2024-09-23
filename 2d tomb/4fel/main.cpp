#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int j, i, n, a[100][100], folott=0,alatt=0;

    ifstream in("input.txt");
    in>>n;


    for(i=0; i<n;i++){
        for(j=0;j<n;j++){
            in>>a[i][j];
        }
    }
    in.close();

    for(i=0; i<n;i++){
        for(j=0;j<n;j++){
           cout<<a[i][j]<<" ";
        } cout<<endl;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if( i+j < n-1){
                folott = folott + a[i][j];
            }
            if( i + j > n-1){
                alatt = alatt+ a[i][j];
            }
        }
    }
    cout<<alatt<<" "<<folott;
    return 0;
}
