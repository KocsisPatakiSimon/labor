#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;

    cin>>s1;
    cin>>s2;
    int n=0;
    size_t found= s1.find(s2);
    if(found != string::npos){
        cout<<found;
    }else{cout<<"nincs benne";}
    return 0;
}
