#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v{10,5,4,3,2,1};
  rotate(v.begin(),v.begin()+3,v.end());
for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
}
}
rotate()
