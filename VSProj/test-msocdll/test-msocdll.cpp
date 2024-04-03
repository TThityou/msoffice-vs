// test-msocdll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "./../../include/msoc.h"

int main()
{
	MSOC_encryptA("test-msocdll.xlsx", "./../bin/1.xlsx", "111", NULL);

	//中文
	MSOC_encryptA("test-msocdll-中文.xlsx", "./../bin/1中文.xlsx", "111", NULL);
	
	//全路径
	MSOC_encryptA(
		"C:\\Users\\Think\\Desktop\\pwd_dll\\msoffice\\bin\\test-msocdll-中文1.xlsx"
		, "C:\\Users\\Think\\Desktop\\pwd_dll\\msoffice\\bin\\1中文.xlsx"
		, "111"
		, NULL
	);

	//加密本身
	MSOC_encryptA("11.xlsx", "./../bin/11.xlsx", "111", NULL);
    return 0;
}

