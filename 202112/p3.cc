#include <iostream>
#include <string>
using namespace std;

int N, K;
string a[50];

int dfs(int x, int y, int k,int dir){

    if (x>=N || y>=N || a[x][y] == 'H')
    return 0;
    
//    cout << "path: " << x << "," << y << ": " << k << ", " << dir << endl;
    if (x==N-1&&y==N-1) {
        return 1;
    }

    int ret=0;
    if (dir==0){
        ret+=dfs (x,y+1,k,0);
        if (k<K){
            ret+=dfs (x+1,y,k+1,1);
        }
    }
    else{
        if (k<K){
            ret+=dfs (x,y+1,k+1,0);
        }
        ret+=dfs (x+1,y,k,1);
    }
    return ret; 
}
int main (void){
    int T;
    cin>>T;

    for(int t=1;t<=T;t++){
        cin>>N>>K;
        for(int i=0; i<N;i++) {
            cin>>a[i];
  //          cout<<"a["<<i<<"] = " << a[i] << endl;
        }
        int ans=0;
        ans = dfs(0,1,0,0);
        ans+=dfs(1,0,0,1);
        cout<<ans<<endl;
    }
}
