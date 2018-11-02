#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<vector>
using namespace std;
int qqxct::Check_1(){
    int c;
    string e,ch,str,str1,str2;
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
            f2<<' ';
            str=e;
            while(e.compare("apply:")!=0&&f1.eof()==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<ch1;
                if(e.compare(ID)==0){
                    while(e.compare("apply:")!=0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            }
                            getline(f1,e,' ');
                        if(e.compare("qqgroup:")!=0){
                            str1=e;


                            if(e==""){
                                cout<<"There isn't any information."<<endl;
                                break;
                            }
                            str2=str;
                            cout<<"Would you like to add ("<<str1<<") to the group ("<<str<<").Please input '1' to agree or '2' to reject:"<<endl;
                            cin>>c;
                            while(c!=1&&c!=2){
                                cout<<"It is the invalid operation,please input again:"<<endl;
                                cin>>c;
                                }
                            if(c==1){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                }
                            cout<<"You have add him to the group("<<str<<")"<<endl;
                                }
                            if(c==2){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                cout<<"Have rejected"<<endl;
                                }
                                }
                                }
}}}
                    f1.close();
                    f2.close();
                    ifstream f_22("f2.txt");
                    ofstream f_11("manager.txt",ios::trunc);
                    getline(f_22,e);
                    f_11<<e;
                    f_11.close();
                    f_22.close();
                    system("del f2.txt");
                if(c==1){
                        ofstream f_1("f_1.txt");
                        ifstream f_2("f1.txt");
                        while(f_2.eof()==0){
                            getline(f_2,e,' ');
                            f_1<<e;
                            f_1<<ch1;
                            if(e.compare("IDandPassword")==0){
                                getline(f_2,e,' ');
                                f_1<<e;
                                f_1<<ch1;
                            if(e.compare(str1)==0){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f_2,e,' ');
                                    f_1<<e;
                                    f_1<<ch1;
                                    }
                                    f_1<<str2<<ch1;
}}}
                    f_1.close();
                    f_2.close();
                    ifstream f3("f_1.txt");
                    ofstream f4("f1.txt",ios::trunc);
                    getline(f3,e);
                    f4<<e;
                    f3.close();
                    f4.close();
                    system("del f_1.txt");
                    ifstream f6("qqgroup.txt");
                    ofstream f5("f5.txt");
                    while(f6.eof()==0){
                        getline(f6,e,' ');
                        f5<<e<<ch1;
                        if(e.compare("qqgroup:")==0){
                            getline(f6,e,' ');
                            f5<<e<<ch1;
                            if(e.compare(str2)==0){
                                getline(f6,e,' ');
                                f5<<e<<ch1;
                                f5<<str1<<ch1;

}}}                     f5.close();
                        f6.close();
                        ifstream f_5("f5.txt");
                        ofstream f_6("qqgroup.txt",ios::trunc);
                        getline(f_5,e);
                        f_6<<e;
                        f_6.close();
                        f_5.close();
                        system("del f5.txt");
}return 0;
}
int Weixinxct::Check_1(){
    int c;
    string e,ch,str,str1,str2;
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
            f2<<' ';
            str=e;
            while(e.compare("apply:")!=0&&f1.eof()==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<ch1;
                if(e.compare(ID1)==0){
                    while(e.compare("apply:")!=0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            }
                            getline(f1,e,' ');
                        if(e.compare("qqgroup:")!=0){
                            str1=e;


                            if(e==""){
                                cout<<"There isn't any information."<<endl;
                                break;
                            }
                            str2=str;
                            cout<<"Would you like to add ("<<str1<<") to the group ("<<str<<").Please input '1' to agree or '2' to reject:"<<endl;
                            cin>>c;
                            while(c!=1&&c!=2){
                                cout<<"It is the invalid operation,please input again:"<<endl;
                                cin>>c;
                                }
                            if(c==1){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                }
                            cout<<"You have add him to the group("<<str<<")"<<endl;
                                }
                            if(c==2){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                cout<<"Have rejected"<<endl;
                                }
                                }
                                }
}}}
                    f1.close();
                    f2.close();
                    ifstream f_22("f2.txt");
                    ofstream f_11("wxmanager.txt",ios::trunc);
                    getline(f_22,e);
                    f_11<<e;
                    f_11.close();
                    f_22.close();
                    system("del f2.txt");
                if(c==1){
                        ofstream f_1("f_1.txt");
                        ifstream f_2("weixin.txt");
                        while(f_2.eof()==0){
                            getline(f_2,e,' ');
                            f_1<<e;
                            f_1<<ch1;
                            if(e.compare("IDandPassword")==0){
                                getline(f_2,e,' ');
                                f_1<<e;
                                f_1<<ch1;
                            if(e.compare(str1)==0){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f_2,e,' ');
                                    f_1<<e;
                                    f_1<<ch1;
                                    }
                                    f_1<<str2<<ch1;
}}}
                    f_1.close();
                    f_2.close();
                    ifstream f3("f_1.txt");
                    ofstream f4("weixin.txt",ios::trunc);
                    getline(f3,e);
                    f4<<e;
                    f3.close();
                    f4.close();
                    system("del f_1.txt");
                    ifstream f6("wxgroup.txt");
                    ofstream f5("f5.txt");
                    while(f6.eof()==0){
                        getline(f6,e,' ');
                        f5<<e<<ch1;
                        if(e.compare("qqgroup:")==0){
                            getline(f6,e,' ');
                            f5<<e<<ch1;
                            if(e.compare(str2)==0){
                                getline(f6,e,' ');
                                f5<<e<<ch1;
                                f5<<str1<<ch1;

}}}                     f5.close();
                        f6.close();
                        ifstream f_5("f5.txt");
                        ofstream f_6("wxgroup.txt",ios::trunc);
                        getline(f_5,e);
                        f_6<<e;
                        f_6.close();
                        f_5.close();
                        system("del f5.txt");
}

