#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int ex[50000][3];
		set<int> index;
		for(int j=0;j<n;j++){
			int t,l;
			cin>>t>>l;
			ex[t][0]=l;
			ex[t][1]=0;
			ex[t][2]=1;
			index.insert(t);
			
		}
		for(auto it=index.begin();it!=index.end();it++){
			if(ex[*it][1])
				continue;
			stack<int> tm;
			tm.push(*it);
			ex[*it][1]=true;
			while(!tm.empty()){
				int top=tm.top();
				tm.pop();
					
			}
			cout<<*it<<" "<<endl;
		}	

	}	
}

