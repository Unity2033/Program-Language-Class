#include <stdio.h> // �⺻ ����� ��� ����

void main()	
{
#pragma region ���� ������
	/*
	char character = 'B';
	int data = 100;
	float decimal = 9.9531111111f;

	// ����ϱ� ���� �ڷ����� ������ ����������
	// �������ִ� ���Դϴ�.

	// "%c" ���� (���� ������)
	// "%d"	���� (���� ������)
	// "%f" �Ǽ� (���� ������ float) 
	
	// ���İ� ������ ���°� ��ġ���� ������
	// ���ϴ� ���� ��µ��� �ʽ��ϴ�.
	// printf("character�� �� : %f\n", character); (�߸��� �κ�)
	printf("data�� �� : %d\n", data);

	// float 4 byte ũ���� �Ǽ��� �ڷ����� �Ҽ��� ����
	// 6�ڸ������� ǥ���մϴ�.
	printf("decimal�� �� : %f\n", decimal);

	// ���� �������� ������ ���ʿ������� �����մϴ�.
	printf("data : %d, decimal : %f", data, decimal);

	// printf(data); (X)
	*/
#pragma endregion

#pragma region ��Ʈ(bit)
	// �����͸� ��Ÿ���� �ּ��� �����̸�, 0 �Ǵ� 1��
	// �������� ���� ����� �����ϴ� �����Դϴ�.

	// ��Ʈ ������
	// ��Ʈ ������ ���� ������ �����ϱ� ���� ����ϴ�
	// �������Դϴ�.

	// AND
	// �� ���� �ǿ����� ��� 1�̸� 1�� ��ȯ�ϴ� �������Դϴ�.
	char num1 = 10; // 0000 1010 <- 1 BYTE
	char num2 = 15; // 0000 1111 <- 1 BYTE
	char num3 = 129; // -128 ~ 127 

	printf("num1�� num2�� AND ������ ��� : %d\n", num1 & num2);

	// OR
	// �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ�
	// �������Դϴ�.
	printf("num1�� num2�� OR ������ ��� : %d\n", num1 | num2);

	// XOR
	// �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�, ���� �ٸ��� 1��
	// ��ȯ�ϴ� �������Դϴ�.
	printf("num1�� num2�� XOR ������ ��� : %d\n", num1 ^ num2);

	// NOT
	// ��Ʈ�� ������Ű�� �������Դϴ�.
	printf("num1�� NOT ������ ��� : %d\n", ~num1);

	// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù ��° ��Ʈ��
	// 1�� �ִٸ� ���� ������ �˴ϴ�.
	printf("num3�� �� : %d", num3);
		

#pragma endregion


}