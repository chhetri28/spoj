#include<bits/stdc++.h>
using namespace std;
const int maxi=600;
int main(){
	string s1,s2;
	while(cin>>s1){
		cin>>s2;
		reverse(s1.begin(),s.end());
		reverse(s1.begin(),s.end());
		int a[maxi];
		memset(a,0,sizeof(a));
		for(int i=0;i<s1.length();i++){
			for(int j=0;j<s2.length();j++){
				a[i+j]+=(s1[i]-'0')*(s2[j]-'0');
			}
		}
		for(int i=0;i<maxi-1;i++){
			a[i+1]+=a[i]/10;
			a[i]%=10;
		}
		int i=maxi-1;
		while(i>0 and a[i]==0)i--;
		for(;i>=0;i--)cout<<a[i];
		cout<<endl;
	}
	return 0;
}