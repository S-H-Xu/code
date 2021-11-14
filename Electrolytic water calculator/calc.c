#define _CRT_SECURE_NO_WARNINGS 1
#include "calc.h"

//��ʼֵ¼�뺯�����û�����������㷵��0�����������0�򷵻�1
int Para_in(double* p_total_water, double* p_init_D, double* p_selec_H_D, double* p_final_D)
{
	//��ʱ���������ڵ�λת��
	double tmp_init_D = 0.0;
	double tmp_final_D = 0.0;

	printf("����������ˮ������,�Իس���������λ��Kg��:>");
	scanf("%lf", p_total_water);

	printf("������뮵ĳ�ʼ����,�Իس���������λ��%%��:>");
	scanf("%lf", &tmp_init_D);
	*p_init_D = (tmp_init_D / 100);//ȥ��%

	printf("��������ѡ����,�Իس�����������H:D =10��:> H:D = ");
	scanf("%lf", p_selec_H_D);

	printf("������Ŀ��뮺���,�Իس���������λ��%%��:> ");
	scanf("%lf", &tmp_final_D);
	*p_final_D = (tmp_final_D / 100);//ȥ��%

	//�ж�����ֵ�Ƿ�Ϸ�,�Ϸ�����0���Ƿ�����1
	if (((*p_total_water && *p_init_D) && *p_selec_H_D) && *p_final_D)
	{
		return 0;
	}
	else
		return 1;
}

//�����㺯�������û������������˺���
int Calc(double total_water, double init_D, double selec_H_D, double final_D, double* p_final_w, double* p_rec_D)
{
	printf("��������У����Ժ󡭡�\n");

	double _D = init_D;//����ʱ����ˮ����,��ʼֵ��ֵΪ�û�����ֵinit_D

	//һ������΢Ԫˮ�ĵ����
	//�궨��� RATIO_ELEC_H Ϊ����ٶȲο����ʣ�Ĭ��Ϊһ����Դ����ɸ�����ֵ
	//����ʼ����΢Ԫˮ�ĵ����Ϊ�����İ����֮һ
	double rate_H = (total_water / RATIO_ELEC_H)*(1-init_D);//��ʼһ������΢Ԫ��ˮ�����
	double rate_D = ((1 / selec_H_D) * rate_H) * init_D;//��ʼһ������΢Ԫ��ˮ�����

	//����ʱ��ˮ������,��ʼֵ��ֵΪ�û�����ֵtotal_water
	double _water = total_water;
	int count = 0;//ѭ��������������debug������ʾ���û�

	while (_D < final_D)//ѭ��ֱ����ǰ뮺�������Ŀ��ֵ
	{
		//����ѭ������С����ǧ���
		if (count > 5e7)
		{
			printf("��ֵ��������������ú������!\n");
			return -1;
		}
		//ÿһ��ѭ����һ������΢Ԫ
		double tmp_water = _water;//��ʱ��������¼��һ��ˮ������
		_water = _water - (rate_H + rate_D);//����Ϊһ��΢Ԫ���ʣ��ˮ��
		_D = (tmp_water * _D - rate_D) / _water;//��ǰ뮺���

		//������ˮ�����ı仯������һ������΢Ԫ��ˮ�ĵ����
		//�ܵ��ˮ��Ҳ��ʣ��ˮ������
		rate_H = (_water / RATIO_ELEC_H) * (1 - _D);
		//������һ������΢Ԫ��ˮ�ĵ����
		rate_D = ((1 / selec_H_D) * rate_H) * _D;

		count++;//����������
	}
	
	//ָ������ⲿ���������������ش�
	*p_final_w = _water;
	*p_rec_D = (_water * _D) / (total_water * init_D);

	return count;//����ѭ������
}

//��ӡ������������������Ļ�ϣ���������Ϊ�û�����ֵ�Լ�������
void Print(double total_water,double init_D,double selec_H_D, double final_D,
			double final_water, double rec_D, int count)
{
	printf("\n");
	printf("��ʼ��������:\n");
	printf("���ˮ������%lf\n", total_water);
	printf("��ʼ뮺�����%lf%%\n", init_D*100);
	printf("���ѡ���ԣ�H:D = %lf\n", selec_H_D);
	printf("Ŀ��뮺�����D%% = %lf%%\n", final_D*100);
	printf("\n");
	printf("���������£�\n");
	printf("�ﵽĿ��뮺���ʱ��ʣ��ˮ����Ϊ��%lf Kg\n", final_water);
	printf("뮵Ļ�����ΪRec_D = %lf\n", rec_D);
	//debugʱcount�ṩ�ο�������ʾ���û�
	//printf("����ѭ������Ϊ%d\n", count);
	printf("������ɣ�\n");
	printf("\n");
}

