//李杨悦 xinxi.h

#pragma ince
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class xinxi//信息类
{
public:
	string name,xueyuan,zhuanye;
	int number,age,Class;
	char sex;
	void chuangjian(xinxi student[],int n);//创建函数
	void add(xinxi student[],int n);//添加函数
	int acquire_number(xinxi student[],int n,int m);//获取数字函数
	int acquire_banji(xinxi student[],int n,int q);//获取班级函数
	int acquire_zhuanye(xinxi student[],int n,string m);//获取专业函数
	void display(xinxi student[],int n);//显示函数
	void in(xinxi student[],int n);//导入函数
	void out(xinxi student[],int n); //导出函数
};

