#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str,str2;
   int pos;
   cin>>str;
   cin>>str2;
   cout<<"pozicio ";cin>>pos;
   str.insert(pos,str2);
   cout<<str;
    return 0;
}
