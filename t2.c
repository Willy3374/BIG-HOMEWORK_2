#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100

/*
read me:
用户名：zz
密码：1 

*/ 
struct zhuhu
	{
		char name[10];
		char sex[5];
		char IDcard[20];
		long tel;
		int louhao;
		int dyhao;
		int room;
		int square;
		int sq;
		int price;
		char bz[20];
	}zhu[N];
int number=0;



void menu()
{
	system("cls");
	printf("\n");
	printf("\t\t\t\t***************************\n");
	printf("\t\t\t\t*                         *\n");
	printf("\t\t\t\t*    物业费管理系统       *\n");
	printf("\t\t\t\t*                         *\n");
	printf("\t\t\t\t*    [0].退出程序         *\n");
	printf("\t\t\t\t*    [1].新住户添加       *\n");
	printf("\t\t\t\t*    [2].修改住户信息     *\n");
	printf("\t\t\t\t*    [3].删除住户信息     *\n");
	printf("\t\t\t\t*    [4].物业费生成       *\n");
	printf("\t\t\t\t*    [5].缴费功能         *\n");
	printf("\t\t\t\t*    [6].统计功能(楼号)   *\n");
	printf("\t\t\t\t*    [7].排序(欠款)       *\n");
	printf("\t\t\t\t*                         *\n");
	printf("\t\t\t\t*                         *\n");
	printf("\t\t\t\t***************************\n");
}



void add()
{
	int i=0,k;
	while(1)
		{
			
		printf("请输入第%d个用户的姓名:",i+1);
		scanf("%s",zhu[i].name);
		
		printf("请输入第%d个用户的性别:",i+1);
		scanf("%s",zhu[i].sex);
		
		printf("请输入第%d个用户的身份证号:",i+1);
		scanf("%s",zhu[i].IDcard);
		
		printf("请输入第%d个用户的联系电话:",i+1);
		scanf("%d",&zhu[i].tel);
		
		printf("请输入第%d个用户的楼号:",i+1);
		scanf("%d",&zhu[i].louhao);
		
		printf("请输入第%d个用户的单元号:",i+1);
		scanf("%d",&zhu[i].dyhao);
		
		printf("请输入第%d个用户房号:",i+1);
		scanf("%d",&zhu[i].room);
	
		printf("请输入第%d个用户房间平方米数:",i+1);
		scanf("%d",&zhu[i].square);
	
		printf("请输入第%d个用户每平方米物业价格:",i+1);
		scanf("%d",&zhu[i].sq);
	
		printf("请输入第%d个用户应缴纳物业费用:",i+1);
		scanf("%d",&zhu[i].price);
	
		printf("备注信息:");
	 	scanf("%s",zhu[i].bz);
	 	
	    i++;
		number=i;
		
		printf("是否继续输入？【1---yes   0---no】");
		scanf("%d",&k);
		
		if(k!=0)
			continue;
		else
			break;
	}
}

void revise()
{	
    char b[10];
	int i,k;
	while(1)
	{
		printf("请输入要修改的住户姓名:");
		scanf("%s",b);
	    for(i=0;i<number;i++)
		{
			if(strcmp(b,zhu[i].name)==0)
		     {
				printf("请重新输入该个用户的姓名:");
				scanf("%s",zhu[i].name);
	
				printf("请重新输入该个用户的性别:");
				scanf("%s",zhu[i].sex);
	
				printf("请重新输入该个用户的身份证号:");
				scanf("%s",zhu[i].IDcard);
	
				printf("请重新输入该个用户的联系电话:");
				scanf("%d",&zhu[i].tel);
	
				printf("请重新输入该个用户的楼号:");
				scanf("%d",&zhu[i].louhao);
	
				printf("请重新输入该个用户的单元号:");
				scanf("%d",&zhu[i].dyhao);
	
				printf("请重新输入该个用户的房号:");
				scanf("%d",&zhu[i].room);
	
				printf("请重新输入该个用户的楼房平米数:");
				scanf("%d",&zhu[i].square);
	
				printf("请重新输入该个用户房屋每平米物业价格:");
				scanf("%d",&zhu[i].sq);
	
				printf("请重新输入该个用户应缴纳物业费用:");
				scanf("%d",&zhu[i].price);
	
				printf("请重新输入该个用户的备注:");
				scanf("%s",zhu[i].bz);
			}
			else
			{   printf("该用户不存在!\n");
			    break;
			}
	}
	    printf("是否继续修改？【1---yes   0---no】");
	    scanf("%d",&k);
	if(k!=0)
		continue;
	else
		break;
	}
}

void del()
{
	int i,k,n=0;
	char a[10];
while(1)
{
    	printf("请输入要删除的用户姓名:");
	    scanf("%s",a);
	 for(i=0;i<number;i++)
	{
		if(strcmp(a,zhu[i].name)==0)
		{
			n=1;
		    break;
		}
	 }
	 if(n=0)
		 printf("没有找到该住户!");
	  else
	  {
		 printf("删除成功!\n是否继续删除？【1---yes   0---no】");
	     scanf("%d",&k);
	  } 
	 if(k!=0)
		continue;
	 else
		break;
}
}

