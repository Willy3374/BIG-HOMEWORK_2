#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100

/*
read me:
�û�����zz
���룺1 

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
	printf("\t\t\t\t*    ��ҵ�ѹ���ϵͳ       *\n");
	printf("\t\t\t\t*                         *\n");
	printf("\t\t\t\t*    [0].�˳�����         *\n");
	printf("\t\t\t\t*    [1].��ס�����       *\n");
	printf("\t\t\t\t*    [2].�޸�ס����Ϣ     *\n");
	printf("\t\t\t\t*    [3].ɾ��ס����Ϣ     *\n");
	printf("\t\t\t\t*    [4].��ҵ������       *\n");
	printf("\t\t\t\t*    [5].�ɷѹ���         *\n");
	printf("\t\t\t\t*    [6].ͳ�ƹ���(¥��)   *\n");
	printf("\t\t\t\t*    [7].����(Ƿ��)       *\n");
	printf("\t\t\t\t*                         *\n");
	printf("\t\t\t\t*                         *\n");
	printf("\t\t\t\t***************************\n");
}



void add()
{
	int i=0,k;
	while(1)
		{
			
		printf("�������%d���û�������:",i+1);
		scanf("%s",zhu[i].name);
		
		printf("�������%d���û����Ա�:",i+1);
		scanf("%s",zhu[i].sex);
		
		printf("�������%d���û������֤��:",i+1);
		scanf("%s",zhu[i].IDcard);
		
		printf("�������%d���û�����ϵ�绰:",i+1);
		scanf("%d",&zhu[i].tel);
		
		printf("�������%d���û���¥��:",i+1);
		scanf("%d",&zhu[i].louhao);
		
		printf("�������%d���û��ĵ�Ԫ��:",i+1);
		scanf("%d",&zhu[i].dyhao);
		
		printf("�������%d���û�����:",i+1);
		scanf("%d",&zhu[i].room);
	
		printf("�������%d���û�����ƽ������:",i+1);
		scanf("%d",&zhu[i].square);
	
		printf("�������%d���û�ÿƽ������ҵ�۸�:",i+1);
		scanf("%d",&zhu[i].sq);
	
		printf("�������%d���û�Ӧ������ҵ����:",i+1);
		scanf("%d",&zhu[i].price);
	
		printf("��ע��Ϣ:");
	 	scanf("%s",zhu[i].bz);
	 	
	    i++;
		number=i;
		
		printf("�Ƿ�������룿��1---yes   0---no��");
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
		printf("������Ҫ�޸ĵ�ס������:");
		scanf("%s",b);
	    for(i=0;i<number;i++)
		{
			if(strcmp(b,zhu[i].name)==0)
		     {
				printf("����������ø��û�������:");
				scanf("%s",zhu[i].name);
	
				printf("����������ø��û����Ա�:");
				scanf("%s",zhu[i].sex);
	
				printf("����������ø��û������֤��:");
				scanf("%s",zhu[i].IDcard);
	
				printf("����������ø��û�����ϵ�绰:");
				scanf("%d",&zhu[i].tel);
	
				printf("����������ø��û���¥��:");
				scanf("%d",&zhu[i].louhao);
	
				printf("����������ø��û��ĵ�Ԫ��:");
				scanf("%d",&zhu[i].dyhao);
	
				printf("����������ø��û��ķ���:");
				scanf("%d",&zhu[i].room);
	
				printf("����������ø��û���¥��ƽ����:");
				scanf("%d",&zhu[i].square);
	
				printf("����������ø��û�����ÿƽ����ҵ�۸�:");
				scanf("%d",&zhu[i].sq);
	
				printf("����������ø��û�Ӧ������ҵ����:");
				scanf("%d",&zhu[i].price);
	
				printf("����������ø��û��ı�ע:");
				scanf("%s",zhu[i].bz);
			}
			else
			{   printf("���û�������!\n");
			    break;
			}
	}
	    printf("�Ƿ�����޸ģ���1---yes   0---no��");
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
    	printf("������Ҫɾ�����û�����:");
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
		 printf("û���ҵ���ס��!");
	  else
	  {
		 printf("ɾ���ɹ�!\n�Ƿ����ɾ������1---yes   0---no��");
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
	printf("��������������:");
	scanf("%s",d);
	for(i=0;i<number;i++)
	{
	  if(strcmp(d,zhu[i].name)==0)
	  {
		  cost=zhu[i].square*zhu[i].sq;
		  printf("��Ӧ���ɵ�ʵ�ʽ��Ϊ:%f",cost);
	  }
	  else
	     printf("���û�������!\n");
	 } 
	  printf("�Ƿ�����鿴�� ��1---yes   0---no��");
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
	printf("������Ҫ������ҵ�ѵ��û�������:");
	scanf("%s",a);
	 for(i=0;i<number;i++)
	 {
		if(strcmp(a,zhu[i].name)==0)
		{	printf("������Ҫ���ɵĽ��:");
			scanf("%d",&b);
			zhu[i].price=zhu[i].price-b; 
			printf("�ɷѳɹ�!\n");
			break;
		}
	    else
		   printf("���û�������!\n");
	
	 }	
	  printf("�Ƿ�������ɣ� ��1---yes   0---no��");
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
		printf("����    ");
		printf("�Ա�  ");
		printf("���֤����          ");
		printf("�ֻ�����     ");
		printf("¥��  ");
		printf("��Ԫ��  ");
		printf("����  ");
		printf("ƽ����  ");
		printf("ÿƽ�׼۸�  ");
		printf("Ӧ������ҵ��  ");
		printf("��ע\n");
	for(i=0;i<10;i++)
	{
		printf("��%d��¥:\n",i);
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
	 printf("�Ƿ������ ��1---yes   0---no��");
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
		printf("����    ");
		printf("�Ա�  ");
		printf("���֤����          ");
		printf("�ֻ�����     ");
		printf("¥��  ");
		printf("��Ԫ��  ");
		printf("����  ");
		printf("ƽ����  ");
		printf("ÿƽ�׼۸�  ");
		printf("Ӧ������ҵ��  ");
		printf("��ע\n");
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
	 printf("�Ƿ������ ��1---yes   0---no��");
	   scanf("%d",&k);
     if(k!=0)
		continue;
	 else
		break; 
}
}


/*
�����������б�
���룺���ܺ��� 
*/
void gongneng()
{
	int num;	
	while(1)
	{
		menu();
    	printf("����������Ĺ��ܺ���:");
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
			 printf("�˳�����!");
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
	    printf("\t\t\t\t��ӭʹ����ҵ�ѹ���ϵͳ");
    	printf("\n\n");
    	printf("�û���:");
        gets(person);
        flag1=strcmp(person,name);
        printf("����:");
        gets(shuzi);
        flag2=strcmp(password,shuzi);
        if(flag1==0&&flag2==0)
		{ 
            menu();
        	break;
		}
        else
		{
            printf("�û������������!\n");
            i++;
		}
	}
    	gongneng();
}


