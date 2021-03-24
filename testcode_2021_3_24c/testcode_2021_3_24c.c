#include<stdio.h>
#include<string.h>
int main()
{
	int m = 5 % 2;
	int v = 5 / 2;//%为取余 /为除 均为【算术操作符】
	printf("%d%d\n", m,v);
	

	int n = 1;
	//int整型占4个字节--32个bit位
	//1=00000000000000000000000000000001
	int r = n << 1;//00000000000000000000000000000001→000000000000000000000000000000010
	printf("%d\n", r);
	int e = n << 2;
	printf("%d\n", e);//<< >>--【移位操作符】

	//（2进制）【位操作符】
	//& 按位与  对应2进制位进行与运算
	//| 按位或  对应的2进制位进行或运算
	//^按位异或  对应2进制位相同为0 相异为1
	int a = 3;//011
	int b = 5;//101
	int c = a & b;//001
	printf("%d\n", c);
	int f = a | b;//111
	int k = a ^ b;//110
	printf("%d\n", f);
	printf("%d\n", k);
	int a1 = 10;
	a1 = 20;//= 【赋值操作符】 ==判断相等
	a1 = a1 + 10;//a1+=10
	a1 = a1 - 20;//a1-=10
	a1 = a1 & 2;//a1&=2    += -= &= %= ......为【复合赋值符】
	//单目操作符 !（将数值真假互换 ！非0=0 ！0=1）-(取相反数) sizeof(计算变量/类型所占空间大小 单位是字节)
	//双目操作符 a+b a-b
	//三目操作符
	//c语言中表示真假 0--假 非0--真
	int a2 = 10;
	printf("%d\n", !a2);
	int a3 = -a2;
	printf("%d\n", a3);
	printf("%d\n", sizeof(a2));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a2);//sizeof变量名时 括号可省
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//sizeof可以计量数组大小
	int sz = 0;
	sz = sizeof(arr)/ sizeof(arr[0]);
	printf("sz=%d\n",sz);//综合以上用法sizeof还可以计算数组元素个数
	return 0;
}