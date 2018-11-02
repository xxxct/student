#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<vector>
using namespace std;
void qqxct::seek_1(){
    cout<<"                         The list of groups"<<endl<<endl;
    string str;
    int i,k,n=0,l=0;
    while(group[n].size()!=0)
        n++;
    for(i=0;i<n;i++){
        fstream f1("qqgroup.txt");
        while(f1.eof()==0){
            getline(f1,str,' ');
            if(str.compare("qqgroup:")==0){
                    getline(f1,str,' ');
            if(str.compare(group[i])==0){
                l++;
                cout<<"                         "<<l<<".("<<str<<")";
                getline(f1,str,' ');
                cout<<str<<endl;
                }

            }
        }f1.close();
    }

     cout<<endl<<"0.Input '0' to return the last interface"<<endl<<"1.Choice number to see the group's member"<<endl<<"2.Input '101' to apply for group or '102' to leave the group"<<endl<<"3.Input '103' to choose the group to kick someone out of the group"<<endl<<"4.Input '104' to add  someone to the group"<<endl;
     cin>>k;
     while(k!=0){
        while(l<k&&k<100){
                cout<<"There aren't so many groups in your list"<<endl<<"Please choice again:";
                cin>>k;
            }
        if(k==0)
            break;
        if(k>0&&k<=l){
            int ii=0;
            string ss,ss1;
            ifstream f3("qqgroup.txt");
            while(f3.eof()==0){
                getline(f3,ss,' ');
                if(ss.compare("qqgroup:")==0){
                    getline(f3,ss,' ');
                    if(ss.compare(group[k-1])==0){
                        getline(f3,ss,' ');
                        while(ss.compare("qqgroup:")!=0&&f3.eof()==0){
                            getline(f3,ss,' ');
                            ifstream f4("f1.txt");
                         while(f4.eof()==0){
                            getline(f4,ss1,' ');
                            if(ss1.compare("IDandPassword")==0){
                                getline(f4,ss1,' ');
                            if(ss1.compare(ss)==0){
                                ii++;
                                cout<<ii<<"."<<ss1;
                                getline(f4,ss1,' ');
                                getline(f4,ss1,' ');
                                getline(f4,ss1,' ');
                                cout<<"("<<ss1<<")"<<endl;
                                f4.close();
                            }}}}}}}
                        cout<<endl<<"Choice the next step:";
                        cin>>k;
                        f3.close();}
        if(k==101){
                cout<<"Please input the group(ID) you want to apply for:"<<endl;
                string pp;
                cin>>pp;
                Add_1(pp,ID);
                cout<<"Choice the next step"<<endl;
                cin>>k;
        }
         if(k==102){
                cout<<"Please input the group(ID) you want to leave:"<<endl;
                string q;
                cin>>q;
                Delete_1(q,ID);
                cout<<"Choice the next step"<<endl;
                cin>>k;

}        if(k==103){
                groupT(l);
                cout<<"Choice the next step"<<endl;
                cin>>k;
}

            if(k==104){
                groupA(l);
                cout<<"Choice the next step"<<endl;
                cin>>k;
}
}
}

