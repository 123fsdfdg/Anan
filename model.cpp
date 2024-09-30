#include<bits/stdc++.h>
#include<math.h>
#include<windows.h>
using namespace std;
int num;
double x[1000],y[1000],x_avg,y_avg,xy_sum,x_2po_sum,x_2po_avg,y_2po_sum;
double K,B,R;
int main()
{
	freopen("data.txt","r",stdin);
	cin>>num;
	for(int i=1;i<=num;i++)
		cin>>x[i]>>y[i];
	for(int i=1;i<=num;i++)
	{
		x_avg+=x[i];
		y_avg+=y[i];
		xy_sum+=x[i]*y[i];
		x_2po_sum+=x[i]*x[i];
		y_2po_sum+=y[i]*y[i];
	}
	x_avg/=num;
	y_avg/=num;
	x_2po_avg=x_2po_sum/num;
	K=(xy_sum-num*x_avg*y_avg)/(x_2po_sum-num*x_avg*x_avg);
	B=y_avg-K*x_avg;
	cout<<"Linear Regression Model : y="<<K<<"x+"<<B<<"\n";
	R=(xy_sum-num*x_avg*y_avg)/(sqrt((x_2po_sum-num*x_avg*x_avg)*(y_2po_sum-num*y_avg*y_avg)));
	cout<<"Sample Correlation Coefficient : "<<R;
	Sleep(800000);
	return 0;
}
/*
	食用指南
	  在该文件同级目录下新建data.txt文件（宝宝文件名字一定要对）
	  文件内容如下：（共有n+1行）
		  第1行：一个整数n
		  第2~n+1行：每行两个有理数（整数、小数），表示样本点(x,y)中的x与y，以空格隔开
	  然后保存文件，运行程序，结果就在输出栏啦！
*/
