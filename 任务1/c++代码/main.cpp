//������ main.cpp


#include"xinxi.h"
using namespace std;
int main()
{
	int k;
	int j;
	int n=0;
	xinxi student[100],t; 
	while(1)//ѭ�������ж� ���������ѡ�����
	{
        cout<<"��ѡ�������һ����Ŀ"<<endl<<"1 ����"<<endl<<"2 ���"<<endl; 
        cout<<"3 ��ѯ"<<endl<<"4 �޸�"<<endl<<"5 ɾ��"<<endl<<"6 ��ʾ"<<endl;
        cout<<"7 �ļ�����"<<endl<<"8 �ļ�����"<<endl<<"9 �˳�"<<endl<<"��ѡ��"<<endl;
	    cin>>k;
	    if(k==1)//��������
	    {
		    t.chuangjian(student,n);
		    n++;
	    } 
	    if(k==2)//��Ӳ���
	    {
	    	t.add(student,n);
		    n++;
		}
		if(k==3)//��ѯ����
		{
			cout<<"��ѧ�Ų�ѯ�밴1�����༶��רҵ�ۺϲ�ѯ�밴2"<<endl;
			cin>>j;
			if(j==1)
			{
				int a;
				int index;
				cout<<"������Ҫ��ѯ��ѧ��:";
				cin>>a;
				index=t.acquire_number(student,n,a);
				if(index!=-1)
				{
				    cout<<"�����˵���ϢΪ��"<<endl;
				    t.display(student,index);
				}
				else
				{
					cout<<"���޴���"<<endl;
				}
			} 
			if(j==2)
			{
				int a;
				int index;
				cout<<"������Ҫ��ѯ�ı�ţ�" ;
				cin>>a;
				index=t.acquire_banji(student,n,a);
				if(index!=-1)
				{
					int b;
					string zy;
					cout<<"������Ҫ��ѯ��רҵ��";
					cin>>zy;
					b=t.acquire_zhuanye(student,n,zy) ;
					if(b!=-1)
				    {
					   cout<<"�����˵���ϢΪ��"<<endl;
				       t.display(student,b);
				    }
				    else
				    {
				    	cout<<"���޴���"<<endl;
					}
				}
				else
				{
					cout<<"���޴���"<<endl;
				}
			} 
		}
		if(k==4)//�޸Ĳ���
		{
			int a;
			int b;
			int i;
			int index;
			cout<<"��������Ҫ�޸���ѧ�ţ�";
			cin>>a;
			i=t.acquire_number(student,n,a);
			cout<<"�������޸ĺ�ѧ��:";
			cin>>b;
			student[i].number=b;
			t.display(student,i);
		}
		if(k==5)//ɾ������
		{
			int a;
			int i;
			cout<<"������Ҫɾ����ѧ��:";
			cin>>a;
			i=t.acquire_number(student,n,a);
			student[i]=student[i+1];
			n--;
		}
		if(k==6)//��ʾ
		{
			for(int i=0;i<n;i++)
			{ 
			   cout<<"��"<<i+1<<"��ͬѧ��ϢΪ��"<<endl; 
			   t.display(student,i);
		    }
		} 
		if(k==7)//�ļ�����
		{
			t.in(student,n);
		}
		if(k==8)//�ļ�����
		{
			t.out(student,n);
		}
	    if(k==9)//�˳�
	        break;
    }  
    return 0;
}

