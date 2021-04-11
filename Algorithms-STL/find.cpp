#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int arr[]={4,5,3,2,1};//unsorted array !
  int n=sizeof(arr)/sizeof(int);
  
  int key=3;
  cin>>key;
  
  auto it=find(arr,arr+n,key);
  int index=it-arr;
  if(index==n){
    cout<<key<<"not present"<<endl;
  }
  else{
    cout<<key<<"present at "<<index<<endl;
  }
}
