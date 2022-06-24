#include <stdio.h>
#include <assert.h>

#define SQ(x) printf(""#x" * "#x" is %d \n", x * x)
#define Xname(n) x##n //可以用来定义一族变量

/*@ requires x >= -2147483647;
 ensures \result >= 0;
 ensures x < 0 ==> \result == -x;
 ensures x >= 0 ==> \result == x;
*/
int abs(int x){
	if (x < 0)
		return -x;
	else
		return x;
}

int main(void)
{	
	char str[] = "ppp";
	printf("%s \n", str);
	int num = 100;
	// printf("%d",abs(-2));
 
	// assert(num >= 1 && num <= 20); //assert宏。验证失败则立即终止程序，并提示验证出错行数
	
	// SQ(20);

	// for(int i = 0; i<10 ; i++){
	// 	int Xname(i) = i * 10;
	// 	printf("x%d = %d\n", i, Xname(i));
	// }

	int array[] = {1,2,3};
	// const int array[] = {1,2,3};
	array[1] = 4;
	// for(int i=0;i<4;i++)
	// 	printf("array[%d] = %d\n", i,array[i]);
	// const char* pc = "hello world";
	// printf("%c", pc[1]);
	unsigned int i;
	i = -1;
	if(i >= 10){
		printf("%u", i);
	}
	else printf("NO");


	return 0;
}


