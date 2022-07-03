#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	int ctr=0,num=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        ctr++;
	    }else{
	        num++;
	    }
	}
	if(ctr>num){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
	return 0;
}
