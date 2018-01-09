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
	for (int pos = n - 1; pos >= 0; pos--)
	{
		int m = 1 << pos;
		if ((m&x) == m)//ע�� & �� == ���ȼ� ==> &
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
	//printf("0x12345678���ƽ��%0x", getByte(0x12345678, 1));


	int x = 3;
	printf("%d  bitCount = %d\n",x, bitCount(x));
	x = 7;
	printf("%d  bitCount = %d\n", x, bitCount(x));
	x = (1<<31)+7 ;
	printf("%d  bitCount = %d\n", x, bitCount(x));
	x = 8;
	printf("%d  bitCount = %d\n", x, bitCount(x));
	int num;
	printf("����������");
	scanf_s("%d", &num);
}

