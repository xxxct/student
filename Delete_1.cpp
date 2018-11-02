#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<vector>
int qqxct::Delete_1(string q,string ID){
    string e,ch;
        int n=0,k,i=0,t;
        char ch1=' ';
        while(group[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
        if(q.compare(group[k])==0)
            i++;
        if(i==0&&k==n-1){
            cout<<"You don't have the group"<<endl<<"Please input again or input 'end'to stop deleting"<<endl;
            cin>>q;
            k=0;
            if(q.compare("end")==0)
                return 0;
                }
       }
            for(t=0;t<n;t++){
                if(group[t].compare(q)==0)
                    break;
       }
            group[t]="";
                if(t<n-1){
                    for(;t<n;t++)
                       group[t]=group[t+1];
       }

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
                            while(e.compare("qqgroup:")!=0){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                    }
                                getline(f1,e,' ');
                                while(e.compare(q)!=0){
                                    f2<<e;
                                    f2<<ch1;
                                     getline(f1,e,' ');
                                }
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
                    ifstream f11("qqgroup.txt");
                    ofstream f22("f22.txt");
                    while(f11.eof()==0){
                        getline(f11,e,' ');
                        f22<<e;
                        f22<<' ';
                        if(e.compare("qqgroup:")==0){
                            getline(f11,e,' ');
                            f22<<e;
                            f22<<ch1;
                            if(e.compare(q)==0){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f11,e,' ');
                                    if(e.compare(ID)!=0){
                                        f22<<e;
                                        f22<<ch1;
                                        }
                                    }

                                }
                                }
                                }

                        f11.close();
                        f22.close();
                        ifstream f_22("f22.txt");
                        ofstream f_11("qqgroup.txt",ios::trunc);
                        getline(f_22,ch);
                        f_11<<ch;
                        f_11.close();
                        f_22.close();
                        system("del f22.txt");
                        return 0;

}

int Weixinxct::Delete_1(string q,string ID){
        string e,ch;
        int n=0,k,i=0,t;
        char ch1=' ';
        while(group[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
        if(q.compare(group[k])==0)
            i++;
        if(i==0&&k==n-1){
            cout<<"You don't have the group"<<endl<<"Please input again or input 'end'to stop deleting"<<endl;
            cin>>q;
            k=0;
            if(q.compare("end")==0)
                return 0;
                }
       }
            for(t=0;t<n;t++){
                if(group[t].compare(q)==0)
                    break;
       }
            group[t]="";
                if(t<n-1){
                    for(;t<n;t++)
                       group[t]=group[t+1];
       }

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
                            while(e.compare("qqgroup:")!=0){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                    }
                                getline(f1,e,' ');
                                while(e.compare(q)!=0){
                                    f2<<e;
                                    f2<<ch1;
                                     getline(f1,e,' ');
                                }
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("weixin.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    ifstream f11("wxgroup.txt");
                    ofstream f22("f22.txt");
                    while(f11.eof()==0){
                        getline(f11,e,' ');
                        f22<<e;
                        f22<<' ';
                        if(e.compare("qqgroup:")==0){
                            getline(f11,e,' ');
                            f22<<e;
                            f22<<ch1;
                            if(e.compare(q)==0){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f11,e,' ');
                                    if(e.compare(ID)!=0){
                                        f22<<e;
                                        f22<<ch1;
                                        }
                                    }

                                }
                                }
                                }

                        f11.close();
                        f22.close();
                        ifstream f_22("f22.txt");
                        ofstream f_11("wxgroup.txt",ios::trunc);
                        getline(f_22,ch);
                        f_11<<ch;
                        f_11.close();
                        f_22.close();
                        system("del f22.txt");
                        return 0;

}
int Weiboxct::Delete_1(string q,string ID){
        string e,ch;
        int n=0,k,i=0,t;
        char ch1=' ';
        while(group[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
        if(q.compare(group[k])==0)
            i++;
        if(i==0&&k==n-1){
            cout<<"You don't have the group"<<endl<<"Please input again or input 'end'to stop deleting"<<endl;
            cin>>q;
            k=0;
            if(q.compare("end")==0)
                return 0;
                }
       }
            for(t=0;t<n;t++){
                if(group[t].compare(q)==0)
                    break;
       }
            group[t]="";
                if(t<n-1){
                    for(;t<n;t++)
                       group[t]=group[t+1];
       }

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
                            while(e.compare("qqgroup:")!=0){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                    }
                                getline(f1,e,' ');
                                while(e.compare(q)!=0){
                                    f2<<e;
                                    f2<<ch1;
                                     getline(f1,e,' ');
                                }
                                }
                                }
}
                    f1.close();
                    f2.close();
                    ifstream f_2("f2.txt");
                    ofstream f_1("weibo.txt",ios::trunc);
                    getline(f_2,ch);
                    f_1<<ch;
                    f_1.close();
                    f_2.close();
                    system("del f2.txt");
                    ifstream f11("wbgroup.txt");
                    ofstream f22("f22.txt");
                    while(f11.eof()==0){
                        getline(f11,e,' ');
                        f22<<e;
                        f22<<' ';
                        if(e.compare("qqgroup:")==0){
                            getline(f11,e,' ');
                            f22<<e;
                            f22<<ch1;
                            if(e.compare(q)==0){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f11,e,' ');
                                    if(e.compare(ID)!=0){
                                        f22<<e;
                                        f22<<ch1;
                                        }
                                    }

                                }
                                }
                                }

                        f11.close();
                        f22.close();
                        ifstream f_22("f22.txt");
                        ofstream f_11("wbgroup.txt",ios::trunc);
                        getline(f_22,ch);
                        f_11<<ch;
                        f_11.close();
                        f_22.close();
                        system("del f22.txt");
                        return 0;

}

