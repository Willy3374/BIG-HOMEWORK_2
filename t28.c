#include <stdio.h>


#define  movie_number 4
      

/*电影名         bianhao[100] name[movie_number][100]
  票价 票的数量  piaojia[movie_number] p_number[movie_number]
  场次           changci[movie_number]
  时刻表         hour_start[movie_number] hour_end[movie_number]  minute_start[movie_number] minute_end[movie_number]
  放映厅编号     fyt[movie_number]
*/ 
char name[movie_number][100]={"蜘蛛侠","变形金刚","深海","速度与激情"};
int piaojia[movie_number]={20,30,40,50};
int hour_start[movie_number]={8,10,14,16},hour_end[movie_number]={9,11,15,16};
int minute_start[movie_number]={0,0,0,0},minute_end[movie_number]={30,30,30,30};
int changci[movie_number]={1,2,3,4};
int bianhao[movie_number]={1,2,3,4};
int fyt[movie_number]={1,2,3,4};
int p_number[movie_number]={100,100,100,100};

/*
 功能：查看电影信息 
 输入：无
 输出：无 
 */
void dayin()
{
	int i,j;	
	printf("************************************************************************************************************************\n\n");
	printf("%10s%10s%10s%10s%15s%15s%10s\n","编号","电影名","放映厅","场次","时间","票价","剩余票数"); 
 	for(i=0;i<movie_number;i++)
 	{
 		printf("%10d%10s%10d%10d%10d:%d-%d:%d%10d%10d\n",bianhao[i],name[i],fyt[i],changci[i],hour_start[i],minute_start[i],hour_end[i],minute_end[i],piaojia[i],p_number[i]);
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
	int i,x;	
	printf("************************************************************************************************************************\n\n");
	printf("请输入电影编号：\n");
	scanf("%d",&i);
	i-=1;
	if(i<0 || i>3)
	{
		printf("\n编号不存在\n");
		return ;
	}
	
	printf("您要查询的是 \n 0:场次 \n 1: 时刻表 \n");
	scanf("%d",&x);

	if(x)
	{
		printf("%10s%10s%10s\n","编号","电影名","时间"); 
		printf("%10d%10s%10d:%d-%d:%d\n",bianhao[i],name[i],hour_start[i],minute_start[i],hour_end[i],minute_end[i]);
	}
	else
	{
		printf("%10s%10s%10s\n","编号","电影名","场次");
			printf("%10d%10s%10d\n",bianhao[i],name[i],changci[i]); 
	}
	printf("\n************************************************************************************************************************\n\n");
 }
 
 /*
 功能：购票 
 输入：无
 输出：无 
 */
void add()
{
	int bh,panduan,number;	
	printf("************************************************************************************************************************\n\n");
	printf("请输入对应电影编号：\n");
	scanf("%d",&bh);
	bh-=1;
	printf("请问是否需要团体购票？\n 是回复1，否回复0\n");
	scanf("%d",&panduan);
	if(panduan)
	{
		printf("购买票数:\n"); 
		scanf("%d",&number);
		if(p_number[bh]-number == 0)
		{
			printf("\n电影票不够\n");
			return ;
        }
		else
		{
//			printf("费用是：%d",piaojia[bh]*number);
			printf("您已选购成功！\n");
			p_number[bh]-=number;
		}	
	}
	else
	{
		if(!p_number[bh])
		{
			printf("\n电影已售完\n");
			return ;
		}
		else
		{
//			printf("费用是：%d",piaojia[bh]);
			printf("您已选购成功！\n");	
			p_number[bh]--;	
		}
		
	}
}


 /*
 功能：删除 
 输入：无
 输出：无 
 */
void delet()
{
	int bh,x;	
	printf("************************************************************************************************************************\n\n");
	printf("您要退的电影的编号是：\n");
	scanf("%d",&bh);
	bh-=1;
	printf("您购买的票数是：？\n");
	scanf("%d",&x);
	p_number[bh]+=x;
	printf("退票成功!\n");
//	printf("退票成功,您的找零：%d\n",piaojia[bh]); 
	printf("\n************************************************************************************************************************\n\n");
}

 /*
 功能：修改 场次，放映厅 票价 
 输入：无
 输出：无 
 */
void change()
{
	int bh,num_1,num_2;
	printf("您要更改的是 \n 0；场次\n 1:放映厅 \n 2：票价 \n");
	scanf("%d",&bh);
	if(bh == 0)
	{
		printf("修改哪个电影？请输入对应电影编号：\n");
		scanf("%d",&num_1);
		printf("修改为哪个场次？请输入数字\n");
		scanf("%d",&changci[bh-1]);
		printf("修改成功！"); 
	}
	if(bh == 1)
	{
		printf("修改哪个电影？请输入对应电影编号：\n");
		scanf("%d",&num_1);
		printf("修改为哪个放映厅？请输入数字\n");
		scanf("%d",&fyt[bh-1]);
		printf("修改成功！");
	}
	if(bh == 2)
	{
		printf("修改哪个电影？请输入对应电影编号：\n");
		scanf("%d",&num_1);
		printf("修改票价为？请输入数字\n");
		scanf("%d",&piaojia[bh-1]);
		printf("修改成功！\n");
	}
}

 /*
 功能：菜单界面
 输入：无
 输出：无 
 */
 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("电影院售票管理系统\n\n");
 	printf("0\t查看电影信息\n");
	printf("1\t购票\n");
	printf("2\t退票\n");
	printf("3\t查找\n");
	printf("4\t更改\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("请输入命令编号\n");
 }
 
 
int main()
{
//	sandby();
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
			case 4:
				change();
				break;
		}
		system("pause");
	}

	return 0;
}

