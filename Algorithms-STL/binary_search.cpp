#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int arr[]={20,30,40,40,40,60,100};//sorted array !
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
    //lower_bound(s,e,key)
    int* lb = lower_bound(arr,arr+n,40);//gives address of first bucket >=key
    cout<<(it-arr)<<endl;
    
    int* ub = upper_bound(arr,arr+n,40);//gives address of first bucket >key
    cout<<(it-arr)<<endl;
    
    cout<<"Occ freq = "<<ub-lb<<endl;
  
    if(ub-lb==0){
      cout<<"element not present"<<endl;
    }
}
