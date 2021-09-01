#include <iostream>

using namespace std;
int mult(int a,int b)
{
    if(b==0)
        return 0;
    int chota=mult(a,b-1);
    int bda=a+chota;
    return bda;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<mult(a,b);
    cout<<endl;
    return 0;
}
