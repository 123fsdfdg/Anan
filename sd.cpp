#include<bits/stdc++.h>
using namespace std;
int a[10][10],t;
bool v1[10][10],v2[10][10],v3[10][10];
void dfs(int x,int y)
{
	if(y>8)
		y-=9,x+=1;
	if(x>8)
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
		exit(0);
	}
	if(a[x][y])
		dfs(x,y+1);
	else
		for(int i=1;i<=9;i++)
			if(!v1[x][i]&&!v2[y][i]&&!v3[x/3*3+y/3][i])
			{
				a[x][y]=i;
				v1[x][i]=v2[y][i]=v3[x/3*3+y/3][i]=1;
				dfs(x,y+1);
				a[x][y]=0;
				v1[x][i]=v2[y][i]=v3[x/3*3+y/3][i]=0;
			}
}
int main()
{
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
		{
			scanf("%d",&t);
			a[i][j]=t;
			if(t)
				v1[i][t]=v2[j][t]=v3[i/3*3+j/3][t]=1;
		}
	printf("\n");
	dfs(0,0);
	return 0;
}
/*
  食用指南
  把数独里给出的信息输入就好啦
  一行九个数，每个数之间用空格隔开，然后按回车
  如果这一位是空的的话，用0代替哦
 */
