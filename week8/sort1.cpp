#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    string s_in="";
    cin>>s_in;
    int i_len=s_in.length();
    char ca_Alpbet[26]={};
    for(int fo_a=0;fo_a<i_len;fo_a++){
        int i_ind=int(s_in[fo_a]-'a');
        ca_Alpbet[i_ind]++;
    }
    sort(ca_Alpbet,ca_Alpbet+i_len);
    for(int fo_a=0;fo_a<i_len;fo_a++){
        cout<<ia_Alpbet[fo_a];
    }
    return 0;
}
