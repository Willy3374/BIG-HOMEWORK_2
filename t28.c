#include <stdio.h>


#define  movie_number 4
      

/*��Ӱ��         bianhao[100] name[movie_number][100]
  Ʊ�� Ʊ������  piaojia[movie_number] p_number[movie_number]
  ����           changci[movie_number]
  ʱ�̱�         hour_start[movie_number] hour_end[movie_number]  minute_start[movie_number] minute_end[movie_number]
  ��ӳ�����     fyt[movie_number]
*/ 
char name[movie_number][100]={"֩����","���ν��","�","�ٶ��뼤��"};
int piaojia[movie_number]={20,30,40,50};
int hour_start[movie_number]={8,10,14,16},hour_end[movie_number]={9,11,15,16};
int minute_start[movie_number]={0,0,0,0},minute_end[movie_number]={30,30,30,30};
int changci[movie_number]={1,2,3,4};
int bianhao[movie_number]={1,2,3,4};
int fyt[movie_number]={1,2,3,4};
int p_number[movie_number]={100,100,100,100};

/*
 ���ܣ��鿴��Ӱ��Ϣ 
 ���룺��
 ������� 
 */
void dayin()
{
	int i,j;	
	printf("************************************************************************************************************************\n\n");
	printf("%10s%10s%10s%10s%15s%15s%10s\n","���","��Ӱ��","��ӳ��","����","ʱ��","Ʊ��","ʣ��Ʊ��"); 
 	for(i=0;i<movie_number;i++)
 	{
 		printf("%10d%10s%10d%10d%10d:%d-%d:%d%10d%10d\n",bianhao[i],name[i],fyt[i],changci[i],hour_start[i],minute_start[i],hour_end[i],minute_end[i],piaojia[i],p_number[i]);
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
	int i,x;	
	printf("************************************************************************************************************************\n\n");
	printf("�������Ӱ��ţ�\n");
	scanf("%d",&i);
	i-=1;
	if(i<0 || i>3)
	{
		printf("\n��Ų�����\n");
		return ;
	}
	
	printf("��Ҫ��ѯ���� \n 0:���� \n 1: ʱ�̱� \n");
	scanf("%d",&x);

	if(x)
	{
		printf("%10s%10s%10s\n","���","��Ӱ��","ʱ��"); 
		printf("%10d%10s%10d:%d-%d:%d\n",bianhao[i],name[i],hour_start[i],minute_start[i],hour_end[i],minute_end[i]);
	}
	else
	{
		printf("%10s%10s%10s\n","���","��Ӱ��","����");
			printf("%10d%10s%10d\n",bianhao[i],name[i],changci[i]); 
	}
	printf("\n************************************************************************************************************************\n\n");
 }
 
 /*
 ���ܣ���Ʊ 
 ���룺��
 ������� 
 */
void add()
{
	int bh,panduan,number;	
	printf("************************************************************************************************************************\n\n");
	printf("�������Ӧ��Ӱ��ţ�\n");
	scanf("%d",&bh);
	bh-=1;
	printf("�����Ƿ���Ҫ���幺Ʊ��\n �ǻظ�1����ظ�0\n");
	scanf("%d",&panduan);
	if(panduan)
	{
		printf("����Ʊ��:\n"); 
		scanf("%d",&number);
		if(p_number[bh]-number == 0)
		{
			printf("\n��ӰƱ����\n");
			return ;
        }
		else
		{
//			printf("�����ǣ�%d",piaojia[bh]*number);
			printf("����ѡ���ɹ���\n");
			p_number[bh]-=number;
		}	
	}
	else
	{
		if(!p_number[bh])
		{
			printf("\n��Ӱ������\n");
			return ;
		}
		else
		{
//			printf("�����ǣ�%d",piaojia[bh]);
			printf("����ѡ���ɹ���\n");	
			p_number[bh]--;	
		}
		
	}
}


 /*
 ���ܣ�ɾ�� 
 ���룺��
 ������� 
 */
void delet()
{
	int bh,x;	
	printf("************************************************************************************************************************\n\n");
	printf("��Ҫ�˵ĵ�Ӱ�ı���ǣ�\n");
	scanf("%d",&bh);
	bh-=1;
	printf("�������Ʊ���ǣ���\n");
	scanf("%d",&x);
	p_number[bh]+=x;
	printf("��Ʊ�ɹ�!\n");
//	printf("��Ʊ�ɹ�,�������㣺%d\n",piaojia[bh]); 
	printf("\n************************************************************************************************************************\n\n");
}

 /*
 ���ܣ��޸� ���Σ���ӳ�� Ʊ�� 
 ���룺��
 ������� 
 */
void change()
{
	int bh,num_1,num_2;
	printf("��Ҫ���ĵ��� \n 0������\n 1:��ӳ�� \n 2��Ʊ�� \n");
	scanf("%d",&bh);
	if(bh == 0)
	{
		printf("�޸��ĸ���Ӱ���������Ӧ��Ӱ��ţ�\n");
		scanf("%d",&num_1);
		printf("�޸�Ϊ�ĸ����Σ�����������\n");
		scanf("%d",&changci[bh-1]);
		printf("�޸ĳɹ���"); 
	}
	if(bh == 1)
	{
		printf("�޸��ĸ���Ӱ���������Ӧ��Ӱ��ţ�\n");
		scanf("%d",&num_1);
		printf("�޸�Ϊ�ĸ���ӳ��������������\n");
		scanf("%d",&fyt[bh-1]);
		printf("�޸ĳɹ���");
	}
	if(bh == 2)
	{
		printf("�޸��ĸ���Ӱ���������Ӧ��Ӱ��ţ�\n");
		scanf("%d",&num_1);
		printf("�޸�Ʊ��Ϊ������������\n");
		scanf("%d",&piaojia[bh-1]);
		printf("�޸ĳɹ���\n");
	}
}

 /*
 ���ܣ��˵�����
 ���룺��
 ������� 
 */
 void menu()
 {
 	printf("************************************************************************************************************************\n\n");
 	printf("��ӰԺ��Ʊ����ϵͳ\n\n");
 	printf("0\t�鿴��Ӱ��Ϣ\n");
	printf("1\t��Ʊ\n");
	printf("2\t��Ʊ\n");
	printf("3\t����\n");
	printf("4\t����\n\n");
 	printf("************************************************************************************************************************\n\n");
 	printf("������������\n");
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

