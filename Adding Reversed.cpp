#include<iostream>
using namespace std;
int reverseno(int no){
    int res=0;
    while(no!=0){
        res=res*10+(no%10);
        no/=10;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int sum1=reverseno(n);
        int sum2=reverseno(m);
        int sum=sum1+sum2;
        cout<<reverseno(sum)<<endl;
    }
}