    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    bool isprime(ll number){
     
        if(number < 2) return false;
        if(number == 2) return true;
        if(number % 2 == 0) return false;
        for(ll i=3; (i*i)<=number; i+=2){
            if(number % i == 0 ) return false;
        }
        return true;
     
    }
     
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            ll n,m;
            cin>>n>>m;
            for(ll i=n;i<=m;i++){
                if(isprime(i)){
                    cout<<i<<endl;
                }
            }
            cout<<endl;
        }
    } 