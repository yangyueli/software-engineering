//������ xinxi.h

#pragma ince
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class xinxi//��Ϣ��
{
public:
	string name,xueyuan,zhuanye;
	int number,age,Class;
	char sex;
	void chuangjian(xinxi student[],int n);//��������
	void add(xinxi student[],int n);//��Ӻ���
	int acquire_number(xinxi student[],int n,int m);//��ȡ���ֺ���
	int acquire_banji(xinxi student[],int n,int q);//��ȡ�༶����
	int acquire_zhuanye(xinxi student[],int n,string m);//��ȡרҵ����
	void display(xinxi student[],int n);//��ʾ����
	void in(xinxi student[],int n);//���뺯��
	void out(xinxi student[],int n); //��������
};

