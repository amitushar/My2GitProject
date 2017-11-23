

#include <iostream>

using namespace std;

int main()
{
    int inputArray[500],n,i;

        cout<<"enter number of elements: ";
        cin>>n;
    for(i=0;i<n;i++){
        cin>>inputArray[i];
    }

    cout<<"ArrayElements: ";

    for(i=0;i<n;i++){
        cout<<inputArray[i]<<" ";

    }



    return 0;

}

