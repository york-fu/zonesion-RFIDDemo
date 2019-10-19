/*********************************************************************************************
* 文件：time.h
* 作者：
* 说明：time头文件
* 修改：
* 注释：
*********************************************************************************************/
#ifndef _time_h_
#define _time_h_

#include "sys.h"

extern u8 t1Update;

/*********************************************************************************************
* 名称：time1Int_init
* 功能：定时器1中断初始化
* 参数：
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void time1Int_init(void);

#endif