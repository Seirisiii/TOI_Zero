#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n<0)cout<<"Error : Please input positive number";
    else if(n==1)cout<<"I";
    else if(n==2)cout<<"II";
    else if(n==3)cout<<"III";
    else if(n==4)cout<<"IV";
    else if(n==5)cout<<"V";
    else if(n==6)cout<<"VI";
    else if(n==7)cout<<"VII";
    else if(n==8)cout<<"VIII";
    else if(n==9)cout<<"IX";
    else cout<<"Error : Out of range";
    return 0;
}