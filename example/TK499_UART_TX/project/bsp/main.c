/****************************************Copyright (c)****************************************************
** 
**                                      
**
**--------------File Info---------------------------------------------------------------------------------
** File name:			main.c
** modified Date:  		2019-8-12
** Last Version:		V0.1
** Descriptions:		  main 函数调用
** Author : xiao chen
** Historical Version :
** 好钜润科技，芯片事业部----深圳龙华应用分部
*********************************************************************************************************/
#include "HAL_conf.h"
#include "UART.h"
#include "sys.h"
/********************************************************************************************************
**函数信息 ：int main (void)                          
**功能描述 ：
**输入参数 ：
**输出参数 ：
********************************************************************************************************/

int main(void)
{
	int i;
	RemapVtorTable();
	UartInit(UART1,460800);     //UART1 初始化，串口接收到ASCII码会进入中断,打印出ASCII值
		
	while(1)                    //无限循环
	{
			printf("\r\n HJR TK499 \r\n");	
			printf(" UART1 OK \r\n");
			printf(" welcome to use TK499!\r\n");
		
			i=10000000;while(i--);  //延时
	}
}



