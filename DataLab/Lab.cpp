#include <stdio.h>

int tmin(){
	return 1 << 31;
}

int bitAnd(int x, int y){
	return ~(~x | ~y);
}
/*
*getByte - Extract byte n from word x
*   �� �� x �� ��ȡ��n���ֽ�
*   Bytes numbered from 0 (LSB)to 3 (MSB)
*   �����ЧλΪ0�����Σ������Чλ�� 3
* Examples: getByte(0x12345678, 1) = 0x56
* Legal ops : !~& ^ | +<< >>
*Max ops : 6
* Rating : 2
* ������
*/
int getByte(int x, int n) {
	int tmp = x >> ((n) << 3); // (n) << 3 �ƶ�n��8bit,��n��byte �����Ƶ�ͷ 0xff123456,��������  
	return (n) << 3;
	tmp = tmp & 0xFF; //��������һ���ֽڡ�
	return tmp;;

}

int logicalShift(int x, int n){
	return -1;
}

/*
����x�Ķ�������Ϊ1�ĸ���
*/
int bitCount(int x){
	int n = (1 << 3) << 2;//int���͹� 32λ
	int count = 0;
	int m = 1;
	for (int pos = 0; pos <n; pos++)
	{
		if ((m&x) == m)//ע�� & �� == ���ȼ� ==> &
			count++;
		m = m << 1;
	}
	return count;
}

void intSetValue2float()
{
	int i = 5;
	float x = i;
	//���ڴ��λͼ������Ĭ�ϵ�ת��    5 = 2^2 + 2^1 = 1.25*2^2= 1.25*2^(129-127) [5]int λģʽ 00000101  [5]float  λģʽ�� [0][10000001][01000000000000000000000000000]
	printf("int %d set value float x,float x=%f\n", i, x);

}

void intSetBitMap2float()
{
	int i = 2<<29;
	float x = *(float *)&i;
	printf("int %d intSetBitMap2float x,float x=%f\n", i, x);

}

void main()
{

	intSetValue2float();
	intSetBitMap2float();
	//int min = tmin();
	//printf("min int :%d\n", min);
	//int x = 2;
	//printf("!%d int :%d\n", x,!x);
	//x = 3;
	//printf("!%d int :%d\n", x, !x);
	//x = 0;
	//printf("!%d int :%d\n", x, !x);
	//printf("sizeof(int) %d", sizeof(int));
	//printf("1 & 0= %d\n", bitAnd(6, 5));
	//printf("3 & 0= %d\n", bitAnd(3, 0));
	//printf("3 & 4= %d\n", bitAnd(3, 4));
	//printf("0x12345678���ƽ��%0x", getByte(0x12345678, 1));


	//x = 3;
	//printf("%d  bitCount = %d\n",x, bitCount(x));
	//x = 7;
	//printf("%d  bitCount = %d\n", x, bitCount(x));
	//x = (1<<31)+15 ;
	//printf("%d  bitCount = %d\n", x, bitCount(x));
	//x = 8;
	//printf("%d  bitCount = %d\n", x, bitCount(x));
	int num;
	printf("����������");
	scanf_s("%d", &num);
}

