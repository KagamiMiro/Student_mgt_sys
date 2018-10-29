
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
	printf_s("\t\t*              欢迎来到学生管理系统              *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     1.管理学生信息            2.查询学生       *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     3.查询学生学籍变化情况    4.退出           *\n");
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
	printf_s("\t\t*                  管理学生信息                  *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     1.添加学生            2.删除学生           *\n");
	printf_s("\t\t*                                                *\n");
	printf_s("\t\t*     3.编辑学生信息        4.返回               *\n");
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
	printf_s("请输入学生姓名：");
	scanf_s("%s",temp.name,20);
	printf_s("请输入学生年龄：");
	scanf_s("%d",&temp.old);
	printf_s("请输入学生性别(1.MALE , 2.FEMALE)：");
	scanf_s("%d", &temp.gender);
	printf_s("请输入学生生日(yyyy/mm/dd)：");
	scanf_s("%d/%d/%d", &temp.date.year, &temp.date.month, &temp.date.date);
	printf_s("请输入学生电话号码：");
	scanf_s("%s", temp.phone_number, 15);
	printf_s("请输入学生家庭地址：");
	scanf_s("%s", temp.address, 100);
	printf_s("请输入学生E-mail地址：");
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
	printf_s("*   学生列表   *\n");
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