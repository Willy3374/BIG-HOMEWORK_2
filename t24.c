#include<stdio.h>

#define user_num 10
#define newspaper_num 5

int user_sum=0;//已有人数 
int newspaper_sum=0;//已有报刊数
 
struct
{
	char name[10];
	int id;
	char tel[20];
	char place[20];
	int  mas[20];//订阅信息 
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
	printf("用户编号：\n");
	scanf("%d",&bh);
	if(users[bh].id)
	{
		printf("\n编号已存在\n");
		return ;
	}
	users[bh].id=bh;
	
	printf("姓名：\n");
	scanf("%s",&users[bh].name);
	
	printf("电话：\n");
	scanf("%s",&users[bh].tel);
	
	printf("地址：\n");
	scanf("%s",&users[bh].place);
	
	
	printf("\n************************************************************************************************************************\n\n");
	
	user_sum++;
}

void add_newspaper()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("报刊编号：\n");
	scanf("%d",&bh);
	if(newspaper[bh].id)
	{
		printf("\n编号已存在\n");
		return ;
	}
	newspaper[bh].id=bh;
	
	printf("报刊名：\n");
	scanf("%s",&newspaper[bh].name);
	
	printf("出版社：\n");
	scanf("%s",&newspaper[bh].chubanshe);
	
	printf("出版周期（月）：\n");
	scanf("%d",&newspaper[bh].zhouqi);
	
	printf("季度报价：\n");
	scanf("%d",&newspaper[bh].fee);

	printf("内容介绍：\n");
	scanf("%s",&newspaper[bh].jieshao);
	
	printf("分类编号：\n");
	scanf("%d",&newspaper[bh].lei);
	
	printf("\n************************************************************************************************************************\n\n");
	
	newspaper_sum++;
}

void dingyue()
{
	printf("************************************************************************************************************************\n\n");
	int bh,n,i,sum,us;
	
	printf("用户代码：\n");
	scanf("%d",&us);
	
	sum=users[us].fee ;
	printf("需要几种报刊：\n");
	scanf("%d",&i);
	
	while(i)
	{
		printf("报刊编号：\n");
		scanf("%d",&bh);
		users[us].mas[users[us].dingyue_sum]=bh;
		newspaper[bh].dingyue ++;
		printf("数量：\n");
		scanf("%d",&n);
		
		sum+=n*newspaper[bh].fee ;
		users[us].dingyue_sum ++;
		i--;
	 } 
	 
	 printf("已录入；\n总价为%d\n",sum);
	 users[us].fee=sum;
	
}

void scearch()
{
	printf("************************************************************************************************************************\n\n");
	printf("请输入编号：\n");
	int i;
	scanf("%d",&i);
	if(users[i].id==0)
	{
		printf("\n编号不存在\n");
		return ;
	}
	printf("%10s%10s\n","姓名","总价"); 
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
			printf("%s","的销售量" );
			printf("%d",newspaper[i].dingyue );
		}
	}
	printf("\n************************************************************************************************************************\n\n");
}


 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("报刊订阅管理系统\n\n");
 	printf("0\t订阅\n");
	printf("1\t添加用户\n");
	printf("2\t添加报刊\n");
	printf("3\t查找\n");
	printf("4\t销售统计\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("请输入命令编号\n");
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
