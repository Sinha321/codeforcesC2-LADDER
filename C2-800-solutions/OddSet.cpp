#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
	// your code goes here
	vector<int> v;
	int t,s=0,p=0;
	
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[2*n];
	 
	    s=0;
	    for(int j=0;j<2*n;j++)
	    {
	         cin>>a[j];
	        
	        if(a[j]%2 ==0)
	        {
	            s++;
	        }
	    
	    }
	    if(s==n)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
