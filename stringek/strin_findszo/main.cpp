#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo="az almafa iden sok almat termett, amibol almalevet keszitettunk";
    string keres="alma";
    size_t found = szo.find(keres);
    int counter=0;
    while(found!=string::npos){
        counter++;
        found=szo.find(keres,found+1);
    }

    cout<<counter;

    return 0;
}
