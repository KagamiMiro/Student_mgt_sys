// students_management_system.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"
#include "windows.h"
#include "ctype.h"
#include "conio.h"
#include "manage.h"
#define MAX_STUDENT 100

int main()
{
	welcome();
	return 0;
}






















/*FILE *stream;
fopen_s(&stream,"information.txt", "r+");
struct student a;
struct student b;
struct student c;
a.gender = MALE;
a.old = 18;
a.date.year = 2018;
a.date.month = 2;
a.date.date = 10;
strcpy_s(a.address,21,"test.address");
strcpy_s(a.phone_number,21,"test.number");
strcpy_s(a.e_mail,21,"test.mail");
strcpy_s(a.name, 21, "test.name");
c = a;
fwrite(&a, sizeof(student), 1, stream);
fwrite(&c, sizeof(student), 1, stream);
fseek(stream,sizeof(student)+1, SEEK_SET);
fread(&b, sizeof(student), 1, stream);
printf_s("%d",b.old);*/

