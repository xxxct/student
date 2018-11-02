#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
using namespace std;
int qqxct::Add(string q){
        int n=0,k,i=0;
        string ss;
        while(friend1[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
            if(q.compare(friend1[k])==0){
                cout<<"You have had the friend"<<endl<<"Please input again or input 'end' to end"<<endl;
                cin>>q;
                k=0;
                if(q.compare("end")==0)
                    return 0;
}
        }
        ifstream fi1("f1.txt");
        while(fi1.eof()==0){
            getline(fi1,ss,' ');
            if(ss.compare("IDandPassword")==0){
                getline(fi1,ss,' ');
                if(ss.compare(q)==0)
                    i++;
            }
            }
            if(i==0){
                cout<<"ID dosen't exit.Return the last surface"<<endl;
                return 0;
            }
            fi1.close();

        string e,ch;
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
                        if(e.compare(q)==0){
                            while(e.compare("qqfriend???:")!=0){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                    }
                                f2<<ID<<ch1;
                                cout<<"Have sent the request"<<endl;
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("f1.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    return 0;


}
int Weixinxct::Add(string q){
        int n=0,k,i=0;
        string ss;
        while(friend1[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
            if(q.compare(friend1[k])==0){
                cout<<"You have had the friend"<<endl<<"Please input again or input 'end' to end"<<endl;
                cin>>q;
                k=0;
                if(q.compare("end")==0)
                    return 0;
}
        }
        ifstream fi1("weixin.txt");
        while(fi1.eof()==0){
            getline(fi1,ss,' ');
            if(ss.compare("IDandPassword")==0){
                getline(fi1,ss,' ');
                if(ss.compare(q)==0)
                    i++;
            }
            }
            if(i==0){
                cout<<"ID dosen't exit.Return the last surface"<<endl;
                return 0;
            }
            fi1.close();

        string e,ch;
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
                        if(e.compare(q)==0){
                            while(e.compare("qqfriend???:")!=0){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                    }
                                f2<<ID1<<ch1;
                                cout<<"Have sent the request"<<endl;
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("f1.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    return 0;


}
int Weiboxct::Add(string q){
        int n=0,k,i=0;
        string ss;
        while(friend1[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
            if(q.compare(friend1[k])==0){
                cout<<"You have had the friend"<<endl<<"Please input again or input 'end' to end"<<endl;
                cin>>q;
                k=0;
                if(q.compare("end")==0)
                    return 0;
}
        }
        ifstream fi1("f1.txt");
        while(fi1.eof()==0){
            getline(fi1,ss,' ');
            if(ss.compare("IDandPassword")==0){
                getline(fi1,ss,' ');
                if(ss.compare(q)==0)
                    i++;
            }
            }
            if(i==0){
                cout<<"ID dosen't exit.Return the last surface"<<endl;
                return 0;
            }
            fi1.close();

        string e,ch;
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
                        if(e.compare(q)==0){
                            while(e.compare("qqfriend???:")!=0){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                    }
                                f2<<ID<<ch1;
                                cout<<"Have sent the request"<<endl;
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("f1.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    return 0;


}
