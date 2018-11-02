#include<iostream>
#include<cstring>
#include"Basic.h"
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;
void qqxct::seek(){
    cout<<"                         The list of friends"<<endl<<endl;
    string str;
    int i,k,n=0,l=0;
    while(friend1[n].size()!=0)
        n++;
    for(i=0;i<n;i++){
        ifstream f1("f1.txt");
        while(f1.eof()==0){
            getline(f1,str,' ');
            if(str.compare("IDandPassword")==0){
                    getline(f1,str,' ');
            if(str.compare(friend1[i])==0){
                    for(;str.compare("nickname:")!=0;)
                            getline(f1,str,' ');
                            getline(f1,str,' ');
                            l++;
                    cout<<"                         "<<l<<"."<<str<<endl;
                }
                }
                }
        f1.close();
}
     cout<<endl<<"0.Input '0' to return the last interface"<<endl<<"1.Choice number to see friend's information"<<endl<<"2.Input '101' to add friends,'102'to delete friends"<<endl;
     cin>>k;
     while(k!=0){
        while(l<k&&k<100){
                cout<<"There aren't so many friends in your list"<<endl<<"Please choice again"<<endl;
                cin>>k;
            }
        if(k==0)
                break;
        if(k>0&&k<=l){
            qqxct s(friend1[k-1]);
            s.output();
            cout<<"Choice the next step"<<endl;
            cin>>k;}
        if(k==102){
                cout<<"Please input the ID you want to delete:";
                string q;
                cin>>q;
                Delete(q);
                cout<<"Choice the next step"<<endl;
                cin>>k;
        }
        if(k==101){
                cout<<"Please input the ID you want to add:";
                string qq;
                cin>>qq;
                Add(qq);
                cout<<"Choice the next step"<<endl;
                cin>>k;
            }

     }

}

void Weiboxct::seek(){
    cout<<"                         The list of friends"<<endl<<endl;
    string str;
    int i,k,n=0,l=0;
    while(friend1[n].size()!=0)
        n++;
    for(i=0;i<n;i++){
        ifstream f1("weibo.txt");
        while(f1.eof()==0){
            getline(f1,str,' ');
            if(str.compare("IDandPassword")==0){
                    getline(f1,str,' ');
            if(str.compare(friend1[i])==0){
                    for(;str.compare("nickname:")!=0;)
                            getline(f1,str,' ');
                            getline(f1,str,' ');
                            l++;
                    cout<<"                         "<<l<<"."<<str<<endl;
                }
                }
                }
        f1.close();
}
     cout<<endl<<"0.Input '0' to return the last interface"<<endl<<"1.Choice number to see friend's information"<<endl<<"2.Input '101' to add friends,'102'to delete friends"<<endl;
     cin>>k;
     while(k!=0){
        while(l<k&&k<100){
                cout<<"There aren't so many friends in your list"<<endl<<"Please choice again"<<endl;
                cin>>k;
            }
        if(k==0)
                break;
        if(k>0&&k<=l){
            Weiboxct s(friend1[k-1]);
            s.output();
            cout<<"Choice the next step"<<endl;
            cin>>k;}
        if(k==102){
                cout<<"Please input the ID you want to delete:";
                string q;
                cin>>q;
                Delete(q);
                cout<<"Choice the next step"<<endl;
                cin>>k;
        }
        if(k==101){
                cout<<"Please input the ID you want to add:";
                string qq;
                cin>>qq;
                Add(qq);
                cout<<"Choice the next step"<<endl;
                cin>>k;
            }

     }

}

void Weixinxct::seek(){
    cout<<"                         The list of friends"<<endl<<endl;
    string str;
    int i,k,n=0,l=0;
    while(friend1[n].size()!=0)
        n++;
    for(i=0;i<n;i++){
        ifstream f1("weixin.txt");
        while(f1.eof()==0){
            getline(f1,str,' ');
            if(str.compare("IDandPassword")==0){
                    getline(f1,str,' ');
            if(str.compare(friend1[i])==0){
                    for(;str.compare("nickname:")!=0;)
                            getline(f1,str,' ');
                            getline(f1,str,' ');
                            l++;
                    cout<<"                         "<<l<<"."<<str<<endl;
                }
                }
                }
        f1.close();
}
     cout<<endl<<"0.Input '0' to return the last interface"<<endl<<"1.Choice number to see friend's information"<<endl<<"2.Input '101' to add friends,'102'to delete friends"<<endl;
     cin>>k;
     while(k!=0){
        while(l<k&&k<100){
                cout<<"There aren't so many friends in your list"<<endl<<"Please choice again"<<endl;
                cin>>k;
            }
        if(k==0)
                break;
        if(k>0&&k<=l){
            Weixinxct s(friend1[k-1]);
            s.output();
            cout<<"Choice the next step"<<endl;
            cin>>k;}
        if(k==102){
                cout<<"Please input the ID you want to delete:";
                string q;
                cin>>q;
                Delete(q);
                cout<<"Choice the next step"<<endl;
                cin>>k;
        }
        if(k==101){
                cout<<"Please input the ID you want to add:";
                string qq;
                cin>>qq;
                Add(qq);
                cout<<"Choice the next step"<<endl;
                cin>>k;
            }

     }

}
