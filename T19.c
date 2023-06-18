#include<stdio.h>

#define huanzhe_max 100//患者容量 

int huanzhe_sum;//已有的患者总数 


struct 
{
	int flag;//0为空位,非0则储存编号 
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
 函数：初始化 
 功能：总数归零，标志符置0 
 输入：无
 输出：无 
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
  函数：打印 
 功能：浏览功能 
 输入：无
 输出：总表 
 */
void dayin()
{
	int i,j;	
	printf("************************************************************************************************************************\n\n");
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n\n","编号","患者姓名","性别","入院年","入院月","入院日","所属科室","基本情况","主治医生","病房号","床号","备注"); 
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
 功能：根据编号查找 
 输入：待查找的编号
 输出：相关信息 
 实现：遍历患者 
 */
void search()
{
	int i;
	printf("************************************************************************************************************************\n\n");
	printf("请输入待查找的编号：\n");
	scanf("%d",&i);
	if(huanzhe[i].flag==0)
	{
		printf("\n编号不存在\n");
		return ;
	}
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s","编号","患者姓名","性别","入院年","入院月","入院日","所属科室","基本情况","主治医生","病房号","床号","备注"); 
	printf("\n%10d%10s%10s%10d%10d%10d%10s%10s%10s%10d%10d%10s\n",huanzhe[i].flag,huanzhe[i].name,huanzhe[i].xingbie,huanzhe[i].start_year,huanzhe[i].start_month,huanzhe[i].start_day,huanzhe[i].keshi,huanzhe[i].qingkuang,huanzhe[i].name_doctor,huanzhe[i].room,huanzhe[i].bed,huanzhe[i].beizhu);
	printf("\n************************************************************************************************************************\n\n");
 } 
 /*
 功能：增加患者信息 
 输入：患者信息
 输出：无 
 */
void add()
{
	int bh;	
	printf("************************************************************************************************************************\n\n");
	printf("编号：");
	scanf("%d",&bh);
	if(huanzhe[bh].flag)
	{
		printf("\n编号已存在\n");
		return ;
	}
	huanzhe[bh].flag=bh;
	printf("患者姓名：");
	scanf("%s",&huanzhe[bh].name);
	printf("性别：");
	scanf("%s",&huanzhe[bh].xingbie);
	printf("入院年：");
	scanf("%d",&huanzhe[bh].start_year);
	printf("入院月：");
	scanf("%d",&huanzhe[bh].start_month);
	printf("入院日：");
	scanf("%d",&huanzhe[bh].start_day);
	printf("所属科室：");
	scanf("%s",&huanzhe[bh].keshi);
	printf("基本情况：");
	scanf("%s",&huanzhe[bh].qingkuang);
	printf("主治医生：");
	scanf("%s",&huanzhe[bh].name_doctor);
	printf("病房号：");
	scanf("%d",&huanzhe[bh].room);
	printf("床号：");
	scanf("%d",&huanzhe[bh].bed);
	printf("备注：");
	scanf("%s",&huanzhe[bh].beizhu);
	printf("\n************************************************************************************************************************\n\n");
	
	huanzhe_sum++;	
}



 /*
 功能：删除患者信息 
 输入：患者编号 
 输出：无 
 实现方式：标志位置0 
 */
void delet()
{
	int bh;	
	printf("************************************************************************************************************************\n\n");
	printf("要删除的编号：");
	scanf("%d",&bh);
	if(huanzhe[bh].flag==0)
	{
		printf("\n编号不存在\n\n");
		return ;
	}
	huanzhe[bh].flag=0;
	huanzhe_sum--;
	printf("删除成功\n\n"); 
	printf("\n************************************************************************************************************************\n\n");
}



 /*
 功能：菜单界面
 输入：无
 输出：无 
 */
 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("\t医院住院部患者信息管理系统\n\n");
	printf("\t1\t添加人员\n");
	printf("\t2\t删除人员\n");
	printf("\t3\t查找\n");
 	printf("\t4\t打印总表\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("\t\n请输入命令编号\n");
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
