#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="\";\n    cout<<\"#include<bits/stdc++.h>\\nusing namespace std;\\nint main(){\\n    string str=\\\"\";\n    for(char c:str){\n        if(c=='\\n'){cout<<'\\\\'<<'n';}\n        else if(c=='\\\\'){cout<<'\\\\'<<'\\\\';}\n        else if(c=='\\\"'){cout<<'\\\\'<<'\\\"';}\n        else{cout<<c;}\n    }\n    cout<<str;\n}\n";
    cout<<"#include<bits/stdc++.h>\nusing namespace std;\nint main(){\n    string str=\"";
    for(char c:str){
        if(c=='\n'){cout<<'\\'<<'n';}
        else if(c=='\\'){cout<<'\\'<<'\\';}
        else if(c=='\"'){cout<<'\\'<<'\"';}
        else{cout<<c;}
    }
    cout<<str;
}
