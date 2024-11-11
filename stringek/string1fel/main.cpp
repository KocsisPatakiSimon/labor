#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=0;
    size_t found=s1.find(s2);
    while(found != string::npos){
        s1.replace(n,sz)
        found=s1.find(s1,found+1)
    }
    cout<<s1;
    return 0;
}
