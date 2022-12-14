#include<bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string l;
	    for(int i=0;i<n/2;i++){
	        l.push_back(s[i]);
	        
	    }
	   
	    
	    string r;
	    for(int i=n/2;i<n;i++){
	        r.push_back(s[i]);
	    }
	    
	    
	  
	    if(l==r){
	        cout<<"yes"<<endl;
	    }
	    else if(l!=r){
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
