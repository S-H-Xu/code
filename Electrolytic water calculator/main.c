#define _CRT_SECURE_NO_WARNINGS 1
#include "calc.h"

void menu()
{
	printf("Calculator - Created by sihan xu\n");
	printf("************************************\n");
	printf("*****    1.start     0.exit    *****\n");
	printf("************************************\n");
	printf("************************************\n");
}


void My_calc()
{
	//��Ҫ�û�����Ĳ���
	double total_water = 0.0;
	double init_D = 0.0;
	double selec_H_D = 0.0;
	double final_D = 0.0;

	//����������ֵ
	double final_w = 0.0;
	double rec_D = 0.0;
	
	int z = Para_in(&total_water, &init_D, &selec_H_D, &final_D);//���ò������뺯��

	//�ж��û�����ֵ�Ƿ�Ϸ�
	if (z)
	{
		printf("�û�����ֵ�Ƿ���\n");
		return;
	}

	//���ü��㺯��,������ɺ󷵻�ѭ������
	int count = Calc(total_water, init_D, selec_H_D, final_D,&final_w, &rec_D);

	if (-1 == count)
	{
		return;
	}

	Print(total_water, init_D, selec_H_D, final_D, final_w, rec_D, count);//���ý���������
}


int main()
{
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("������ѡ��Իس���������1/0��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			My_calc();//���ü���������
			break;
		case 0:
			printf("�˳��������,�밴�������������\n");
			getchar();
			getchar();
			break;
		default:
			printf("����Ƿ�������������!\n");
			break;
		}

	} while (input);
	
	return 0;
}