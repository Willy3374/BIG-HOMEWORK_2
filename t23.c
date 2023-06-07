#include<stdio.h>

#define student 100
//每个学校最多录取的人数
#define school_max 2
//学校数量
#define school_num 5 
 
int school_yiluqu[school_num]={0};
int bianhao[student],chengji[student];
int zhiyuan1[student],zhiyuan2[student];
char name[student][10];
int flag[student];
//flag==1  已录取 
//flag==0 未录取 
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
	printf("%10s%10s%10s%10s%10s\n","编号","姓名","成绩","第一志愿","第二志愿");
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
	printf("编号：");
	scanf("%d",&bh);
	if(bianhao[bh])
	{
		printf("\n编号已存在\n");
		return ;
	}
	bianhao[bh]=bh;
	printf("姓名：");
	scanf("%s",&name[bh]);
	printf("成绩：");
	scanf("%d",&chengji[bh]);
	printf("第一志愿编号：");
	scanf("%d",&zhiyuan1[bh]);
	printf("第二志愿编号：");
	scanf("%d",&zhiyuan2[bh]);
	printf("\n************************************************************************************************************************\n\n");	
}

void change()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("编号：");
	scanf("%d",&bh);
	if(bianhao[bh]==0)
	{
		printf("\n编号不存在\n");
		return ;
	}
	bianhao[bh]=bh;
	printf("姓名：");
	scanf("%s",&name[bh]);
	printf("成绩：");
	scanf("%d",&chengji[bh]);
	printf("第一志愿编号：");
	scanf("%d",&zhiyuan1[bh]);
	printf("第二志愿编号：");
	scanf("%d",&zhiyuan2[bh]);
	printf("\n************************************************************************************************************************\n\n");	
}

void search()
{
	printf("************************************************************************************************************************\n\n");
	printf("请输入编号：\n");
	int i;
	scanf("%d",&i);
	if(bianhao[i]==0)
	{
		printf("\n编号不存在\n");
		return ;
	}
	printf("%10s%10s%10s%10s%10s","编号","姓名","成绩","第一志愿","第二志愿");
	printf("%10d%10s%10d%10d%10d",bianhao[i],name[i],chengji[i],zhiyuan1[i],zhiyuan2[i]);
 	printf("\n************************************************************************************************************************\n\n");
}

void delet()
{
	printf("************************************************************************************************************************\n\n");
	int bh;
	printf("要删除的编号：");
	scanf("%d",&bh);
	if(bianhao[bh]==0)
	{
		printf("\n编号不存在\n");
		return ;
	}
	bianhao[bh]=0;
	printf("删除成功\n"); 
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
	//以关键字fenshu降序编号 
	//max---0............student-1---min

	for(i=0;i<student;i++)//分配编号 
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
	//录取第一志愿
	for(i=0;i<student;i++)
	{
		for(j=0;j<student;j++)
		{
			if(bianhao[i]&&flag[j]==i&&yiluqu[j]==0&&school_yiluqu[zhiyuan1[j]]<school_max)
			{
				yiluqu[j]=1;//已录取 
				school_yiluqu[j]++;//计数器自增 
				printf("%10s%10s%10d\n","第一志愿",name[j],chengji[j]);
			}
		}
	}
	//录取第二志愿
	for(i=0;i<student;i++)
	{
		for(j=0;j<student;j++)
		{
			if(bianhao[i]&&flag[j]==i&&yiluqu[j]==0&&school_yiluqu[zhiyuan2[j]]<school_max)
			{
				yiluqu[j]=1;//已录取 
				school_yiluqu[j]++;//计数器自增 
				printf("%10s%10s%10d\n","第二志愿",name[j],chengji[j]);
			}
		}
	}
	//未录取
	printf("未录取\n");
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
 	printf("中考成绩管理系统\n\n");
 	printf("\t\t0\t修改\n");
	printf("\t\t1\t添加\n");
	printf("\t\t2\t删除\n");
	printf("\t\t3\t查找\n");
	printf("\t\t4\t打印\n");
	printf("\t\t5\t录取名单\n\n");
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
