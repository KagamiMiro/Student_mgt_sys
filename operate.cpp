
#include "stdafx.h"
#include "string.h"
#include "windows.h"
#include "ctype.h"
#include "conio.h"
#include "manage.h"

void clear()
{
	system("cls");
}

void welcome()
{
	system("cls");
	printf_s("\n\n\n\n");
	printf_s("\t\t**************************************************\n");
	printf_s("\t\t*              ��ӭ����ѧ������ϵͳ              *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     1.����ѧ����Ϣ            2.��ѯѧ��       *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     3.��ѯѧ��ѧ���仯���    4.�˳�           *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t**************************************************\n");
	int opr;
	scanf_s("%d", &opr);
	if (opr == 1)
		info_mgt();
	else if (opr == 2)
		;
	else if (opr == 3)
		;
	else if (opr == 4)
		;
}

void info_mgt()
{
	system("cls");
	printf_s("\n\n\n\n");
	printf_s("\t\t**************************************************\n");
	printf_s("\t\t*                  ����ѧ����Ϣ                  *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     1.���ѧ��            2.ɾ��ѧ��           *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     3.�༭ѧ����Ϣ        4.����               *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t**************************************************\n");
	int opr;
	scanf_s("%d", &opr);
	if (opr == 1)
		stu_add();
	else if (opr == 2)
		stu_del();
	else if (opr == 3)
		stu_edit();
	else if (opr == 4)
		welcome();
}

void stu_add()
{
	system("cls");
	extern FILE *stream;
	fopen_s(&stream, "stu_info.txt", "a+");
	struct student temp;
	struct student *temp_p;
	temp_p = &temp;
	printf_s("������ѧ��������");
	scanf_s("%s",temp.name,20);
	printf_s("������ѧ�����䣺");
	scanf_s("%d",&temp.old);
	printf_s("������ѧ���Ա�(1.MALE , 2.FEMALE)��");
	scanf_s("%d", &temp.gender);
	printf_s("������ѧ������(yyyy/mm/dd)��");
	scanf_s("%d/%d/%d", &temp.date.year, &temp.date.month, &temp.date.date);
	printf_s("������ѧ���绰���룺");
	scanf_s("%s", temp.phone_number, 15);
	printf_s("������ѧ����ͥ��ַ��");
	scanf_s("%s", temp.address, 100);
	printf_s("������ѧ��E-mail��ַ��");
	scanf_s("%s", temp.e_mail, 40);
	fseek(stream,0,SEEK_END);
	fwrite(&temp,sizeof(student),1,stream);
	fclose(stream);
	info_mgt();
}

void stu_del()
{
	stu_list();
}

void stu_edit()
{

}

void stu_list()
{
	system("cls");
	struct student temp;
	int page=1,count;
	printf_s("****************\n");
	printf_s("*              *\n");
	printf_s("*   ѧ���б�   *\n");
	printf_s("*              *\n");
	printf_s("****************\n");
	extern FILE *stream;
	fopen_s(&stream, "stu_info.txt", "a+");
	fseek(stream, 0, SEEK_SET);
	for (count = 0;count<=7;count++ )
	{

	}
	fread(&temp, sizeof(student), 1,stream );
	printf_s("%s", temp.name, 20);
}