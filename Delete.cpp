#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<vector>
using namespace std;
int qqxct::Delete(string q){
        string e,ch;
        int n=0,k,i=0,t;
        char ch1=' ';
        while(friend1[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
            if(q.compare(friend1[k])==0)
                i++;
            if(i==0&&k==n-1){
                cout<<"You don't have the friend"<<endl<<"Please input again or input 'end'to stop deleting"<<endl;
                cin>>q;
                k=0;
                if(q.compare("end")==0)
                    return 0;
                }
       }
       for(t=0;t<n;t++){
           if(friend1[t].compare(q)==0)
            break;
       }
       friend1[t]="";
       if(t<n-1){
            for(;t<n;t++)
                friend1[t]=friend1[t+1];
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
                            while(e.compare("friend:")!=0){
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
                    return 0;

                      }
int Weixinxct::Delete(string q){
        string e,ch;
        int n=0,k,i=0,t;
        char ch1=' ';
        while(friend1[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
            if(q.compare(friend1[k])==0)
                i++;
            if(i==0&&k==n-1){
                cout<<"You don't have the friend"<<endl<<"Please input again or input 'end'to stop deleting"<<endl;
                cin>>q;
                k=0;
                if(q.compare("end")==0)
                    return 0;
                }
       }
       for(t=0;t<n;t++){
           if(friend1[t].compare(q)==0)
            break;
       }
       friend1[t]="";
       if(t<n-1){
            for(;t<n;t++)
                friend1[t]=friend1[t+1];
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
                        if(e.compare(ID1)==0){
                            while(e.compare("friend:")!=0){
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
                    return 0;

                      }
int Weiboxct::Delete(string q){
        string e,ch;
        int n=0,k,i=0,t;
        char ch1=' ';
        while(friend1[n].size()!=0)
            n++;
        for(k=0;k<n;k++){
            if(q.compare(friend1[k])==0)
                i++;
            if(i==0&&k==n-1){
                cout<<"You don't have the friend"<<endl<<"Please input again or input 'end'to stop deleting"<<endl;
                cin>>q;
                k=0;
                if(q.compare("end")==0)
                    return 0;
                }
       }
       for(t=0;t<n;t++){
           if(friend1[t].compare(q)==0)
            break;
       }
       friend1[t]="";
       if(t<n-1){
            for(;t<n;t++)
                friend1[t]=friend1[t+1];
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
                            while(e.compare("friend:")!=0){
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
                    return 0;

                      }

