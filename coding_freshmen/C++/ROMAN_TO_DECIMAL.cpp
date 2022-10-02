#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = s.length();
    int ans = 0;
    for(int i=0;i<l;i++){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    ans+=4;
                    i++;
                    continue;
                }
                else if(s[i+1]=='X'){
                    ans+=9;
                    i++;
                    continue;
                }
                else ans+=1;
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    ans+=40;
                    i++;
                    continue;
                }
                else if(s[i+1]=='C'){
                    ans+=90;
                    i++;
                    continue;
                }
                else ans+=10;
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    ans+=400;
                    i++;
                    continue;
                }
                else if(s[i+1]=='M'){
                    ans+=900;
                    i++;
                    continue;
                }
                else ans+=100;
            }
            else if(s[i]=='V') ans+=5;
            else if(s[i]=='L') ans+=50;
            else if(s[i]=='D') ans+=500;
            else if(s[i]=='M') ans+=1000;
        }
    cout<<ans;
}
