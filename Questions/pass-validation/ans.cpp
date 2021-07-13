#include <iostream>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--){
	    bool n=false,l=false,u=false;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]>='a' && s[i]<='z'){
	            l=true;
	        }
	        else if (s[i]>='A' && s[i]<='Z'){
	            u=true;
	        }
	        else if (s[i]>='0'&&s[i]<='9'){
	            n=true;
	        }
	    }
	    if(n&&l&&u){
	            cout<<"YES"<<endl;;
	     }
	     else{
	         cout<<"NO"<<endl;
	     }
	    
	}
	return 0;
}
