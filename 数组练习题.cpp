//#include <stdio.h>
//int main()
//{
//	int a[100],i,j;
//	for(i=0;i<100;i++)
//	{
//		a[i]=i+1;
//	}
//	a[0]=0;
//	for(i=0;i<99;i++)
//	{
//		for(j=i+1;j<100;j++)
//		{
//			
//			if(a[i]!=0 && a[j]!= 0)
//			{
//				if(a[j]%a[i]==0)
//				{
//					a[j]=0; 
//				}			
//			}
//		}
//	}
//	printf("素数有以下：\n");
//	for(i=0;i<100;i++)
//	{
//		if(a[i]!=0)
//		{
//			printf("%d\t",a[i]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10],i,j,t;
//	printf("请输入十个数:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//			if(a[j]>a[i])
//			{
//				t=a[j];
//				a[j]=a[i];
//				a[i]=t;
//			}
//		}
//	}
//	printf("排序如下：\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[6]={2,6,9,30,50},i,b;
//	printf("请输入要插入的数：\n");
//	scanf("%d",&b);
//	
//	for(i=4;i>=0;i--)
//	{
//		if(a[i]>b)
//		{
//			a[i+1]=a[i];
//		}
//		else
//		{
//			a[i+1]=b;
//			break;
//		}
//	}
//	printf("插入后的排序为：\n");
//	for(i=0;i<6;i++)
//	printf("%d\t",a[i]);
//	return 0;
//}

//#include <stdio.h>
//#define n 6
//int main()
//{
//	int a[n]={8,6,5,4,1,0},i,t;
//	for(i=0;i<n/2;i++)
//	{
//		t=a[n-1-i];
//		a[n-1-i]=a[i];
//		a[i]=t;
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t",a[i]);
//	}	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[100];
//	int num,i,t;
//	printf("请输入数组长度：\n");
//	scanf("%d",&num);
//	printf("请输入数组：\n");
//	for(i=0;i<num;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<num/2;i++)
//	{
//		t=a[num-1-i];
//		a[num-1-i]=a[i];
//		a[i]=t;
//	}
//	printf("倒序是：\n");
//	for(i=0;i<num;i++)
//	{
//		printf("%4d",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j,n;
//	int a[100][100];
//	scanf("%d",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			a[i][0]=1;
//			if(i == j)
//			{
//				a[i][j]=1;
//			}
//		}
//	 } //定义第一项和最后一项都为1
//	 
//	for(i=2;i<n;i++) 
//	{
//		for(j=1;j<i;j++)
//		{
//			a[i][j] = a[i-1][j-1] + a[i-1][j];////核心 
//		}
//	}
//	
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return  0;
//}

//#include <stdio.h>
//int main()
//{
//	int i,j,m;
//	int a[100][100];
//	scanf("%d",&m);
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			a[i][0]=1;
//			if(i==j)
//			a[i][j]=1;
//		}
//	}
//	for(i=2;i<m;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			a[i][j]=a[i-1][j-1] + a[i-1][j];
//		}
//	}
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");	
//	}
//	return 0;
//}

//#include <stdio.h>
//void zb(int key,int a[],int n)
//{
//	int mid,low,high,i;
//	int  count1=0,count=0;
//	low=0;
//	high=n-1;
//	while(high>=low)
//	{
//		count++;
//		mid=(low+high)/2;
//		if(key<a[mid])
//		{
//			high=mid-1;
//		}
//		else if(key>a[mid])
//		{
//			low=mid-1;
//		}
//		if(key == a[mid])
//		{
//			printf("找到元素 %d 了，经过 %d 次循环找到的，a[%d]=%d\n",key,count,mid,key);
//			count1++;
//			break;
//		}
//		if(count1==1)
//		{
//			printf("输入的元素有误，请从新输入!\n");
//		}
//	}	
//}
//
//int main()
//{
//	int  a[100],key,i,j,t,n;
//	void zb(int key,int a[],int n);
//	printf("请输入元素个数：\n");
//	scanf("%d",&n);
//	printf("按照从小到大的顺序输入所有元素:\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	} 
//	printf("请输入要查找的数:\n");
//	scanf("%d",&key);
//	
//	for(j=0;j<n-1;j++)
//	{
//		for(i=j;i<n-1;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				t=a[i];
//				a[i]=a[i+1];
//				a[i+1]=t;
//			}
//		}	
//	}//排序 
//	
//	zb(key,a,n);
//	printf("\n");
//	return 0;
//}





























