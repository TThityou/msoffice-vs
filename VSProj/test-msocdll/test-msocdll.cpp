// test-msocdll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "./../../include/msoc.h"

int main()
{
	MSOC_encryptA("test-msocdll.xlsx", "./../bin/1.xlsx", "111", NULL);

	//����
	MSOC_encryptA("test-msocdll-����.xlsx", "./../bin/1����.xlsx", "111", NULL);
	
	//ȫ·��
	MSOC_encryptA(
		"C:\\Users\\Think\\Desktop\\pwd_dll\\msoffice\\bin\\test-msocdll-����1.xlsx"
		, "C:\\Users\\Think\\Desktop\\pwd_dll\\msoffice\\bin\\1����.xlsx"
		, "111"
		, NULL
	);

	//���ܱ���
	MSOC_encryptA("11.xlsx", "./../bin/11.xlsx", "111", NULL);
    return 0;
}

