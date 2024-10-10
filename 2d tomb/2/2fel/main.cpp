#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[10][10],m,n,i,j,oszto;
    ifstream in("input.txt");
    in>>n;
    in>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            in>>a[i][j];
        }
    }
    ofstream out("out1.txt");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]<10){
                out<<"1 ";
            }
            int ujszam=0,temp=a[i][j];
            while(temp>0){
                int szj=temp%10;
                temp/=10;
                ujszam=ujszam*10+szj;
            }
            if(ujszam==a[i][j]){
                out<<"1 ";
                else{out<<"0 ";}
            }
        }

    }
    in.close();
    out.close();
    return 0;
}
