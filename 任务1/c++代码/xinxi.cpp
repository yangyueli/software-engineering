//������ xinxi.cpp

#include"xinxi.h"
void xinxi::chuangjian(xinxi student[],int n)//��������
{
	cout<<"��������Ϣ"<<endl<<"ѧ��";
	cin>>student[n].number;
	cout<<"����:";
	cin>>student[n].name;
    cout<<"�Ա�";
	cin>>student[n].sex;
	cout<<"���䣺";
	cin>>student[n].age;
	cout<<"�༶��";
	cin>>student[n].Class;
	cout<<"ѧԺ";
	cin>>student[n].xueyuan;
	cout<<"רҵ";
	cin>>student[n].zhuanye;
}


void xinxi::add(xinxi student[],int n)//��Ӻ���
{
	cout<<"��������Ϣ"<<endl<<"ѧ��";
	cin>>student[n].number;
	cout<<"����:";
	cin>>student[n].name;
    cout<<"�Ա�";
	cin>>student[n].sex;
	cout<<"���䣺";
	cin>>student[n].age;
	cout<<"�༶��";
	cin>>student[n].Class;
	cout<<"ѧԺ";
	cin>>student[n].xueyuan;
	cout<<"רҵ";
	cin>>student[n].zhuanye;
}


int xinxi::acquire_number(xinxi student[],int n,int a)//��ȡ����
{
	int index=-1;
	for(int i=0;i<n;i++)
		if(student[i].number==a)
			index=i;
	return index;
}


void xinxi::display(xinxi student[],int n)//��ʾ����
{
	cout<<"ѧ��:"<<student[n].number<<endl;
	cout<<"����:"<<student[n].name<<endl;
	cout<<"�Ա�:"<<student[n].sex<<endl;
	cout<<"����:"<<student[n].age<<endl;
	cout<<"�༶:"<<student[n].Class<<endl;
	cout<<"ѧԺ:"<<student[n].xueyuan<<endl;
	cout<<"רҵ:"<<student[n].zhuanye<<endl;
}


int xinxi::acquire_banji(xinxi student[],int n,int q)//��ȡ�༶
{
	int index=-1;
	for(int i=0;i<n;i++)
		if(student[i].Class==q)
			index=i;
	return index;
}


int xinxi::acquire_zhuanye(xinxi student[],int n,string major)//��ȡרҵ
{
	int index=-1;
	for(int i=0;i<n;i++)
		if(student[i].zhuanye==major)
			index=i;
	return index;
}


void xinxi::in(xinxi student[],int n)//������Ϣ����
{
	ifstream infile("D://112.txt",ios::in);
	if(!infile)
	{
		cerr<<"open error!";
		exit (0);
	}
	char c;
	while((c=infile.get())!=EOF)
	{
	    cout<<c;
	}
	infile.close();
	cout<<endl;
}


void xinxi::out(xinxi student[],int n)//������Ϣ����
{
	ofstream outfile("D://112.txt",ios::out);
	if(!outfile)
	{
		cerr<<"open error!";
		exit (1);
    }
    for(int i=0;i<n;i++)
	{
		outfile<<"ѧ�ţ�"<<student[i].number<<endl;
		outfile<<"������"<<student[i].name;
		outfile<<"�Ա�:"<<student[i].sex;
		outfile<<"���䣺"<<student[i].age;
		outfile<<"�༶��"<<student[i].Class;
		outfile<<"ѧԺ��"<<student[i].xueyuan;
		outfile<<"רҵ��"<<student[i].zhuanye<<endl;
	}
	outfile.close();

}

