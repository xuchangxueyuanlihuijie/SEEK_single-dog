#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int  set(int * arr)//����һ������
{
	 printf("����������ѡ������(100����������)");
	 int i = 0;
	 while (1)
	 {
		 if (scanf("%d", &arr[i]) == 1)
		 {
			 i++;
		 }
		 char c = getchar();
		 if ( c== '\n')
		 {
			 break;
		 }
		
	 }
	 return i;
}
int Determine(int arr[], int *sz)//�����ж�
{
	int ret = 0;
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 0; i < *sz; i++)
	{
		for (j = 0; j < *sz; j++)
		{
			int pmp = i;
			if (i != *sz - 1)
			{
				if (i == j)//ǰn-����ж�
				{
					continue;
				}
				ret = arr[i];
				ret ^= arr[j];
				if (ret == 0)
				{
					break;
				}
			}
			else//��һ����ж�
			{
				if (j != *sz - 1)
				{
					ret = arr[i];
					ret ^= arr[j];
				}
				if (ret == 0)
				{
					break;
				}
			}
			if ((j == *sz - 1) && ret != 0)
			{
				printf("%d   ", arr[pmp]);
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int arr[100] = {0 };
	int sz =set(arr);
	printf("%d������\n",Determine(arr, &sz));
	system("pause");
	return 0;
}