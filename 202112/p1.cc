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
    
    for(int i=0;i<N;i++){
    //cout<<"l"<<l<<endl;
        int g=0,h=0;
        for(int j=i;j<N;j++){
            //cout<<"i="<<i<<" , " <<(i+l)<<endl;
            if (a[j]=='G')g++;
            else h++;

            if ((g+h>=3) && (g==1 || h==1))
            ans++;
            if (g>1&&h>1) break;
        }

    }

    cout<<ans<<endl;

}
