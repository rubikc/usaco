#include <iostream>
#include <string>
using namespace std;
string t="AMC8";
 string a[5] = {" 8C8 ","8CMC8","CMAMC","8CMC8"," 8C8 "};     


int dfs(int x, int y, int i){

    if (x<0 || x>=5 || y<0 || y>=5 || a[x][y] != t[i])
    return 0;

    if (i==t.size()-1) {
        if (a[x][y]==t[i])
        return 1;
        else return 0;
    }

    int ret=0;
    ret+=dfs(x-1,y,i+1);
    ret+=dfs(x+1,y,i+1);
    ret+=dfs(x,y-1,i+1);
    ret+=dfs(x,y+1,i+1);
    return ret; 
}
int main (void){

    int N;
    for(int i=0; i<5;i++) cout<<"a["<<i<<"] = " << a[i] << endl;
    int ans=0;

    ans = dfs(2,2,0);
    cout<<ans<<endl;

}
