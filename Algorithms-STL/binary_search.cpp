#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int arr[]={4,5,3,2,1};//unsorted array !
  int n=sizeof(arr)/sizeof(int);
  
  int key=3;
  cin>>key;

    bool present=binary_search(arr,arr+n,key);
    if(present){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}
