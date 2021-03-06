/**************************************************************
CAUTION : This file is Auto Generated by VBA based on *.xls.
          So, don't modify this file manually!
***************************************************************/
#ifndef V711_UDP_IOS_AO_CONFIG_H_
#define V711_UDP_IOS_AO_CONFIG_H_

/*配置管脚复用关系、内部上下拉以及驱动能力*/
#define V711_UDP_IOS_AO_CONFIG \
do{\
\
/*配置PMU(10个PIN)*/\
\
/*配置USIM0（3个PIN）*/\
\
/*配置UART0（2个PIN）*/\
    /*uart0_txd管脚上下拉配置*/\
    PUSET_IOS_AO_IOM_CTRL12;\
\
\
/*配置GPIO(4个PIN）*/\
    /*gpio0[2]管脚上下拉配置*/\
    PUSET_IOS_AO_IOM_CTRL14;\
\
    /*gpio0[3]管脚上下拉配置*/\
    PUSET_IOS_AO_IOM_CTRL15;\
\
    /*gpio0[4]管脚上下拉配置*/\
    PUSET_IOS_AO_IOM_CTRL16;\
\
    /*gpio0[5]管脚上下拉配置*/\
    PUSET_IOS_AO_IOM_CTRL17;\
\
\
/*配置JTAG_DFM_MODE(1个PIN）*/\
\
/*配置USB(5个PIN）*/\
\
}while(0)

/*管脚配置宏for drv*/
#define V711_UDP_IOS_CONFIG \
do{\
    V711_UDP_IOS_AO_CONFIG;\
    V711_UDP_IOS_PD_CONFIG;\
}while(0)

#endif

