#include<iostream>
#include<cstring>
#include<cstdlib>
#include"Basic.h"
#include<vector>
using namespace std;
Weiboxct::Weiboxct(string id){
    string st1[100],st2[100],st3[100],s1,s2,s3;
    int k,v,u,q,n;
    ID=id;
    ifstream f1("weibo.txt");
    if(f1.fail()){
        cout<<"something wrong"<<endl;
        return;
        }
    while(f1.eof()==0){
        getline(f1,s1,' ');
        if(s1.compare("IDandPassword")==0){
            getline(f1,s2,' ');
            if(s2.compare(id)==0)
                break;
            }

    }
    for(n=0;n<100;n++){
        getline(f1,st1[n],' ');
        if(st1[n].compare("nickname:")==0)
            break;
            }
    for(k=n+1;k<n+5;k++)
        getline(f1,st1[k],' ');
    getline(f1,s3,' ');
    while(s3.compare("friend:")!=0){
         getline(f1,s3,' ');
    }
    for(v=0;v<100;v++){
        getline(f1,st2[v],' ');
        if(st2[v].compare("qqgroup:")==0)
            break;
    }
    for(u=0;u<100;u++){
        getline(f1,st3[u],' ');
        if(st3[u].compare("IDandPassword")==0)
            break;
    }
    name=st1[n+1];
    birth=st1[n+2];
    T=st1[n+3];
    place=st1[n+4];
    for(q=0;q<v;q++){
        friend1[q]=st2[q];
         }
    for(q=0;q<u;q++)
        group[q]=st3[q];
        f1.close();

}
void Weiboxct::output(){
    cout<<"                            ID:"<<ID<<endl<<"                            Name:"<<name<<endl<<"                            Birth:"<<birth<<endl<<"                            Place:"<<place<<endl;
}
