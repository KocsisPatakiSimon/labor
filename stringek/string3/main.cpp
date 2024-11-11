#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo;
    int n=0;
    cin>>szo;
    for(char c: szo){
        if(c== 'a'){
            n++;
        }
    }
    cout<<"a szoban "<<n<<" kicsi a betu van"<<endl;
    return 0;
}
