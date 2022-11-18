#include <iostream>

using namespace std;

int main()
{
    int i,k,n;
    cin>>n>>k;
    for(i=0;i<k;i++){
    if(n%10!=0 ){
            n=n-1;
       }
    else{
        n=n/10;
    }
    }
    cout << n << endl;
    return 0;
}
