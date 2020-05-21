#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y;
	x=0,y=0;
	int i=0;
	FILE *f;
	char s[1024];
	f=fopen("d:\\软件工程原理与方法\\git.txt","r");
	if(f==NULL)
		return -1;
	while(fscanf(f,"%c",&s[i])!=EOF)
		i++;
	printf("文件内容:\n");
	for(x=0;x<i;x++)
		printf("%c",s[x]);
	for(int j=0;j<i;j++)
	{
		if(s[j]==','||s[j]=='#'||s[j]=='*'||s[j]==' ')
			y++;
	}
	printf("\n");
	printf("字符个数:\n");
	printf("%d\n",x);
	printf("单词个数:\n");
	printf("%d\n",y+1);
	fclose(f);
	return 0;
}