return 0;

}
int Weiboxct::Check_1(){
    int c;
    string e,ch,str,str1,str2;
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
            f2<<' ';
            str=e;
            while(e.compare("apply:")!=0&&f1.eof()==0){
                getline(f1,e,' ');
                f2<<e;
                f2<<ch1;
                if(e.compare(ID)==0){
                    while(e.compare("apply:")!=0){
                            getline(f1,e,' ');
                            f2<<e;
                            f2<<ch1;
                            }
                            getline(f1,e,' ');
                        if(e.compare("qqgroup:")!=0){
                            str1=e;


                            if(e==""){
                                cout<<"There isn't any information."<<endl;
                                break;
                            }
                            str2=str;
                            cout<<"Would you like to add ("<<str1<<") to the group ("<<str<<").Please input '1' to agree or '2' to reject:"<<endl;
                            cin>>c;
                            while(c!=1&&c!=2){
                                cout<<"It is the invalid operation,please input again:"<<endl;
                                cin>>c;
                                }
                            if(c==1){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f1,e,' ');
                                    f2<<e;
                                    f2<<ch1;
                                }
                            cout<<"You have add him to the group("<<str<<")"<<endl;
                                }
                            if(c==2){
                                getline(f1,e,' ');
                                f2<<e;
                                f2<<ch1;
                                cout<<"Have rejected"<<endl;
                                }
                                }
                                }
}}}
                    f1.close();
                    f2.close();
                    ifstream f_22("f2.txt");
                    ofstream f_11("wbmanager.txt",ios::trunc);
                    getline(f_22,e);
                    f_11<<e;
                    f_11.close();
                    f_22.close();
                    system("del f2.txt");
                if(c==1){
                        ofstream f_1("f_1.txt");
                        ifstream f_2("weibo.txt");
                        while(f_2.eof()==0){
                            getline(f_2,e,' ');
                            f_1<<e;
                            f_1<<ch1;
                            if(e.compare("IDandPassword")==0){
                                getline(f_2,e,' ');
                                f_1<<e;
                                f_1<<ch1;
                            if(e.compare(str1)==0){
                                while(e.compare("qqgroup:")!=0){
                                    getline(f_2,e,' ');
                                    f_1<<e;
                                    f_1<<ch1;
                                    }
                                    f_1<<str2<<ch1;
}}}
                    f_1.close();
                    f_2.close();
                    ifstream f3("f_1.txt");
                    ofstream f4("weibo.txt",ios::trunc);
                    getline(f3,e);
                    f4<<e;
                    f3.close();
                    f4.close();
                    system("del f_1.txt");
                    ifstream f6("wbgroup.txt");
                    ofstream f5("f5.txt");
                    while(f6.eof()==0){
                        getline(f6,e,' ');
                        f5<<e<<ch1;
                        if(e.compare("qqgroup:")==0){
                            getline(f6,e,' ');
                            f5<<e<<ch1;
                            if(e.compare(str2)==0){
                                getline(f6,e,' ');
                                f5<<e<<ch1;
                                f5<<str1<<ch1;

}}}                     f5.close();
                        f6.close();
                        ifstream f_5("f5.txt");
                        ofstream f_6("wbgroup.txt",ios::trunc);
                        getline(f_5,e);
                        f_6<<e;
                        f_6.close();
                        f_5.close();
                        system("del f5.txt");
}
return 0;
}


