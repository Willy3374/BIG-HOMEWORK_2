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
 功能：初始化 
 输入：无
 输出：无 
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
 功能：打印总表 
 输入：无
 输出：无 
 */
void dayin()
{
	printf("************************************************************************************************************************\n\n");
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","编号","姓名","科室代码","参加工作","基本工资","工龄补贴","洗理费","书报费","单位津贴","应得工资","水电费","实发工资","备注"); 
 	int i,j;
 	for(i=0;i<people_num;i++)
 	{
 		if(bianhao[i])
 			printf("%10d%10s%10d%10d%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10s\n",bianhao[i],name[i],keshi[i],year_start[i],pay_basic[i],pay_add(i),xili[i],shubao[i],jintie,pay_yingde(i),shuidian[i],pay_shifa(i),beizhu[i]);
	 }
	 printf("\n************************************************************************************************************************\n\n");
 } 
 
 
 /*
 功能：查找 
 输入：无
 输出：无 
 */
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
	printf("%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","编号","姓名","科室代码","参加工作","基本工资","工龄补贴","洗理费","书报费","单位津贴","应得工资","水电费","实发工资","备注"); 
	printf("%10d%10s%10d%10d%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf%10s\n",bianhao[i],name[i],keshi[i],year_start[i],pay_basic[i],pay_add(i),xili[i],shubao[i],jintie,pay_yingde(i),shuidian[i],pay_shifa(i),beizhu[i]);
	printf("\n************************************************************************************************************************\n\n");
 } 
 /*
 功能：增加 
 输入：无
 输出：无 
 */
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
	
	printf("科室代码：");
	scanf("%d",&keshi[bh]);
	
	printf("参加工作时间：");
	scanf("%d",&year_start[bh]);
	
	printf("基本工资：");
	scanf("%lf",&pay_basic[bh]);
	
	printf("洗理费：");
	scanf("%lf",&xili[bh]);
	
	printf("书报费：");
	scanf("%lf",&shubao[bh]);
	
	printf("单位津贴：");
	scanf("%lf",&jintie[bh]);
	
	printf("水电费：");
	scanf("%lf",&shuidian[bh]);
	
	printf("备注：");
	scanf("%s",&beizhu[bh]);
	
	printf("\n************************************************************************************************************************\n\n");
	
	people_sum++;	
}



 /*
 功能：删除 
 输入：无
 输出：无 
 */
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


/*
功能：计算工龄补贴
输入： 编号 
输出：工龄补贴 
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
功能：计算应得工资 
输入： 编号 
输出：应得工资 
*/
double pay_yingde(int bh)
{
	double sum;
	sum=pay_basic[bh]+pay_add(bh)+xili[bh]+shubao[bh]+jintie[bh];
	return sum;
}
/*
功能： 计算实发工资 
输入： 编号 
输出：实发工资 
*/
double pay_shifa(int bh)
{
	double sum;
	sum=pay_yingde(bh)-shuidian[bh];
	return sum;
 } 
 
 
 /*
 功能：菜单界面
 输入：无
 输出：无 
 */
 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("工资管理系统\n\n");
 	printf("0\t打印总表\n");
	printf("1\t添加人员\n");
	printf("2\t删除人员\n");
	printf("3\t查找\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("请输入命令编号\n");
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
