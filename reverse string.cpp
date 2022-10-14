#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char a[]={'a','b','c','d','e','f'};
    int len=sizeof(a);
    for(int i=0;i<len/2;i++)
    {
        int temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;

    }
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<endl;
    }

        return 0;
}

