#include<stdio.h>

#define user_num 10
#define newspaper_num 5

int user_sum=0;//�������� 
int newspaper_sum=0;//���б�����
 
struct
{
	char name[10];
	int id;
	char tel[20];
	char place[20];
	int  mas[20];//������Ϣ 
	int dingyue_sum;
	int fee;
}users[user_num];

struct
{
	int id;
	char name[20];
	char chubanshe[20];
	int zhouqi;
	int fee;
	char jieshao[30];
	int lei;
	int dingyue;
}newspaper[newspaper_num];


void standby()
{
	int i,j;
	for(i=0;i<user_num;i++)
	{
		users[i].fee =0;
		users[i].id =0;
		users[i].dingyue_sum =0;
	}
	for(i=0;i<newspaper_num;i++)
	{
		newspaper[i].id =0;
		newspaper[i].dingyue =0;
	}
}

void add_user()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("�û���ţ�\n");
	scanf("%d",&bh);
	if(users[bh].id)
	{
		printf("\n����Ѵ���\n");
		return ;
	}
	users[bh].id=bh;
	
	printf("������\n");
	scanf("%s",&users[bh].name);
	
	printf("�绰��\n");
	scanf("%s",&users[bh].tel);
	
	printf("��ַ��\n");
	scanf("%s",&users[bh].place);
	
	
	printf("\n************************************************************************************************************************\n\n");
	
	user_sum++;
}

void add_newspaper()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("������ţ�\n");
	scanf("%d",&bh);
	if(newspaper[bh].id)
	{
		printf("\n����Ѵ���\n");
		return ;
	}
	newspaper[bh].id=bh;
	
	printf("��������\n");
	scanf("%s",&newspaper[bh].name);
	
	printf("�����磺\n");
	scanf("%s",&newspaper[bh].chubanshe);
	
	printf("�������ڣ��£���\n");
	scanf("%d",&newspaper[bh].zhouqi);
	
	printf("���ȱ��ۣ�\n");
	scanf("%d",&newspaper[bh].fee);

	printf("���ݽ��ܣ�\n");
	scanf("%s",&newspaper[bh].jieshao);
	
	printf("�����ţ�\n");
	scanf("%d",&newspaper[bh].lei);
	
	printf("\n************************************************************************************************************************\n\n");
	
	newspaper_sum++;
}

void dingyue()
{
	printf("************************************************************************************************************************\n\n");
	int bh,n,i,sum,us;
	
	printf("�û����룺\n");
	scanf("%d",&us);
	
	sum=users[us].fee ;
	printf("��Ҫ���ֱ�����\n");
	scanf("%d",&i);
	
	while(i)
	{
		printf("������ţ�\n");
		scanf("%d",&bh);
		users[us].mas[users[us].dingyue_sum]=bh;
		newspaper[bh].dingyue ++;
		printf("������\n");
		scanf("%d",&n);
		
		sum+=n*newspaper[bh].fee ;
		users[us].dingyue_sum ++;
		i--;
	 } 
	 
	 printf("��¼�룻\n�ܼ�Ϊ%d\n",sum);
	 users[us].fee=sum;
	
}

void scearch()
{
	printf("************************************************************************************************************************\n\n");
	printf("�������ţ�\n");
	int i;
	scanf("%d",&i);
	if(users[i].id==0)
	{
		printf("\n��Ų�����\n");
		return ;
	}
	printf("%10s%10s\n","����","�ܼ�"); 
	printf("%10s%10d\n",users[i].name ,users[i].fee );
	printf("\n************************************************************************************************************************\n\n");
}

void tongji()
{
	printf("************************************************************************************************************************\n\n");
	int i;
	for(i=0;i<newspaper_num;i++)
	{
		if(newspaper[i].id!=0)
		{
			printf("%10s",newspaper[i].name );
			printf("%s","��������" );
			printf("%d",newspaper[i].dingyue );
		}
	}
	printf("\n************************************************************************************************************************\n\n");
}


 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("�������Ĺ���ϵͳ\n\n");
 	printf("0\t����\n");
	printf("1\t����û�\n");
	printf("2\t��ӱ���\n");
	printf("3\t����\n");
	printf("4\t����ͳ��\n\n");
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
				dingyue();
				break;
			case 1:
				add_user();
				break;
			case 2:
				add_newspaper();
				break;
			case 3:
				scearch();
				break;
			case 4:
				tongji();
				break;
		}
		system("pause");
	}
	return 0;
}
