#include <iostream>
#include <string>
using namespace std;

int main (void){

    int N;
    string a;
    cin >> N >> a;
    //cout<< N <<endl;
    //cout<<"a: " << a << endl;
    int ans=0;
    
    for(int l=3;l<=N;l++){
    //cout<<"l"<<l<<endl;
        for(int i=0;i+l<=N;i++){
            //cout<<"i="<<i<<" , " <<(i+l)<<endl;
            int g=0,h=0;

            for(int j=i;j<i+l;j++){
                if (a[j]=='G')g++;
                else h++;
            }

            if (g==1 || h==1)
            ans++;
        }

    }

    cout<<ans<<endl;

}
