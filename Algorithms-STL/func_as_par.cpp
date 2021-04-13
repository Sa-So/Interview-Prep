bool isCool(int a, int b){
  return a<b;
}
void sor(int a[],int n,bool (&cool)(int a,int b)){
  if(cool(a[j],a[j+1])){
    swap(a[j],a[j+1])
  }
}
sor(arr,arr+n,isCool);
