#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
using namespace std;
void qqxct::CN(){
    string q,w;
    cout<<"Please input the new Nickname:"<<endl;
    cin>>w;
    name=w;
    ifstream f1("f1.txt");
    ofstream f2("f2.txt");
    while(f1.eof()==0){
            getline(f1,q,' ');
            f2<<q<<' ';
            if(q=="IDandPassword"){
                getline(f1,q,' ');
                f2<<q<<' ';
                if(q==ID){
                    getline(f1,q,' ');
                    f2<<q<<' ';
                    while(q!="nickname:"){
                        getline(f1,q,' ');
                        f2<<q<<' ';
                        }
                     getline(f1,q,' ');
                     f2<<w<<' ';
                    }}}
                f1.close();
                f2.close();
      ofstream f11("f1.txt",ios::trunc);
      ifstream f22("f2.txt");
      getline(f22,q);
      f11<<q;
      f11.close();
      f22.close();
      system("del f2.txt");
      cout<<"Have changed your name!"<<endl;
    }
void Weixinxct::CN(){
    string q,w;
    cout<<"Please input the new Nickname:"<<endl;
    cin>>w;
    name=w;;
    ifstream f1("weixin.txt");
    ofstream f2("f2.txt");
    while(f1.eof()==0){
            getline(f1,q,' ');
            f2<<q<<' ';
            if(q=="IDandPassword"){
                getline(f1,q,' ');
                f2<<q<<' ';
                if(q==ID1){
                    getline(f1,q,' ');
                    f2<<q<<' ';
                    while(q!="nickname:"){
                        getline(f1,q,' ');
                        f2<<q<<' ';
                        }
                     getline(f1,q,' ');
                     f2<<w<<' ';
                    }}}
                f1.close();
                f2.close();
      ofstream f11("weixin.txt",ios::trunc);
      ifstream f22("f2.txt");
      getline(f22,q);
      f11<<q;
      f11.close();
      f22.close();
      system("del f2.txt");
      cout<<"Have changed your name!"<<endl;
    }
void Weiboxct::CN(){
    string q,w;
    cout<<"Please input the new Nickname:"<<endl;
    cin>>w;
    name=w;;
    ifstream f1("weibo.txt");
    ofstream f2("f2.txt");
    while(f1.eof()==0){
            getline(f1,q,' ');
            f2<<q<<' ';
            if(q=="IDandPassword"){
                getline(f1,q,' ');
                f2<<q<<' ';
                if(q==ID){
                    getline(f1,q,' ');
                    f2<<q<<' ';
                    while(q!="nickname:"){
                        getline(f1,q,' ');
                        f2<<q<<' ';
                        }
                     getline(f1,q,' ');
                     f2<<w<<' ';
                    }}}
                f1.close();
                f2.close();
      ofstream f11("weibo.txt",ios::trunc);
      ifstream f22("f2.txt");
      getline(f22,q);
      f11<<q;
      f11.close();
      f22.close();
      system("del f2.txt");
      cout<<"Have changed your name!"<<endl;



    }
