#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
#ifndef BASICXCT
#define BASICXCT
class Basicxct{
public:
    virtual void output()=0;
    virtual void seek()=0;
    virtual void seek_1()=0;
    virtual int Delete(string)=0;
    virtual int Add(string)=0;
    virtual int Add_1(string,string)=0;
    virtual int Delete_1(string,string)=0;
    virtual int Check()=0;
    virtual int Check_1()=0;
    virtual int groupT(int)=0;
    virtual int groupA(int)=0;
    virtual void CN()=0;
    string ID;
    string name;
    string birth;
    string T;
    string place;
    string friend1[100];
    string group[100];
};
#endif
class qqxct:public Basicxct{
public:
    qqxct(string ID=0);
    virtual void output();
    virtual void seek();
    virtual void seek_1();
    virtual int Delete(string);
    virtual int Add(string);
    virtual int Add_1(string,string);
    virtual int Delete_1(string,string);
    virtual int Check();
    virtual int Check_1();
    virtual int groupT(int);
    virtual int groupA(int);
    virtual void CN();
};
class Weiboxct:public Basicxct{
public:
    Weiboxct(string ID=0);
    virtual void output();
    virtual void seek();
    virtual void seek_1();
    virtual int Delete(string);
    virtual int Add(string);
    virtual int Add_1(string,string);
    virtual int Delete_1(string,string);
    virtual int Check();
    virtual int Check_1();
    virtual int groupT(int);
    virtual int groupA(int);
    virtual void CN();
    };
class Weixinxct:public Basicxct{
public:
    Weixinxct(string ID1=0);
    virtual void output();
    virtual void seek();
    virtual void seek_1();
    virtual int Delete(string);
    virtual int Add(string);
    virtual int Add_1(string,string);
    virtual int Delete_1(string,string);
    virtual int Check();
    virtual int Check_1();
    virtual int groupT(int);
    virtual int groupA(int);
    virtual void CN();
    string ID1;
};

