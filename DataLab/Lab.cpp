#include <stdio.h>

int tmin(){
	return 1 << 31;
}

int bitAnd(int x, int y){
	return ~(~x | ~y);
}
/*
*getByte - Extract byte n from word x
*   从 字 x 中 提取第n个字节
*   Bytes numbered from 0 (LSB)to 3 (MSB)
*   最低有效位为0，依次，最高有效位是 3
* Examples: getByte(0x12345678, 1) = 0x56
* Legal ops : !~& ^ | +<< >>
*Max ops : 6
* Rating : 2
* 方法：
*/
int getByte(int x, int n) {
	int tmp = x >> ((n) << 3); // (n) << 3 移动n个8bit,即n个byte 向右移到头 0xff123456,算术右移  
	return (n) << 3;
	tmp = tmp & 0xFF; //保留最右一个字节。
	return tmp;;

}

int logicalShift(int x, int n){
	return -1;
}

/*
计算x的二进制中为1的个数
*/
int bitCount(int x){
	int n = (1 << 3) << 2;//int类型共 32位
	int count = 0;
	for (int pos = n - 1; pos >= 0; pos--)
	{
		int m = 1 << pos;
		if ((m&x) == m)//注意 & 和 == 优先级 ==> &
			count++;
	}
	return count;
}

void main()
{
	int min = tmin();
	printf("min int :%d\n", min);
	//printf("sizeof(int) %d", sizeof(int));
	//printf("1 & 0= %d\n", bitAnd(6, 5));
	//printf("3 & 0= %d\n", bitAnd(3, 0));
	//printf("3 & 4= %d\n", bitAnd(3, 4));
	//printf("0x12345678右移结果%0x", getByte(0x12345678, 1));


	int x = 3;
	printf("%d  bitCount = %d\n",x, bitCount(x));
	x = 7;
	printf("%d  bitCount = %d\n", x, bitCount(x));
	x = (1<<31)+7 ;
	printf("%d  bitCount = %d\n", x, bitCount(x));
	x = 8;
	printf("%d  bitCount = %d\n", x, bitCount(x));
	int num;
	printf("请输入整数");
	scanf_s("%d", &num);
}

