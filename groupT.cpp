#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<vector>
using namespace std;
int qqxct::groupT(int l){
                int q,i=0,n=0;
                string w,e,a;
                cout<<"Please choose the group you want to operate:"<<endl;
                cin>>q;
                while(!(0<q&&q<l)){
                    cout<<"It is the unvalid operation."<<endl<<"Please choice again:";
                    cin>>q;
                }
                ifstream f1("manager.txt");
                while(f1.eof()==0){
                    getline(f1,w,' ');
                    if(w.compare(group[q-1])==0){
                        while(w.compare("apply:")!=0&&f1.eof()==0){
                            getline(f1,w,' ');
                            if(w.compare(ID)==0)
                                i++;
                            }
                    }
                    }
                    f1.close();
                    if(i==1){
                        cout<<"Please input the ID you want to kick out:"<<endl;
                        cin>>a;
                        ifstream f2("qqgroup.txt");
                        ofstream f3("f3.txt");
                        while(f2.eof()==0){
                            getline(f2,w,' ');
                            f3<<w<<' ';
                            if(w.compare(group[q-1])==0){
                                getline(f2,w,' ');
                                f3<<w<<' ';
                                while(w.compare("qqgroup:")!=0&&f2.eof()==0){
                                    getline(f2,w,' ');
                                    if(w.compare(a)==0){
                                        n++;
                                        break;
                                        }
                                    if(w.compare(a)!=0)
                                        f3<<w<<' ';
                                        }}
                        }
                        f2.close();
                        f3.close();
                        if(n==0){
                            cout<<"The ID dosen't exit in the group.Return to the last surface."<<endl;
                            system("del f3.txt");
                            return 0;

                        }
                        if(n==1){
                            ofstream f_2("qqgroup.txt",ios::trunc);
                            ifstream f_3("f3.txt");
                            getline(f_3,w);
                            f_2<<w;
                            f_2.close();
                            f_3.close();
                            system("del f3.txt");
        ifstream f1("f1.txt");
        ofstream f2("f2.txt");
            while(f1.eof()==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<' ';
                if(e.compare("IDandPassword")==0){
                        getline(f1,e,' ');
                        f2<<e<<' ';

                        if(e.compare(a)==0){
                            while(e.compare("qqgroup:")!=0){
                                getline(f1,e,' ');
                                f2<<e<<' ';
                                    }
                                getline(f1,e,' ');
                                while(e.compare(group[q-1])!=0){
                                    f2<<e<<' ';

                                     getline(f1,e,' ');
                                }
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_22("f2.txt");
                    ofstream f_11("f1.txt",ios::trunc);
                    getline(f_22,e);
                    f_11<<e;
                    f_11.close();
                    f_22.close();
                    system("del f2.txt");
                    cout<<"Have kicked out!Return the last surface."<<endl<<endl;


}
}
                    if(i==0){
                        cout<<"You are not the manager.Return to the last surface."<<endl<<endl;
                        return 0;
                    }
                    return 0;}
int Weixinxct::groupT(int l){
                int q,i=0,n=0;
                string w,e,a;
                cout<<"Please choose the group you want to operate:"<<endl;
                cin>>q;
                while(!(0<q&&q<=l)){
                    cout<<"It is the unvalid operation."<<endl<<"Please choice again:";/*****/
                    cin>>q;
                }
                ifstream f1("wxmanager.txt");
                while(f1.eof()==0){
                    getline(f1,w,' ');
                    if(w.compare(group[q-1])==0){
                        while(w.compare("apply:")!=0&&f1.eof()==0){
                            getline(f1,w,' ');
                            if(w.compare(ID1)==0)
                                i++;
                            }
                    }
                    }
                    f1.close();
                    if(i==1){
                        cout<<"Please input the ID you want to kick out:"<<endl;
                        cin>>a;
                        ifstream f2("wxgroup.txt");
                        ofstream f3("f3.txt");
                        while(f2.eof()==0){
                            getline(f2,w,' ');
                            f3<<w<<' ';
                            if(w.compare(group[q-1])==0){
                                getline(f2,w,' ');
                                f3<<w<<' ';
                                while(w.compare("qqgroup:")!=0&&f2.eof()==0){
                                    getline(f2,w,' ');
                                    if(w.compare(a)==0){
                                        n++;
                                        break;
                                        }
                                    if(w.compare(a)!=0)
                                        f3<<w<<' ';
                                        }}
                        }
                        f2.close();
                        f3.close();
                        if(n==0){
                            cout<<"The ID dosen't exit in the group.Return to the last surface."<<endl;
                            system("del f3.txt");
                            return 0;

                        }
                        if(n==1){
                            ofstream f_2("wxgroup.txt",ios::trunc);
                            ifstream f_3("f3.txt");
                            getline(f_3,w);
                            f_2<<w;
                            f_2.close();
                            f_3.close();
                            system("del f3.txt");
        ifstream f1("weixin.txt");
        ofstream f2("f2.txt");
            while(f1.eof()==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<' ';
                if(e.compare("IDandPassword")==0){
                        getline(f1,e,' ');
                        f2<<e<<' ';

                        if(e.compare(a)==0){
                            while(e.compare("qqgroup:")!=0){
                                getline(f1,e,' ');
                                f2<<e<<' ';
                                    }
                                getline(f1,e,' ');
                                while(e.compare(group[q-1])!=0){
                                    f2<<e<<' ';

                                     getline(f1,e,' ');
                                }
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_22("f2.txt");
                    ofstream f_11("weixin.txt",ios::trunc);
                    getline(f_22,e);
                    f_11<<e;
                    f_11.close();
                    f_22.close();
                    system("del f2.txt");
                    cout<<"Have kicked out!Return the last surface."<<endl<<endl;


}
}
                    if(i==0){
                        cout<<"You are not the manager.Return to the last surface."<<endl<<endl;
                        return 0;
                    }
                    return 0;}
int Weiboxct::groupT(int l){
                int q,i=0,n=0;
                string w,e,a;
                cout<<"Please choose the group you want to operate:"<<endl;
                cin>>q;
                while(!(0<q&&q<l)){
                    cout<<"It is the unvalid operation."<<endl<<"Please choice again:";
                    cin>>q;
                }
                ifstream f1("wbmanager.txt");
                while(f1.eof()==0){
                    getline(f1,w,' ');
                    if(w.compare(group[q-1])==0){
                        while(w.compare("apply:")!=0&&f1.eof()==0){
                            getline(f1,w,' ');
                            if(w.compare(ID)==0)
                                i++;
                            }
                    }
                    }
                    f1.close();
                    if(i==1){
                        cout<<"Please input the ID you want to kick out:"<<endl;
                        cin>>a;
                        ifstream f2("wbgroup.txt");
                        ofstream f3("f3.txt");
                        while(f2.eof()==0){
                            getline(f2,w,' ');
                            f3<<w<<' ';
                            if(w.compare(group[q-1])==0){
                                getline(f2,w,' ');
                                f3<<w<<' ';
                                while(w.compare("qqgroup:")!=0&&f2.eof()==0){
                                    getline(f2,w,' ');
                                    if(w.compare(a)==0){
                                        n++;
                                        break;
                                        }
                                    if(w.compare(a)!=0)
                                        f3<<w<<' ';
                                        }}
                        }
                        f2.close();
                        f3.close();
                        if(n==0){
                            cout<<"The ID dosen't exit in the group.Return to the last surface."<<endl;
                            system("del f3.txt");
                            return 0;

                        }
                        if(n==1){
                            ofstream f_2("wbgroup.txt",ios::trunc);
                            ifstream f_3("f3.txt");
                            getline(f_3,w);
                            f_2<<w;
                            f_2.close();
                            f_3.close();
                            system("del f3.txt");
        ifstream f1("weibo.txt");
        ofstream f2("f2.txt");
            while(f1.eof()==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<' ';
                if(e.compare("IDandPassword")==0){
                        getline(f1,e,' ');
                        f2<<e<<' ';

                        if(e.compare(a)==0){
                            while(e.compare("qqgroup:")!=0){
                                getline(f1,e,' ');
                                f2<<e<<' ';
                                    }
                                getline(f1,e,' ');
                                while(e.compare(group[q-1])!=0){
                                    f2<<e<<' ';

                                     getline(f1,e,' ');
                                }
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_22("f2.txt");
                    ofstream f_11("weibo.txt",ios::trunc);
                    getline(f_22,e);
                    f_11<<e;
                    f_11.close();
                    f_22.close();
                    system("del f2.txt");
                    cout<<"Have kicked out!Return the last surface."<<endl<<endl;


}
}
                    if(i==0){
                        cout<<"You are not the manager.Return to the last surface."<<endl<<endl;
                        return 0;
                    }
                    return 0;}
