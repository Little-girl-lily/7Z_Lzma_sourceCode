#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "LzmaMy.h"
int main(){	
	//测试压缩文件
	if(LzmaCompress("test/2.txt","test/2.lzma"))
		printf("LzmaCompress OK \n");
	else
		printf("LzmaCompress ERR \n");
    //测试解压缩文件
	if(LzmaUncompress("test/2.lzma","test/2.exe"))
		printf("LzmaUncompress OK \n");
	else
		printf("LzmaUncompress ERR \n");
	system("PAUSE");
	return 0;
}