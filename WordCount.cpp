#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y;
	x=0,y=0;
	int i=0;
	FILE *f;
	char s[1024];
	f=fopen("d:\\�������ԭ���뷽��\\git.txt","r");
	if(f==NULL)
		return -1;
	while(fscanf(f,"%c",&s[i])!=EOF)
		i++;
	printf("�ļ�����:\n");
	for(x=0;x<i;x++)
		printf("%c",s[x]);
	for(int j=0;j<i;j++)
	{
		if(s[j]==','||s[j]=='#'||s[j]=='*'||s[j]==' ')
			y++;
	}
	printf("\n");
	printf("�ַ�����:\n");
	printf("%d\n",x);
	printf("���ʸ���:\n");
	printf("%d\n",y+1);
	fclose(f);
	return 0;
}