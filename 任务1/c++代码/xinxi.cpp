//李杨悦 xinxi.cpp

#include"xinxi.h"
void xinxi::chuangjian(xinxi student[],int n)//创建函数
{
	cout<<"请输入信息"<<endl<<"学号";
	cin>>student[n].number;
	cout<<"姓名:";
	cin>>student[n].name;
    cout<<"性别：";
	cin>>student[n].sex;
	cout<<"年龄：";
	cin>>student[n].age;
	cout<<"班级：";
	cin>>student[n].Class;
	cout<<"学院";
	cin>>student[n].xueyuan;
	cout<<"专业";
	cin>>student[n].zhuanye;
}


void xinxi::add(xinxi student[],int n)//添加函数
{
	cout<<"请输入信息"<<endl<<"学号";
	cin>>student[n].number;
	cout<<"姓名:";
	cin>>student[n].name;
    cout<<"性别：";
	cin>>student[n].sex;
	cout<<"年龄：";
	cin>>student[n].age;
	cout<<"班级：";
	cin>>student[n].Class;
	cout<<"学院";
	cin>>student[n].xueyuan;
	cout<<"专业";
	cin>>student[n].zhuanye;
}


int xinxi::acquire_number(xinxi student[],int n,int a)//获取函数
{
	int index=-1;
	for(int i=0;i<n;i++)
		if(student[i].number==a)
			index=i;
	return index;
}


void xinxi::display(xinxi student[],int n)//显示函数
{
	cout<<"学号:"<<student[n].number<<endl;
	cout<<"姓名:"<<student[n].name<<endl;
	cout<<"性别:"<<student[n].sex<<endl;
	cout<<"年龄:"<<student[n].age<<endl;
	cout<<"班级:"<<student[n].Class<<endl;
	cout<<"学院:"<<student[n].xueyuan<<endl;
	cout<<"专业:"<<student[n].zhuanye<<endl;
}


int xinxi::acquire_banji(xinxi student[],int n,int q)//获取班级
{
	int index=-1;
	for(int i=0;i<n;i++)
		if(student[i].Class==q)
			index=i;
	return index;
}


int xinxi::acquire_zhuanye(xinxi student[],int n,string major)//获取专业
{
	int index=-1;
	for(int i=0;i<n;i++)
		if(student[i].zhuanye==major)
			index=i;
	return index;
}


void xinxi::in(xinxi student[],int n)//导入信息函数
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


void xinxi::out(xinxi student[],int n)//导出信息函数
{
	ofstream outfile("D://112.txt",ios::out);
	if(!outfile)
	{
		cerr<<"open error!";
		exit (1);
    }
    for(int i=0;i<n;i++)
	{
		outfile<<"学号："<<student[i].number<<endl;
		outfile<<"姓名："<<student[i].name;
		outfile<<"性别:"<<student[i].sex;
		outfile<<"年龄："<<student[i].age;
		outfile<<"班级："<<student[i].Class;
		outfile<<"学院："<<student[i].xueyuan;
		outfile<<"专业："<<student[i].zhuanye<<endl;
	}
	outfile.close();

}

