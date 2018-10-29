#pragma once
#define MALE 1
#define FEMALE 0
struct date_of_birth
{
	int year;
	int month;
	int date;
};

struct student
{
	char name[20];
	int gender;
	int old;
	char phone_number[13];
	struct date_of_birth date;
	char address[100];
	char e_mail[40];
};

struct hash
{
	struct hash *left;
	struct hash *right;
	char name[20];
	struct link *p;
	int if_linked = 0;
};

struct link
{
	char name[20];
	struct link *p;
	int if_linked = 0;
};

void clear();

void welcome();

void info_mgt();

void stu_add();

void stu_del();

void stu_edit();

void stu_list();

int compare(char*, char*);