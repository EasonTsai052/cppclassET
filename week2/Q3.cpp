#include<iostream>
using namespace std;
int main(){
    int il_map[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            il_map[i][j]=0;
        }
    }
    for(int i=0;i<10;i++){
        int a;
        cin>>a;
        int x;
        int y;
        x=a/10;
        y=a%10;
        il_map[x][y]+=9;
        if(x!=(10-1)){il_map[x+1][y]+=1;}
        if(x!=(10-1)&&y!=(10-1)){il_map[x+1][y+1]+=1;}
        if(y!=(10-1)){il_map[x][y+1]+=1;}
        if(x!=(0)&&y!=(10-1)){il_map[x-1][y+1]+=1;}
        if(x!=(0)){il_map[x-1][y]+=1;}
        if(x!=(0)&&y!=(0)){il_map[x-1][y-1]+=1;}
        if(y!=(0)){il_map[x][y-1]+=1;}
        if(x!=(10-1)&&y!=(0)){il_map[x+1][y-1]+=1;}
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(il_map[i][j]>=9){
                cout<<"* ";
                continue;
            }
            cout<<il_map[i][j]<<" ";
        }
        cout<<'\n'<<endl;
    }
    return 0;
}
