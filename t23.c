#include<stdio.h>

#define student 100
//ÿ��ѧУ���¼ȡ������
#define school_max 2
//ѧУ����
#define school_num 5 
 
int school_yiluqu[school_num]={0};
int bianhao[student],chengji[student];
int zhiyuan1[student],zhiyuan2[student];
char name[student][10];
int flag[student];
//flag==1  ��¼ȡ 
//flag==0 δ¼ȡ 
int yiluqu[student];


void standby()
{
	int i;
	for(i=0;i<student;i++)
 	{
 		flag[i]=-1;
 		yiluqu[i]=0;
	 	bianhao[i]=0;
	 }
}

void dayin()
{
	printf("************************************************************************************************************************\n\n");
	printf("%10s%10s%10s%10s%10s\n","���","����","�ɼ�","��һ־Ը","�ڶ�־Ը");
	int i;
	for(i=0;i<student;i++)
 	{
 		if(bianhao[i])
 			printf("%10d%10s%10d%10d%10d\n",bianhao[i],name[i],chengji[i],zhiyuan1[i],zhiyuan2[i]);
 	}
	 printf("\n************************************************************************************************************************\n\n");
}

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
	printf("�ɼ���");
	scanf("%d",&chengji[bh]);
	printf("��һ־Ը��ţ�");
	scanf("%d",&zhiyuan1[bh]);
	printf("�ڶ�־Ը��ţ�");
	scanf("%d",&zhiyuan2[bh]);
	printf("\n************************************************************************************************************************\n\n");	
}

void change()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("��ţ�");
	scanf("%d",&bh);
	if(bianhao[bh]==0)
	{
		printf("\n��Ų�����\n");
		return ;
	}
	bianhao[bh]=bh;
	printf("������");
	scanf("%s",&name[bh]);
	printf("�ɼ���");
	scanf("%d",&chengji[bh]);
	printf("��һ־Ը��ţ�");
	scanf("%d",&zhiyuan1[bh]);
	printf("�ڶ�־Ը��ţ�");
	scanf("%d",&zhiyuan2[bh]);
	printf("\n************************************************************************************************************************\n\n");	
}

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
	printf("%10s%10s%10s%10s%10s","���","����","�ɼ�","��һ־Ը","�ڶ�־Ը");
	printf("%10d%10s%10d%10d%10d",bianhao[i],name[i],chengji[i],zhiyuan1[i],zhiyuan2[i]);
 	printf("\n************************************************************************************************************************\n\n");
}

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

void luqu()
{
	printf("************************************************************************************************************************\n\n");
	
	int i,j,max,max_name;	
	for(i=0;i<student;i++)
 	{
 		flag[i]=-1;
 		yiluqu[i]=0;
	 }
	//�Թؼ���fenshu������ 
	//max---0............student-1---min

	for(i=0;i<student;i++)//������ 
	{
		max=0;max_name=0;
		for(j=0;j<student;j++)
		{
			if(chengji[j]>max&&flag[j]==-1)
			{
				max=chengji[j];
				max_name=j;
			}
		}
		//printf("%d %d",max_name ,i);
		flag[max_name]=i;
	}
	//¼ȡ��һ־Ը
	for(i=0;i<student;i++)
	{
		for(j=0;j<student;j++)
		{
			if(bianhao[i]&&flag[j]==i&&yiluqu[j]==0&&school_yiluqu[zhiyuan1[j]]<school_max)
			{
				yiluqu[j]=1;//��¼ȡ 
				school_yiluqu[j]++;//���������� 
				printf("%10s%10s%10d\n","��һ־Ը",name[j],chengji[j]);
			}
		}
	}
	//¼ȡ�ڶ�־Ը
	for(i=0;i<student;i++)
	{
		for(j=0;j<student;j++)
		{
			if(bianhao[i]&&flag[j]==i&&yiluqu[j]==0&&school_yiluqu[zhiyuan2[j]]<school_max)
			{
				yiluqu[j]=1;//��¼ȡ 
				school_yiluqu[j]++;//���������� 
				printf("%10s%10s%10d\n","�ڶ�־Ը",name[j],chengji[j]);
			}
		}
	}
	//δ¼ȡ
	printf("δ¼ȡ\n");
	for(i=0;i<student;i++)
	{
		if(yiluqu[i]==0&&bianhao[i])
		{
			printf("%10s%10d\n",name[i],chengji[j]);
		}
	 } 

	printf("\n************************************************************************************************************************\n\n");

}
 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("�п��ɼ�����ϵͳ\n\n");
 	printf("\t\t0\t�޸�\n");
	printf("\t\t1\t���\n");
	printf("\t\t2\tɾ��\n");
	printf("\t\t3\t����\n");
	printf("\t\t4\t��ӡ\n");
	printf("\t\t5\t¼ȡ����\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("������������\n");
 }
 
 
 
int main()
{
	standby();
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
				change();
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
			case 4:
				dayin();
				break;
			case 5:
				luqu();
				break; 
		}
		system("pause");
	}
	return 0;
 } 
