#include<stdio.h>

#define huanzhe_max 100//�������� 

int huanzhe_sum;//���еĻ������� 


struct 
{
	int flag;//0Ϊ��λ,��0�򴢴��� 
	char name[10];
	char xingbie[10];
	int start_year;
	int start_month;
	int start_day;
	char keshi[10];
	char qingkuang[100];
	char name_doctor[10];
	int room;
	int bed;
	char beizhu[100];
}huanzhe[huanzhe_max];

/*
 ��������ʼ�� 
 ���ܣ��������㣬��־����0 
 ���룺��
 ������� 
 */
void sandby()
{
	int i;
	huanzhe_sum=0;
	for(i=0;i<huanzhe_max;i++)
	{
		huanzhe[i].flag =0;
	}
}
/*
  ��������ӡ 
 ���ܣ�������� 
 ���룺��
 ������ܱ� 
 */
void dayin()
{
	int i,j;	
	printf("************************************************************************************************************************\n\n");
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n\n","���","��������","�Ա�","��Ժ��","��Ժ��","��Ժ��","��������","�������","����ҽ��","������","����","��ע"); 
 	for(i=0;i<huanzhe_max;i++)
 	{
 		if(huanzhe[i].flag)
 		{
 			printf("%10d%10s%10s%10d%10d%10d%10s%10s%10s%10d%10d%10s",huanzhe[i].flag,huanzhe[i].name,huanzhe[i].xingbie,huanzhe[i].start_year,huanzhe[i].start_month,huanzhe[i].start_day,huanzhe[i].keshi,huanzhe[i].qingkuang,huanzhe[i].name_doctor,huanzhe[i].room,huanzhe[i].bed,huanzhe[i].beizhu);
	 		printf("\n");
	 	}
	 }
		 
 			
	 printf("\n************************************************************************************************************************\n\n");
 } 
 
 
 /*
 ���ܣ����ݱ�Ų��� 
 ���룺�����ҵı��
 ����������Ϣ 
 ʵ�֣��������� 
 */
void search()
{
	int i;
	printf("************************************************************************************************************************\n\n");
	printf("����������ҵı�ţ�\n");
	scanf("%d",&i);
	if(huanzhe[i].flag==0)
	{
		printf("\n��Ų�����\n");
		return ;
	}
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s","���","��������","�Ա�","��Ժ��","��Ժ��","��Ժ��","��������","�������","����ҽ��","������","����","��ע"); 
	printf("\n%10d%10s%10s%10d%10d%10d%10s%10s%10s%10d%10d%10s\n",huanzhe[i].flag,huanzhe[i].name,huanzhe[i].xingbie,huanzhe[i].start_year,huanzhe[i].start_month,huanzhe[i].start_day,huanzhe[i].keshi,huanzhe[i].qingkuang,huanzhe[i].name_doctor,huanzhe[i].room,huanzhe[i].bed,huanzhe[i].beizhu);
	printf("\n************************************************************************************************************************\n\n");
 } 
 /*
 ���ܣ����ӻ�����Ϣ 
 ���룺������Ϣ
 ������� 
 */
void add()
{
	int bh;	
	printf("************************************************************************************************************************\n\n");
	printf("��ţ�");
	scanf("%d",&bh);
	if(huanzhe[bh].flag)
	{
		printf("\n����Ѵ���\n");
		return ;
	}
	huanzhe[bh].flag=bh;
	printf("����������");
	scanf("%s",&huanzhe[bh].name);
	printf("�Ա�");
	scanf("%s",&huanzhe[bh].xingbie);
	printf("��Ժ�꣺");
	scanf("%d",&huanzhe[bh].start_year);
	printf("��Ժ�£�");
	scanf("%d",&huanzhe[bh].start_month);
	printf("��Ժ�գ�");
	scanf("%d",&huanzhe[bh].start_day);
	printf("�������ң�");
	scanf("%s",&huanzhe[bh].keshi);
	printf("���������");
	scanf("%s",&huanzhe[bh].qingkuang);
	printf("����ҽ����");
	scanf("%s",&huanzhe[bh].name_doctor);
	printf("�����ţ�");
	scanf("%d",&huanzhe[bh].room);
	printf("���ţ�");
	scanf("%d",&huanzhe[bh].bed);
	printf("��ע��");
	scanf("%s",&huanzhe[bh].beizhu);
	printf("\n************************************************************************************************************************\n\n");
	
	huanzhe_sum++;	
}



 /*
 ���ܣ�ɾ��������Ϣ 
 ���룺���߱�� 
 ������� 
 ʵ�ַ�ʽ����־λ��0 
 */
void delet()
{
	int bh;	
	printf("************************************************************************************************************************\n\n");
	printf("Ҫɾ���ı�ţ�");
	scanf("%d",&bh);
	if(huanzhe[bh].flag==0)
	{
		printf("\n��Ų�����\n\n");
		return ;
	}
	huanzhe[bh].flag=0;
	huanzhe_sum--;
	printf("ɾ���ɹ�\n\n"); 
	printf("\n************************************************************************************************************************\n\n");
}



 /*
 ���ܣ��˵�����
 ���룺��
 ������� 
 */
 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("\tҽԺסԺ��������Ϣ����ϵͳ\n\n");
	printf("\t1\t�����Ա\n");
	printf("\t2\tɾ����Ա\n");
	printf("\t3\t����\n");
 	printf("\t4\t��ӡ�ܱ�\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("\t\n������������\n");
 }
 
 
 
int main()
{
	int z;	
	sandby();
	while(1)
	{
		system("cls");
		menu();
		scanf("%d",&z);
		system("cls");
		switch (z)
		{
			case 1:
				add();
				break;
			case 2:
				delet();
				break;
			case 3:
				search();
				break;
			case 4:
				dayin();
				break;
		}
		
		system("pause");
	}

	return 0;
}
