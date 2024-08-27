#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<=n;i++)
        a[i]=1;
    a[0] = 0; a[1] = 0;
    for(int i=2; i<=sqrt(n); i++){
        if(a[i] == 1){
            for (int i=i*i; j<=n; j+=i){
                a[j]=0;
            }
        }
    }
    long long int sum =0;
    int c=0;
    for(int 1=2; i<n; i++)
        if (a[i] == 1){
            c++;
            sum+=i;
        }
    cout<< "there are "<<c<<" number of prime numbers upto "<<n<<" and their sum is "<<sum<<;
    return 0;
}
