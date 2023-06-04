#include<stdio.h>

#define people_num 100
#define keshi_num	5
#define year_now 2023

int people_sum=0;
int bianhao[people_num],keshi[keshi_num],year_start[people_num];
double pay_basic[people_num];
char name[people_num][10];
int shudian[people_num];
double xili[people_num],shubao[people_num],jintie[people_num],shuidian[people_num];
char beizhu[people_num][1000];

double pay_shifa(int bh);
double pay_yingde(int bh);
double pay_add(int bh);


/*
 ���ܣ���ʼ�� 
 ���룺��
 ������� 
 */
void sandby()
{
	int i;
	for(i=0;i<people_num;i++)
 	{
	 	bianhao[i]=0;
	 }
}
/*
 ���ܣ���ӡ�ܱ� 
 ���룺��
 ������� 
 */
void dayin()
{
	printf("************************************************************************************************************************\n\n");
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","���","����","���Ҵ���","�μӹ���","��������","���䲹��","ϴ���","�鱨��","��λ����","Ӧ�ù���","ˮ���","ʵ������","��ע"); 
 	int i,j;
 	for(i=0;i<people_num;i++)
 	{
 		if(bianhao[i])
 			printf("%10d%10s%10d%10d%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10s\n",bianhao[i],name[i],keshi[i],year_start[i],pay_basic[i],pay_add(i),xili[i],shubao[i],jintie,pay_yingde(i),shuidian[i],pay_shifa(i),beizhu[i]);
	 }
	 printf("\n************************************************************************************************************************\n\n");
 } 
 
 
 /*
 ���ܣ����� 
 ���룺��
 ������� 
 */
void search()
{
	printf("************************************************************************************************************************\n\n");
	printf("�������ţ�\n");
	int i;
	scanf("%d",&i);
	if(bianhao[i]==0)
	{
		printf("\n��Ų�����\n");
		return ;
	}
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","���","����","���Ҵ���","�μӹ���","��������","���䲹��","ϴ���","�鱨��","��λ����","Ӧ�ù���","ˮ���","ʵ������","��ע"); 
	printf("%10d%10s%10d%10d%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10s\n",bianhao[i],name[i],keshi[i],year_start[i],pay_basic[i],pay_add(i),xili[i],shubao[i],jintie,pay_yingde(i),shuidian[i],pay_shifa(i),beizhu[i]);
	printf("\n************************************************************************************************************************\n\n");
 } 
 /*
 ���ܣ����� 
 ���룺��
 ������� 
 */
void add()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("��ţ�");
	scanf("%d",&bh);
	if(bianhao[bh])
	{
		printf("\n����Ѵ���\n");
		return ;
	}
	bianhao[bh]=bh;
	
	printf("������");
	scanf("%s",&name[bh]);
	
	printf("���Ҵ��룺");
	scanf("%d",&keshi[bh]);
	
	printf("�μӹ���ʱ�䣺");
	scanf("%d",&year_start[bh]);
	
	printf("�������ʣ�");
	scanf("%lf",&pay_basic[bh]);
	
	printf("ϴ��ѣ�");
	scanf("%lf",&xili[bh]);
	
	printf("�鱨�ѣ�");
	scanf("%lf",&shubao[bh]);
	
	printf("��λ������");
	scanf("%lf",&jintie[bh]);
	
	printf("ˮ��ѣ�");
	scanf("%lf",&shuidian[bh]);
	
	printf("��ע��");
	scanf("%s",&beizhu[bh]);
	
	printf("\n************************************************************************************************************************\n\n");
	
	people_sum++;	
}



 /*
 ���ܣ�ɾ�� 
 ���룺��
 ������� 
 */
void delet()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("Ҫɾ���ı�ţ�");
	scanf("%d",&bh);
	if(bianhao[bh]==0)
	{
		printf("\n��Ų�����\n");
		return ;
	}
	bianhao[bh]=0;
	printf("ɾ���ɹ�\n"); 
	printf("\n************************************************************************************************************************\n\n");
}


/*
���ܣ����㹤�䲹��
���룺 ��� 
��������䲹�� 
*/
double pay_add(int bh)
{
	double sum;
	if(year_now-year_start[bh]<=10)
		sum=(year_now-year_start[bh])*2.5; 
	else
		sum=(year_now-year_start[bh])*10;
	return sum;
}
/*
���ܣ�����Ӧ�ù��� 
���룺 ��� 
�����Ӧ�ù��� 
*/
double pay_yingde(int bh)
{
	double sum;
	sum=pay_basic[bh]+pay_add(bh)+xili[bh]+shubao[bh]+jintie[bh];
	return sum;
}
/*
���ܣ� ����ʵ������ 
���룺 ��� 
�����ʵ������ 
*/
double pay_shifa(int bh)
{
	double sum;
	sum=pay_yingde(bh)-shuidian[bh];
	return sum;
 } 
 
 
 /*
 ���ܣ��˵�����
 ���룺��
 ������� 
 */
 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("���ʹ���ϵͳ\n\n");
 	printf("0\t��ӡ�ܱ�\n");
	printf("1\t�����Ա\n");
	printf("2\tɾ����Ա\n");
	printf("3\t����\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("������������\n");
 }
 
 
 
int main()
{
	sandby();
	while(1)
	{
		int z;
		system("cls");
		menu();
		scanf("%d",&z);
		system("cls");
		switch (z)
		{
			case 0:
				dayin();
				break;
			case 1:
				add();
				break;
			case 2:
				delet();
				break;
			case 3:
				search();
				break;
		}
		system("pause");
	}

	return 0;
}