void grow()
{
	int i,k;
	char d[10];
	float cost=100;
 while(1)
 {
	printf("请输入您的姓名:");
	scanf("%s",d);
	for(i=0;i<number;i++)
	{
	  if(strcmp(d,zhu[i].name)==0)
	  {
		  cost=zhu[i].square*zhu[i].sq;
		  printf("您应缴纳的实际金额为:%f",cost);
	  }
	  else
	     printf("此用户不存在!\n");
	 } 
	  printf("是否继续查看？ 【1---yes   0---no】");
	   scanf("%d",&k);
     if(k!=0)
		continue;
	 else
		break; 
}
}

void all()
{
	char a[10];
	int b,i,k;
while(1)
{
	printf("请输入要缴纳物业费的用户的姓名:");
	scanf("%s",a);
	 for(i=0;i<number;i++)
	 {
		if(strcmp(a,zhu[i].name)==0)
		{	printf("请输入要缴纳的金额:");
			scanf("%d",&b);
			zhu[i].price=zhu[i].price-b; 
			printf("缴费成功!\n");
			break;
		}
	    else
		   printf("该用户不存在!\n");
	
	 }	
	  printf("是否继续缴纳？ 【1---yes   0---no】");
	   scanf("%d",&k);
     if(k!=0)
		continue;
	 else
		break; 
}  
}             

void tongji()
{
while(1)
{	
	int i,j,k;
		printf("姓名    ");
		printf("性别  ");
		printf("身份证号码          ");
		printf("手机号码     ");
		printf("楼号  ");
		printf("单元号  ");
		printf("房号  ");
		printf("平米数  ");
		printf("每平米价格  ");
		printf("应缴纳物业费  ");
		printf("备注\n");
	for(i=0;i<10;i++)
	{
		printf("第%d栋楼:\n",i);
		for(j=0;j<10;j++)
		{
			if(zhu[j].louhao==i&&zhu[j].price>0)
			{
			printf("%-8s",zhu[j].name);
			printf("%-6s",zhu[j].sex);
			printf("%-20s",zhu[j].IDcard);
			printf("%-14d",zhu[j].tel);
			printf("%-6d",zhu[j].louhao);
			printf("%-8d",zhu[j].dyhao);
			printf("%-6d",zhu[j].room);
			printf("%-8d",zhu[j].square);
			printf("%-12d",zhu[j].sq);
			printf("%-14d",zhu[j].price);
			printf("%-10s",zhu[j].bz);
			printf("\n");
			}
		}
	}
	 printf("是否继续？ 【1---yes   0---no】");
	   scanf("%d",&k);
     if(k!=0)
		continue;
	 else
		break; 
}
}

void paixu()
{
	
	int i,j,k;
	struct zhuhu t;
while(1)
{
	for(j=0;j<number-1;j++)
		for(i=0;i<number-1-j;i++)
		{
			if(zhu[i].price<zhu[i+1].price)
			{
				t=zhu[i];
				zhu[i]=zhu[i+1];
				zhu[i+1]=t;
			}
		}
		printf("姓名    ");
		printf("性别  ");
		printf("身份证号码          ");
		printf("手机号码     ");
		printf("楼号  ");
		printf("单元号  ");
		printf("房号  ");
		printf("平米数  ");
		printf("每平米价格  ");
		printf("应缴纳物业费  ");
		printf("备注\n");
	for(i=0;i<number;i++)
	{
		printf("%-8s",zhu[i].name);
		printf("%-6s",zhu[i].sex);
		printf("%-20s",zhu[i].IDcard);
		printf("%-14d",zhu[i].tel);
		printf("%-6d",zhu[i].louhao);
		printf("%-8d",zhu[i].dyhao);
		printf("%-6d",zhu[i].room);
		printf("%-8d",zhu[i].square);
		printf("%-12d",zhu[i].sq);
		printf("%-14d",zhu[i].price);
		printf("%-10s",zhu[i].bz);
		printf("\n");
	}
	 printf("是否继续？ 【1---yes   0---no】");
	   scanf("%d",&k);
     if(k!=0)
		continue;
	 else
		break; 
}
}


/*
函数：功能列表
输入：功能号码 
*/
void gongneng()
{
	int num;	
	while(1)
	{
		menu();
    	printf("请输入所需的功能号码:");
	    scanf("%d",&num);
	    switch(num)
		{
    	case 1:add();break;
	    case 2:revise();break;
    	case 3:del();break;
    	case 4:grow();break;
    	case 5:all();break;
    	case 6:tongji();break;
    	case 7:paixu();break;
		}
		 if(num==0)
		 {
			 printf("退出程序!");
		     break;
		 }
	}		
}


void main()
{
    int i,flag1,flag2;
    char name[10]="zz",password[10]="1";
    char person[10],shuzi[10];
    for(i=0;i<100;)
	{
	    printf("\t\t\t\t欢迎使用物业费管理系统");
    	printf("\n\n");
    	printf("用户名:");
        gets(person);
        flag1=strcmp(person,name);
        printf("密码:");
        gets(shuzi);
        flag2=strcmp(password,shuzi);
        if(flag1==0&&flag2==0)
		{ 
            menu();
        	break;
		}
        else
		{
            printf("用户名或密码错误!\n");
            i++;
		}
	}
    	gongneng();
}


