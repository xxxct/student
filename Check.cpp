#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
using namespace std;
int qqxct::Check(){
    int n=0,c;
    while(friend1[n].size()!=0)
            n++;
    string e,ch,str;
    char ch1=' ';
    ifstream f1("f1.txt");
    ofstream f2("f2.txt");
    while(f1.eof()==0){
        getline(f1,e,' ');
        f2<<e;
        f2<<' ';
        if(e.compare("IDandPassword")==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<ch1;
                if(e.compare(ID)==0){
                    while(e.compare("qqfriend???:")!=0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            }
                            getline(f1,e,' ');
                        if(e.compare("friend:")==0){
                            f2<<e<<ch1;
                            cout<<"There is no information about friends"<<endl<<endl;
                            }
                        if(e.compare("friend:")!=0){
                            cout<<"Would you like to make friends with ("<<e<<").Please input '1' to agree or '2' to reject:"<<endl;
                            cin>>c;
                            str=e;
                            while(c!=1&&c!=2){
                                cout<<"It is the invalid operation,please input again:"<<endl;
                                cin>>c;
                                }
                            if(c==1){
                                while(e.compare("friend:")!=0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                }
                            friend1[n]=str;
                            f2<<str<<ch1;
                            cout<<"You have become friends"<<endl;
                                }
                            if(c==2){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                cout<<"Have rejected"<<endl;
                                }
                                }
                                }
}}

                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("f1.txt",ios::trunc);
                    if(c==1){
                        while(f_2.eof()==0){
                            getline(f_2,e,' ');
                            f_1<<e;
                            f_1<<' ';
                            if(e.compare("IDandPassword")==0){
                                getline(f_2,e,' ');
                                f_1<<e;
                                f_1<<ch1;
                            if(e.compare(str)==0){
                                while(e.compare("friend:")!=0){
                                    getline(f_2,e,' ');
                                    f_1<<e;
                                    f_1<<ch1;
                                    }
                                    f_1<<ID<<ch1;
}}}}
                    else{
                        getline(f_2,e);
                        f_1<<e;
                    }
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");

                    return 0;}
int Weixinxct::Check(){
    int n=0,c;
    while(friend1[n].size()!=0)
            n++;
    string e,ch,str;
    char ch1=' ';
    ifstream f1("weixin.txt");
    ofstream f2("f2.txt");
    while(f1.eof()==0){
        getline(f1,e,' ');
        f2<<e;
        f2<<' ';
        if(e.compare("IDandPassword")==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<ch1;
                if(e.compare(ID)==0){
                    while(e.compare("qqfriend???:")!=0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            }
                            getline(f1,e,' ');
                        if(e.compare("friend:")==0){
                            f2<<e<<ch1;
                            cout<<"There is no information about friends"<<endl<<endl;
                            }
                        if(e.compare("friend:")!=0){
                            cout<<"Would you like to make friends with ("<<e<<").Please input '1' to agree or '2' to reject:"<<endl;
                            cin>>c;
                            str=e;
                            while(c!=1&&c!=2){
                                cout<<"It is the invalid operation,please input again:"<<endl;
                                cin>>c;
                                }
                            if(c==1){
                                while(e.compare("friend:")!=0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                }
                            friend1[n]=str;
                            f2<<str<<ch1;
                            cout<<"You have become friends"<<endl;
                                }
                            if(c==2){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                cout<<"Have rejected"<<endl;
                                }
                                }
                                }
}}

                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("weixin.txt",ios::trunc);
                    if(c==1){
                        while(f_2.eof()==0){
                            getline(f_2,e,' ');
                            f_1<<e;
                            f_1<<' ';
                            if(e.compare("IDandPassword")==0){
                                getline(f_2,e,' ');
                                f_1<<e;
                                f_1<<ch1;
                            if(e.compare(str)==0){
                                while(e.compare("friend:")!=0){
                                    getline(f_2,e,' ');
                                    f_1<<e;
                                    f_1<<ch1;
                                    }
                                    f_1<<ID<<ch1;
}}}}
                    else{
                        getline(f_2,e);
                        f_1<<e;
                    }
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");

                    return 0;}
int Weiboxct::Check(){
    int n=0,c;
    while(friend1[n].size()!=0)
            n++;
    string e,ch,str;
    char ch1=' ';
    ifstream f1("weibo.txt");
    ofstream f2("f2.txt");
    while(f1.eof()==0){
        getline(f1,e,' ');
        f2<<e;
        f2<<' ';
        if(e.compare("IDandPassword")==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<ch1;
                if(e.compare(ID)==0){
                    while(e.compare("qqfriend???:")!=0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            }
                            getline(f1,e,' ');
                        if(e.compare("friend:")==0){
                            f2<<e<<ch1;
                            cout<<"There is no information about friends"<<endl<<endl;
                            }
                        if(e.compare("friend:")!=0){
                            cout<<"Would you like to make friends with ("<<e<<").Please input '1' to agree or '2' to reject:"<<endl;
                            cin>>c;
                            str=e;
                            while(c!=1&&c!=2){
                                cout<<"It is the invalid operation,please input again:"<<endl;
                                cin>>c;
                                }
                            if(c==1){
                                while(e.compare("friend:")!=0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                }
                            friend1[n]=str;
                            f2<<str<<ch1;
                            cout<<"You have become friends"<<endl;
                                }
                            if(c==2){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                cout<<"Have rejected"<<endl;
                                }
                                }
                                }
}}

                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("weibo.txt",ios::trunc);
                    if(c==1){
                        while(f_2.eof()==0){
                            getline(f_2,e,' ');
                            f_1<<e;
                            f_1<<' ';
                            if(e.compare("IDandPassword")==0){
                                getline(f_2,e,' ');
                                f_1<<e;
                                f_1<<ch1;
                            if(e.compare(str)==0){
                                while(e.compare("friend:")!=0){
                                    getline(f_2,e,' ');
                                    f_1<<e;
                                    f_1<<ch1;
                                    }
                                    f_1<<ID<<ch1;
}}}}
                    else{
                        getline(f_2,e);
                        f_1<<e;
                    }
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");

                    return 0;}


