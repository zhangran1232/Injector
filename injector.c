#include <stdio.h>
/*定义注射剂量配置选项*/
#define INJECT_VAL_1 0.8
#define INJECT_VAL_3_1 2
#define INJECT_VAL_3_2 3
#define INJECT_VAL_5_1 4
#define INJECT_VAL_5_2 5
/*定义注射次数选项*/
unsigned char inject_time[18] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180};
int main()
{
	int i = 0;
	int j = 0;
	int temp = 0;
	double per_inject_val = 0;
	float inject_val[5] = {INJECT_VAL_1,INJECT_VAL_3_1,INJECT_VAL_3_2,INJECT_VAL_5_1,INJECT_VAL_5_2};
	for( j = 0 ; j < 5 ; j++ )
	{
		printf("当注射剂量选择%f时：\n",inject_val[j]);
		printf("单次注射剂量为");
		for( i = 0 ; i < 18 ; i++ )
		{
			per_inject_val = inject_val[j]/inject_time[i];
			printf("%f   ",per_inject_val);
			temp++;
		}
		printf("\n");
	}
	printf("一共有%d种组合\n",temp);
	return 0;
}
