#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "LzmaMy.h"
int main(){	
	//����ѹ���ļ�
	if(LzmaCompress("test/2.txt","test/2.lzma"))
		printf("LzmaCompress OK \n");
	else
		printf("LzmaCompress ERR \n");
    //���Խ�ѹ���ļ�
	if(LzmaUncompress("test/2.lzma","test/2.exe"))
		printf("LzmaUncompress OK \n");
	else
		printf("LzmaUncompress ERR \n");
	system("PAUSE");
	return 0;
}