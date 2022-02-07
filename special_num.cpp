#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	int i;
	for(i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}
    // cout<<"test prime "<<n<<endl;
	return true;
}

int main()
{
   int k, q;
   cin>>k>>q;
   vector<int> l;
   vector<int> r;
   int t;
   for(int i=0; i<q; i++){
       cin>>t;
       l.push_back(t);
   }
   cin>>q;
   for(int i=0; i<q; i++){
       cin>>t;
       r.push_back(t);
   }
   
   for(int i=0; i<q; i++){
       int a = l[i];
       int b = r[i];
       vector<int> v;
        for(int j=a; j<=b ; j++){
           if(isPrime(j)){
                int temp=j;
                int rem;
                int sum = 0;
                while(temp>0){
                    rem = temp%10;
                    sum+=rem;
                    temp=temp/10;
                }
                if(sum%k == 0){
                    v.push_back(j);
                }
           }
           
       }
       int pro=1;
       if(!v.empty()){
           for(int m=0; m<v.size(); m++){
                pro=pro*v[i];
           
            }
       }
       
       cout<<pro % 93179<<endl;
   }
   
   return 0;
}