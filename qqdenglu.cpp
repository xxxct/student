#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<stdlib.h>
using namespace std;
int qqdenglu(){
    string str1,str2,str3,str4,line1,line2,line3;
    int qq=0,ww=0;
    bool flag;
    flag=true;
    cout<<"                    Welcome to log in to qq"<<endl<<endl;
    while(flag){
        cout<<"Please input you ID"<<"                    ID:";
        cin>>str1;
        cout<<"Please input you password"<<"        Password:";
        cin>>str2;
        ifstream f1("f1.txt");
        if(f1.fail()){
            cout<<"something wrong"<<endl;
            return 0
            ;
            }
        getline(f1,line3,' ');
        while(line3.compare("IDandPassword")!=0&&f1.eof()==0)
            getline(f1,line3,' ');
            getline(f1,line1,' ');
            getline(f1,line2,' ');
            if(line1.compare(str1)==0&&line2.compare(str2)==0){
                cout<<endl<<"                           Log in successfully!!!"<<endl<<endl;
                flag=false;
                break;
                }
            while(line1.compare(str1)!=0&&line2.compare(str2)!=0&&f1.eof()==0){
                    getline(f1,line3,' ');
                while(line3.compare("IDandPassword")!=0&&f1.eof()==0){
                    getline(f1,line3,' ');
                    }
                if(f1.eof()==0){
                    getline(f1,line1,' ');
                    getline(f1,line2,' ');
                }
                }
                if(line2.compare(str1)==0){cout<<"6";}
            if(line1.compare(str1)==0&&line2.compare(str2)==0){
                cout<<endl<<"                         Log in successfully!!!"<<endl<<endl;
                flag=false;
                break;
                }
            f1.close();
            cout<<"ID or Password is wrong!!!"<<endl<<endl;

        }
        qqxct s1(str1);
        ifstream f2("qqע��΢�����.txt");
        while(f2.eof()==0){
            getline(f2,str3,' ');
        if(str3.compare(str1)==0){
            cout<<"Ĭ��΢�ŵ�¼"<<endl;/*΢�Ź��캯��*/
            qq=1;
            getline(f2,str3,' ');
            break;
        }}
        f2.close();
        ifstream f3("΢��ע��΢�����.txt");
        while(f3.eof()==0){
            getline(f3,str4,' ');
            if(str4==str1){
                cout<<"Ĭ��΢����¼"<<endl;
                ww=1;
                break;
        }
}
            cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
    int n;
    cin>>n;
    while(!cin){
        cin.clear();
        cin.ignore(1024,'\n');
        cout<<"It's the unvalid operation,please input again."<<endl;
        cin>>n;

    }
    while(n!=10){
        if(n==1){
            s1.output();
            cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
            cin>>n;
            while(!cin){
                cin.clear();
                cin.ignore(1024,'\n');
                cout<<"It's the unvalid operation,please input again."<<endl;
                cin>>n;
}
            }
        if(n==2){
            s1.seek();
             cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
            cin>>n;
             while(!cin){
                cin.clear();
                cin.ignore(1024,'\n');
                cout<<"It's the unvalid operation,please input again."<<endl;
                cin>>n;

    }
}
        if(n==3){
            s1.seek_1();
            cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
            cin>>n;
             while(!cin){
                cin.clear();
                cin.ignore(1024,'\n');
                cout<<"It's the unvalid operation,please input again."<<endl;
                cin>>n;
    }
        }
        if(n==4){
            s1.Check();
             cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
            cin>>n;
             while(!cin){
                cin.clear();
                cin.ignore(1024,'\n');
                cout<<"It's the unvalid operation,please input again."<<endl;
                cin>>n;
    }
        }
        if(n==5){
            s1.Check_1();
            cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
            cin>>n;
             while(!cin){
            cin.clear();
            cin.ignore(1024,'\n');
            cout<<"It's the unvalid operation,please input again."<<endl;
            cin>>n;
    }
        }
        if(n==6){
            s1.CN();
            cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
            cin>>n;
             while(!cin){
                cin.clear();
                cin.ignore(1024,'\n');
                cout<<"It's the unvalid operation,please input again."<<endl;
                cin>>n;
    }
}
        if(n==7){
            if(qq!=1)
                cout<<"΢��δע��"<<endl;
            if(ww!=1)
                cout<<"΢��δע��"<<endl;
            if(qq==1){
                    qqxct s1(str1);
                    int i,v,n1=0,n2=0,p=0;
                    string str11,str22;
                    Weixinxct s2(str3);
                    while(s1.friend1[n1].size()!=0)
                        n1++;
                    while(s2.friend1[n2].size()!=0)
                        n2++;
                    for(v=0;v<n2;v++){
                            ifstream f1("qqע��΢�����.txt");
                            while(f1.eof()==0){
                                    getline(f1,str11,' ');
                                    getline(f1,str22,' ');
                                    if(str22==s2.friend1[v]){
                                            p=0;
                                        for(i=0;i<n1;i++){
                                            if(str11==s1.friend1[i])
                                                p++;
                                        }
                                        if(p==0)
                                            cout<<"        Recommend friend��΢�ţ�:"<<str11<<endl;

                                        }}
                                        f1.close();
                                        }}

            if(ww==1){
                    qqxct s1(str1);
                    int i,v,n1=0,n3=0,p=0;
                    Weiboxct s3(str1);
                    while(s1.friend1[n1].size()!=0)
                        n1++;
                    while(s3.friend1[n3].size()!=0)
                        n3++;
                    for(v=0;v<n3;v++){
                           p=0;
                            for(i=0;i<n1;i++){
                                if(s1.friend1[i]==s3.friend1[v])
                                    p++;
                                }
                                if(p==0)
                                    cout<<"         Recommend friend��΢����:"<<s3.friend1[v]<<endl;
                                }}
            cout<<endl<<"                          1.Personal information"<<endl<<"                          2.The list of friends"<<endl<<"                          3.The list of group"<<endl<<"                          4.Check the information(friend)"<<endl<<"                          5.Check the information(group)"<<endl<<"                          6.Change the Nickname"<<endl<<"                          7.Look for the recommend friends"<<endl<<"                          10.Log out"<<endl;
            cin>>n;
             while(!cin){
                cin.clear();
                cin.ignore(1024,'\n');
                cout<<"It's the unvalid operation,please input again."<<endl;
                cin>>n;

    }
        }
    }
        return 0;
}
