#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<char> a={'1','2','3','4','5','6','7','8','9','0'};
    vector<char> aa={'!','@','#','$','\%','^','&','*','(',')'};
    vector<char> b={'q','w','e','r','t','y','u','i','o','p'};
    vector<char> bb={'Q','W','E','R','T','Y','U','I','O','P'};
    vector<char> c={'a','s','d','f','g','h','j','k','l',';'};
    vector<char> cc={'A','S','D','F','G','H','J','K','L',':'};
    vector<char> d={'z','x','c','v','b','n','m',',','.','/'};
    vector<char> dd={'Z','X','C','V','B','N','M','<','>','\?'};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char x;
        int y;
        cin>>x;
        cin>>y;
        int add_a_x;
        int add_a_y;
        {//字元座標計算
            {//無特殊字元(no shift)
                {
                    vector<char>::iterator add_a=find(a.begin(),a.end(),x);
                    if(add_a!=a.end()){
                        add_a_x=1;
                        add_a_y=distance(a.begin(),add_a);
                    }
                }
                {
                    vector<char>::iterator add_a=find(b.begin(),b.end(),x);
                    if(add_a!=b.end()){
                        add_a_x=2;
                        add_a_y=distance(b.begin(),add_a);
                    }
                }
                {
                    vector<char>::iterator add_a=find(c.begin(),c.end(),x);
                    if(add_a!=c.end()){
                        add_a_x=3;
                        add_a_y=distance(c.begin(),add_a);
                    }
                }
                {
                    vector<char>::iterator add_a=find(d.begin(),d.end(),x);
                    if(add_a!=d.end()){
                        add_a_x=4;
                        add_a_y=distance(d.begin(),add_a);
                    }
                }
            }
            {//特殊字元(shift)
                {
                    vector<char>::iterator add_a=find(aa.begin(),aa.end(),x);
                    if(add_a!=aa.end()){
                        add_a_x=1;
                        add_a_y=distance(aa.begin(),add_a);
                    }
                }
                {
                    vector<char>::iterator add_a=find(bb.begin(),bb.end(),x);
                    if(add_a!=bb.end()){
                        add_a_x=2;
                        add_a_y=distance(bb.begin(),add_a);
                    }
                }
                {
                    vector<char>::iterator add_a=find(cc.begin(),cc.end(),x);
                    if(add_a!=cc.end()){
                        add_a_x=3;
                        add_a_y=distance(cc.begin(),add_a);
                    }
                }
                {
                    vector<char>::iterator add_a=find(dd.begin(),dd.end(),x);
                    if(add_a!=dd.end()){
                        add_a_x=4;
                        add_a_y=distance(dd.begin(),add_a);
                    }
                }
            }
        }
        {//move
            if(y==1||y==2){//上下移動
                if(y==1){
                    if(add_a_x==1){cout<<d[add_a_y]<<endl;}
                    if(add_a_x==2){cout<<a[add_a_y]<<endl;}
                    if(add_a_x==3){cout<<b[add_a_y]<<endl;}
                    if(add_a_x==4){cout<<c[add_a_y]<<endl;}
                }
                if(y==2){
                    if(add_a_x==3){cout<<d[add_a_y]<<endl;}
                    if(add_a_x==4){cout<<a[add_a_y]<<endl;}
                    if(add_a_x==1){cout<<b[add_a_y]<<endl;}
                    if(add_a_x==2){cout<<c[add_a_y]<<endl;}
                }
            }
            if(y==3||y==4){//左右移動
                if(y==3){
                    add_a_y++;
                    add_a_y=(add_a_y>9)? 0:add_a_y;
                    if(add_a_x==1){cout<<a[add_a_y]<<endl;}
                    if(add_a_x==2){cout<<b[add_a_y]<<endl;}
                    if(add_a_x==3){cout<<c[add_a_y]<<endl;}
                    if(add_a_x==4){cout<<d[add_a_y]<<endl;}
                }
                if(y==4){
                    add_a_y--;
                    add_a_y=(add_a_y<0)? 9:add_a_y;
                    if(add_a_x==1){cout<<a[add_a_y]<<endl;}
                    if(add_a_x==2){cout<<b[add_a_y]<<endl;}
                    if(add_a_x==3){cout<<c[add_a_y]<<endl;}
                    if(add_a_x==4){cout<<d[add_a_y]<<endl;}
                }
            }
        }
    }

    return 0;
}