void Weixinxct::seek_1(){
    cout<<"                         The list of groups"<<endl<<endl;
    string str;
    int i,k,n=0,l=0;
    while(group[n].size()!=0)
        n++;
    for(i=0;i<n;i++){
        fstream f1("wxgroup.txt");
        while(f1.eof()==0){
            getline(f1,str,' ');
            if(str.compare("qqgroup:")==0){
                    getline(f1,str,' ');
            if(str.compare(group[i])==0){
                l++;
                cout<<"                         "<<l<<".("<<str<<")";
                getline(f1,str,' ');
                cout<<str<<endl;
                }

            }
        }f1.close();
    }

     cout<<endl<<"0.Input '0' to return the last interface"<<endl<<"1.Choice number to see the group's member"<<endl<<"2.Input '102' to leave the group"<<endl<<"3.Input '103' to choose the group to kick someone out of the group"<<endl<<"4.Input '104' to add  someone to the group"<<endl;
     cin>>k;
     while(k!=0){
        while(l<k&&k<100){
                cout<<"There aren't so many groups in your list"<<endl<<"Please choice again:";
                cin>>k;
            }
        if(k==0)
            break;
        if(k>0&&k<=l){
            int ii=0;
            string ss,ss1;
            ifstream f3("wxgroup.txt");
            while(f3.eof()==0){
                getline(f3,ss,' ');
                if(ss.compare("qqgroup:")==0){
                    getline(f3,ss,' ');
                    if(ss.compare(group[k-1])==0){
                        getline(f3,ss,' ');
                        while(ss.compare("qqgroup:")!=0&&f3.eof()==0){
                            getline(f3,ss,' ');
                            ifstream f4("weixin.txt");
                         while(f4.eof()==0){
                            getline(f4,ss1,' ');
                            if(ss1.compare("IDandPassword")==0){
                                getline(f4,ss1,' ');
                            if(ss1.compare(ss)==0){
                                ii++;
                                cout<<ii<<"."<<ss1;
                                getline(f4,ss1,' ');
                                getline(f4,ss1,' ');
                                getline(f4,ss1,' ');
                                cout<<"("<<ss1<<")"<<endl;
                                f4.close();
                            }}}}}}}
                        cout<<endl<<"Choice the next step:";
                        cin>>k;
                        f3.close();}
         if(k==102){
                cout<<"Please input the group(ID) you want to leave:"<<endl;
                string q;
                cin>>q;
                Delete_1(q,ID1);
                cout<<"Choice the next step"<<endl;
                cin>>k;

}        if(k==103){
                groupT(l);
                cout<<"Choice the next step"<<endl;
                cin>>k;
}

            if(k==104){
                groupA(l);
                cout<<"Choice the next step"<<endl;
                cin>>k;
}
}
}

void Weiboxct::seek_1(){
    cout<<"                         The list of groups"<<endl<<endl;
    string str;
    int i,k,n=0,l=0;
    while(group[n].size()!=0)
        n++;
    for(i=0;i<n;i++){
        fstream f1("wbgroup.txt");
        while(f1.eof()==0){
            getline(f1,str,' ');
            if(str.compare("qqgroup:")==0){
                    getline(f1,str,' ');
            if(str.compare(group[i])==0){
                l++;
                cout<<"                         "<<l<<".("<<str<<")";
                getline(f1,str,' ');
                cout<<str<<endl;
                }

            }
        }f1.close();
    }

     cout<<endl<<"0.Input '0' to return the last interface"<<endl<<"1.Choice number to see the group's member"<<endl<<"2.Input '101' to apply for group or '102' to leave the group"<<endl<<"3.Input '103' to choose the group to kick someone out of the group"<<endl<<"4.Input '104' to add  someone to the group"<<endl;
     cin>>k;
     while(k!=0){
        while(l<k&&k<100){
                cout<<"There aren't so many groups in your list"<<endl<<"Please choice again:";
                cin>>k;
            }
        if(k==0)
            break;
        if(k>0&&k<=l){
            int ii=0;
            string ss,ss1;
            ifstream f3("wbgroup.txt");
            while(f3.eof()==0){
                getline(f3,ss,' ');
                if(ss.compare("qqgroup:")==0){
                    getline(f3,ss,' ');
                    if(ss.compare(group[k-1])==0){
                        getline(f3,ss,' ');
                        while(ss.compare("qqgroup:")!=0&&f3.eof()==0){
                            getline(f3,ss,' ');
                            ifstream f4("weibo.txt");
                         while(f4.eof()==0){
                            getline(f4,ss1,' ');
                            if(ss1.compare("IDandPassword")==0){
                                getline(f4,ss1,' ');
                            if(ss1.compare(ss)==0){
                                ii++;
                                cout<<ii<<"."<<ss1;
                                getline(f4,ss1,' ');
                                getline(f4,ss1,' ');
                                getline(f4,ss1,' ');
                                cout<<"("<<ss1<<")"<<endl;
                                f4.close();
                            }}}}}}}
                        cout<<endl<<"Choice the next step:";
                        cin>>k;
                        f3.close();}
        if(k==101){
                cout<<"Please input the group(ID) you want to apply for:"<<endl;
                string pp;
                cin>>pp;
                Add_1(pp,ID);
                cout<<"Choice the next step"<<endl;
                cin>>k;
        }
         if(k==102){
                cout<<"Please input the group(ID) you want to leave:"<<endl;
                string q;
                cin>>q;
                Delete_1(q,ID);
                cout<<"Choice the next step"<<endl;
                cin>>k;

}        if(k==103){
                groupT(l);
                cout<<"Choice the next step"<<endl;
                cin>>k;
}

            if(k==104){
                groupA(l);
                cout<<"Choice the next step"<<endl;
                cin>>k;
}
}
}














