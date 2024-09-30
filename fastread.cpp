//头文件等东西请放在这里~

#define in read()
#define getchar() (S==T&&(T=(S=B)+fread(B,1,1<<15,stdin),S==T)?EOF:*S++)
char B[1<<15],*S=B,*T=B;
inline int read()
{
	char c=getchar();
	int x=0,f=1;
	while(c<48){if(c=='-')f=-1;c=getchar();}
	while(c>47)x=(x*10)+(c^48),c=getchar();
	return x*f;
}
inline void mwrite(int a)
{
	if(a>9)mwrite(a/10);
	putchar((a%10)|48);
}
inline void write(int a,char c)
{
	mwrite(a<0?(putchar('-'),a=-a):a);
	putchar(c);
}

//程序其余部分写这里! main函数用int不好使的话记得用signed~
//宝宝记得目前只能读int数据哦 调用上面的函数就好
