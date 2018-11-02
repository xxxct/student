#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
int qqdenglu();
int weixindenglu();
int weibodenglu();
using namespace std;
int main(){
    string n;
    cout<<"                          Please choice to register or log on"<<endl;
    cout<<"                          1.Register account    2.Log on"<<endl;
    cin>>n;
    while(n!="1"&&n!="2"){
            cout<<"It is the unvlalid operation.Please chooice again"<<endl;
            cin>>n;
        }
    if(n=="1"){
            cout<<"                            1.qq  2.weixin"<<endl;
            cin>>n;
            while(n!="1"&&n!="2"){
                cout<<"It is the unvlalid operation.Please chooice again"<<endl;
                cin>>n;
                }
            if(n=="1"){
                int i=0;
                string str1,str2;
                cout<<"Please input your ID:"<<endl;
                cin>>str1;
                ofstream f3("qq注册情况.txt");/*?????*/
                ofstream f4("f1.txt",ios::app);
                f3<<' '<<str1;
                f4<<' '<<"IDandPassword"<<' '<<str1;
                cout<<"Please input your Password:"<<endl;
                cin>>str1;
                f4<<' '<<str1;
                cout<<"Please input your Nickname:"<<endl;
                cin>>str1;
                f4<<' '<<"nickname:"<<' '<<str1;
                cout<<"Please input your birthday:"<<endl;
                cin>>str1;
                f4<<' '<<str1<<' '<<"0 year";
                cout<<"Please input your place:"<<endl;
                cin>>str1;
                f4<<' '<<str1<<' '<<"qqfriend???:"<<' '<<"friend:"<<' '<<"qqgroup:";
                f3.close();
                f4.close();
                 cout<<"Register successfully!"<<endl;
                }

            if(n=="2"){
                int i=0;
                string str1,str2;
                cout<<"Please input your ID:"<<endl;
                cin>>str1;
                ofstream f4("weixin.txt",ios::app);
                f4<<' '<<"IDandPassword"<<' '<<str1;
                cout<<"Please input your Password:"<<endl;
                cin>>str1;
                f4<<' '<<str1;
                cout<<"Please input your Nickname:"<<endl;
                cin>>str1;
                f4<<' '<<"nickname:"<<' '<<str1;
                cout<<"Please input your birthday:"<<endl;
                cin>>str1;
                f4<<' '<<str1<<' '<<"0 year";
                cout<<"Please input your place:"<<endl;
                cin>>str1;
                f4<<' '<<str1<<' '<<"qqfriend???:"<<' '<<"friend:"<<' '<<"qqgroup:";
                f4.close();
                cout<<"Register successfully!"<<endl;
            }

    return 0;
    }



    if(n=="2"){
        cout<<endl<<"                          please choice your way to log on:"<<endl<<endl<<"                          1.qq  2.weixin  3.weibo"<<endl<<endl;
        cin>>n;
        while(n!="1"&&n!="2"&&n!="3"){
            cout<<"It is the unvlalid operation.Please chooice again"<<endl;
            cin>>n;
        }
        if(n=="1")
            qqdenglu();
        if(n=="2")
            weixindenglu();
        if(n=="3")
            weibodenglu();
    }
    return 0;
}
