#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<vector>
using namespace std;
int qqxct::Add_1(string pp,string ID){
    int a=0;
    string kk;
    while(a==0){
        ifstream f5("qqgroup(ID).txt");
        while(f5.eof()==0){
            getline(f5,kk,' ');
            if(pp.compare(kk)==0)
                a++;
                    }
            if(a==0){
                cout<<"The group dosen't exit,please input again"<<endl;
                    cin>>pp;
                    }
                f5.close();
}
            ifstream f4("manager.txt");
            while(f4.eof()==0){
                getline(f4,kk,' ');
                if(kk.compare("qqgroup:")==0){
                    getline(f4,kk,' ');
                        if(kk.compare("pp")==0){
                            getline(f4,kk,' ');
                            break;
                         }
                    }
                }
                f4.close();
                string e,ch;
                char ch1=' ';
                ifstream f1("manager.txt");
                ofstream f2("f2.txt");
                while(f1.eof()==0){
                    getline(f1,e,' ');
                    f2<<e;
                    f2<<' ';
                    if(e.compare("qqgroup:")==0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            if(e.compare(pp)==0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                    while(e.compare("apply:")!=0){
                                        getline(f1,e,' ');
                                        f2<<e;
                                        f2<<ch1;
                                        }
                                        f2<<ID<<ch1;

                                    }

                                    }
                                    }

                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("manager.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    cout<<"Have sent the request"<<endl;
                    return 0;

                    }

int Weixinxct::Add_1(string pp,string ID){
    int a=0;
    string kk;
    while(a==0){
        ifstream f5("wxgroup(ID).txt");
        while(f5.eof()==0){
            getline(f5,kk,' ');
            if(pp.compare(kk)==0)
                a++;
                    }
            if(a==0){
                cout<<"The group dosen't exit,please input again"<<endl;
                    cin>>pp;
                    }
                f5.close();
}
            ifstream f4("wxmanager.txt");
            while(f4.eof()==0){
                getline(f4,kk,' ');
                if(kk.compare("qqgroup:")==0){
                    getline(f4,kk,' ');
                        if(kk.compare("pp")==0){
                            getline(f4,kk,' ');
                            break;
                         }
                    }
                }
                f4.close();
                string e,ch;
                char ch1=' ';
                ifstream f1("wxmanager.txt");
                ofstream f2("f2.txt");
                while(f1.eof()==0){
                    getline(f1,e,' ');
                    f2<<e;
                    f2<<' ';
                    if(e.compare("qqgroup:")==0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            if(e.compare(pp)==0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                    while(e.compare("apply:")!=0){
                                        getline(f1,e,' ');
                                        f2<<e;
                                        f2<<ch1;
                                        }
                                        f2<<ID<<ch1;

                                    }

                                    }
                                    }

                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("wxmanager.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    cout<<"Have sent the request"<<endl;
                    return 0;

                    }


int Weiboxct::Add_1(string pp,string ID){
    int a=0;
    string kk;
    while(a==0){
        ifstream f5("wbgroup(ID).txt");
        while(f5.eof()==0){
            getline(f5,kk,' ');
            if(pp.compare(kk)==0)
                a++;
                    }
            if(a==0){
                cout<<"The group dosen't exit,please input again"<<endl;
                    cin>>pp;
                    }
                f5.close();
}
            ifstream f4("wbmanager.txt");
            while(f4.eof()==0){
                getline(f4,kk,' ');
                if(kk.compare("qqgroup:")==0){
                    getline(f4,kk,' ');
                        if(kk.compare("pp")==0){
                            getline(f4,kk,' ');
                            break;
                         }
                    }
                }
                f4.close();
                string e,ch;
                char ch1=' ';
                ifstream f1("wbmanager.txt");
                ofstream f2("f2.txt");
                while(f1.eof()==0){
                    getline(f1,e,' ');
                    f2<<e;
                    f2<<' ';
                    if(e.compare("qqgroup:")==0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            if(e.compare(pp)==0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                    while(e.compare("apply:")!=0){
                                        getline(f1,e,' ');
                                        f2<<e;
                                        f2<<ch1;
                                        }
                                        f2<<ID<<ch1;

                                    }

                                    }
                                    }

                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("wbmanager.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    cout<<"Have sent the request"<<endl;
                    return 0;

                    }


