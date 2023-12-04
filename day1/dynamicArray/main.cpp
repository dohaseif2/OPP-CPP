#include <iostream>

using namespace std;

int main()
{
    int size ;
    cout <<"enter size";
    cin >>size;

    int *ptr = new int[size];
    for(int i =0;i<size;i++){
        cout<<"enter number"<< i+1<<endl;
        cin>>ptr[i];
    }
    for(int i =0;i<size ;i++){
        cout<<ptr[i]<<",";
    }
    return 0;
}
