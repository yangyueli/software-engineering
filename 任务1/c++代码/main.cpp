//李杨悦 main.cpp


#include"xinxi.h"
using namespace std;
int main()
{
	int k;
	int j;
	int n=0;
	xinxi student[100],t; 
	while(1)//循环进行判断 并用序号来选择操作
	{
        cout<<"请选择下面的一个项目"<<endl<<"1 创建"<<endl<<"2 添加"<<endl; 
        cout<<"3 查询"<<endl<<"4 修改"<<endl<<"5 删除"<<endl<<"6 显示"<<endl;
        cout<<"7 文件导入"<<endl<<"8 文件导出"<<endl<<"9 退出"<<endl<<"请选择："<<endl;
	    cin>>k;
	    if(k==1)//创建操作
	    {
		    t.chuangjian(student,n);
		    n++;
	    } 
	    if(k==2)//添加操作
	    {
	    	t.add(student,n);
		    n++;
		}
		if(k==3)//查询操作
		{
			cout<<"按学号查询请按1，按班级和专业综合查询请按2"<<endl;
			cin>>j;
			if(j==1)
			{
				int a;
				int index;
				cout<<"请输入要查询的学号:";
				cin>>a;
				index=t.acquire_number(student,n,a);
				if(index!=-1)
				{
				    cout<<"所查人的信息为："<<endl;
				    t.display(student,index);
				}
				else
				{
					cout<<"查无此人"<<endl;
				}
			} 
			if(j==2)
			{
				int a;
				int index;
				cout<<"请输入要查询的编号：" ;
				cin>>a;
				index=t.acquire_banji(student,n,a);
				if(index!=-1)
				{
					int b;
					string zy;
					cout<<"请输入要查询的专业：";
					cin>>zy;
					b=t.acquire_zhuanye(student,n,zy) ;
					if(b!=-1)
				    {
					   cout<<"所查人的信息为："<<endl;
				       t.display(student,b);
				    }
				    else
				    {
				    	cout<<"查无此人"<<endl;
					}
				}
				else
				{
					cout<<"查无此人"<<endl;
				}
			} 
		}
		if(k==4)//修改操作
		{
			int a;
			int b;
			int i;
			int index;
			cout<<"请输入需要修改者学号：";
			cin>>a;
			i=t.acquire_number(student,n,a);
			cout<<"请输入修改后学号:";
			cin>>b;
			student[i].number=b;
			t.display(student,i);
		}
		if(k==5)//删除操作
		{
			int a;
			int i;
			cout<<"请输入要删除的学号:";
			cin>>a;
			i=t.acquire_number(student,n,a);
			student[i]=student[i+1];
			n--;
		}
		if(k==6)//显示
		{
			for(int i=0;i<n;i++)
			{ 
			   cout<<"第"<<i+1<<"名同学信息为："<<endl; 
			   t.display(student,i);
		    }
		} 
		if(k==7)//文件导入
		{
			t.in(student,n);
		}
		if(k==8)//文件导出
		{
			t.out(student,n);
		}
	    if(k==9)//退出
	        break;
    }  
    return 0;
}

