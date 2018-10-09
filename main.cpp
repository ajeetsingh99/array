#include <iostream>

using namespace std;


int ajeet(const int *start,const int *end);

int main()
{

    int arr[] {0,1,2,3,4,5,6,7,8,9};

    ajeet(arr ,arr+9);
    return 0;
}


int ajeet(const int *start,const int *end)
{
    const int *ptr;

    for(ptr=start ; ptr!=end; ptr++)
    {
        cout<<*ptr<<endl;
    }
}
