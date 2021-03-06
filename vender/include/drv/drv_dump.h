/*************************************************************************
*   版权所有(C) 1987-2013, 深圳华为技术有限公司.
*
*   文 件 名 :  drv_dump.h
*
*   作    者 :  z67193
*
*   描    述 :
*
*   修改记录 :  2013年3月5日  v1.00  z67193创建
*************************************************************************/

#ifndef __DRV_DUMP_H__
#define __DRV_DUMP_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "product_config.h"
#include "drv_comm.h"


/*********************************** V7R1 继承 **********************************/
typedef enum tagMNTN_FILE_TYPE_E
{
	MNTN_TYPE_ZSP = 0,
	MNTN_TYPE_HIFI,
    MNTN_TYPE_MAX
}MNTN_FILE_TYPE_E;


#ifndef FUNC_VOID
typedef void (*func_void_t)(void);
#define FUNC_VOID func_void_t
#endif
extern int task_switch_hook_add (FUNC_VOID switchHook);
extern void int_switch_hook_add(FUNC_VOID pHookFunc);
extern void int_switch_hook_delete(void);

typedef BSP_S32 (*OM_SAVE_FUNC)(BSP_S32 funcType, BSP_U8 *data, BSP_U32 *ulLength);

BSP_VOID DRV_SYSTEM_ERROR(BSP_S32 modId, BSP_S32 arg1, BSP_S32 arg2, BSP_CHAR* arg3, BSP_S32 arg3Length);
BSP_S32  DRV_SAVE_REGISTER(BSP_S32 funcType, OM_SAVE_FUNC *pFunc);
BSP_U32  DRV_EXCH_MEM_MALLOC(BSP_U32 ulSize);
BSP_S32  DRV_EXCH_FILE_SAVE(BSP_VOID *address, BSP_U32 length, BSP_U8 IsFileEnd, BSP_U8 type);
BSP_VOID DRV_EXCH_HOOK_FUNC_ADD(BSP_VOID);
BSP_VOID DRV_EXCH_HOOK_FUNC_DELETE(BSP_VOID);
BSP_VOID DRV_STACK_HIGH_RECORD(BSP_VOID);
BSP_VOID DRV_VICINT_HOOK_ADD(pFUNCPTR p_Func);
BSP_VOID DRV_VICINT_HOOK_DEL(BSP_VOID);
BSP_VOID DRV_VICINT_IN_HOOK_ADD(pFUNCPTR p_Func);
BSP_VOID DRV_VICINT_IN_HOOK_DEL(BSP_VOID);
BSP_VOID DRV_VICINT_OUT_HOOK_ADD(pFUNCPTR p_Func);
BSP_VOID DRV_VICINT_OUT_HOOK_DEL(BSP_VOID);
BSP_VOID DRV_VICINT_LVLCHG_HOOK_ADD(pFUNCPTR p_Func);
BSP_VOID DRV_VICINT_LVLCHG_HOOK_DEL(BSP_VOID);



/*********************************** V7R2 新增 **********************************/
#ifdef BSP_CONFIG_HI3630

#define DUMP_MAX_FIX_FIELD_NUM 100
typedef enum{
    /*AP FIELD IDs*/
    /*
      Modem在AP部分代码使用0x01100000~0x011fffff
      0x0120000~0x01ffffff AP代码使用
    */
    DUMP_AP_FIELD_BEGIN = (0x01100000),
    DUMP_SAVE_MOD_USB = DUMP_AP_FIELD_BEGIN,
    DUMP_SAVE_MOD_OSA_APP,
    DUMP_SAVE_MOD_DRX_ACORE,
    DUMP_SAVE_MOD_LP_ACORE,
    DUMP_SAVE_MOD_LP_ACORE_BUSERROR,
    DUMP_SAVE_MOD_ICC_ACORE,
    DUMP_AP_FIELD_END,

    /*CP FIELD IDs*/
    /* FIX */
    DUMP_CP_FIELD_BEGIN = (0x02000000),
    DUMP_CP_BASE_INFO   = DUMP_CP_FIELD_BEGIN,
    DUMP_CP_TASK_SWITCH,
    DUMP_CP_INTLOCK,
    DUMP_CP_TASK_STACK,
    DUMP_CP_INT_STACK,
    DUMP_CP_ALLTASK,
    DUMP_CP_ALLTASK_TCB,
    DUMP_CP_PRINT,
    DUMP_CP_DMESG,
    DUMP_CP_REGS,
    DUMP_CP_CPUVIEW,
    DUMP_CP_MEMINFO,
    DUMP_CP_USER_DATA,
    DUMP_CP_BBE16_TCM,
    DUMP_SAVE_MOD_DRX_CCORE,
    DUMP_CP_TASK_TCB,
    DUMP_CP_RSV,
    /* DYNAMIC */
    DUMP_SAVE_MOD_SIM0 = DUMP_CP_FIELD_BEGIN + DUMP_MAX_FIX_FIELD_NUM,
    DUMP_SAVE_MOD_SIM1,
    DUMP_SAVE_MOD_OSA_COMM,
    DUMP_SAVE_MOD_LP_CCORE,
    DUMP_SAVE_MOD_LP_CCORE_BUSERROR,
    DUMP_SAVE_MOD_UTRACE,
    DUMP_SAVE_MOD_OSA_MEM,
    DUMP_SAVE_MOD_OM_MSG,
    DUMP_SAVE_MOD_OM_LOG,
    DUMP_SAVE_MOD_BOOST,
	DUMP_SAVE_MOD_ICC_CCORE,
	DUMP_SAVE_MOD_MSP_SLEEP,
    DUMP_SAVE_MOD_AMON,
    DUMP_SAVE_MOD_TLPS,   /* leixiantiao 00258641 2014-4-7 */
    DUMP_SAVE_MOD_RUN_TRACE, /* 打点跟踪区域 */ 
	DUMP_CP_FIELD_END,

    /*LPM3 FIELD IDs*/
    DUMP_LPM3_FIELD_BEGIN = (0x04000000),
    DUMP_SAVE_MOD_LP_MCORE_BUSERROR = DUMP_LPM3_FIELD_BEGIN,
	DUMP_SAVE_MOD_ICC_MCORE,
	DUMP_LPM3_FIELD_END,

}DUMP_SAVE_MOD_ENUM;

/* 可维可测已提前保留的区域大小, 由使用者自己填写大小, 与DUMP_SAVE_MODE_ENUM对应 */
#define DUMP_EXT_USB_DATA_SIZE                       (0x2000)
#define DUMP_EXT_SCI0_DATA_SIZE                      (0x4000)
#define DUMP_EXT_SCI1_DATA_SIZE                      (0x4000)
#define DUMP_EXT_OM_MSG_SIZE                         (0)
#define DUMP_EXT_OM_LOG_SIZE                         (0)
#define DUMP_INTER_OSA_APP_SIZE                      (64*1024)
#define DUMP_INTER_OSA_COMM_SIZE                     (64*1024)
#define DUMP_EXT_OM_UTRACE_DATA_SIZE                 (0x2400)
#define DUMP_EXT_OM_DRX_ACORE_SIZE                   (0x2000)
#define DUMP_EXT_OM_DRX_CCORE_SIZE                   (0x2000)
#define DUMP_EXT_LOW_POWER_ACORE_SIZE                (0x400)
#define DUMP_EXT_LOW_POWER_CCORE_SIZE                (0x400)
#define DUMP_EXT_LOW_POWER_ACORE_BUSERROR_SIZE       (0x400)
#define DUMP_EXT_LOW_POWER_CCORE_BUSERROR_SIZE       (0x400)
#define DUMP_EXT_LOW_POWER_MCORE_BUSERROR_SIZE       (0x400)
#define DUMP_EXT_ICC_ACORE_SIZE                      (0x400)
#define DUMP_EXT_ICC_CCORE_SIZE                      (0x400)
#define DUMP_EXT_ICC_MCORE_SIZE                      (0x400)
#define DUMP_EXT_BOOST_MCORE_SIZE                    (0x400)
#define DUMP_EXT_MSP_SLEEP_SIZE                      (0x1000)
#define DUMP_EXT_AMON_SIZE                           (0x1000)
/* leixiantiao 00258641 2014-4-7 begin */
#define DUMP_EXT_TLPS_SIZE                           (0x1000)
/* leixiantiao 00258641 2014-4-7 end */
#define DUMP_EXT_RUN_TRACE_SIZE                      (0x400)

#else

typedef enum{
    DUMP_SAVE_MOD_USB       = 0,
    DUMP_SAVE_MOD_SIM0,
    DUMP_SAVE_MOD_SIM1,
    DUMP_SAVE_MOD_OM_MSG,
    DUMP_SAVE_MOD_OM_LOG,
    DUMP_SAVE_MOD_OSA_APP,
    DUMP_SAVE_MOD_OSA_COMM,
    DUMP_SAVE_MOD_UTRACE,
    DUMP_SAVE_MOD_DRX_ACORE,
    DUMP_SAVE_MOD_DRX_CCORE,
    DUMP_SAVE_MOD_OSA_MEM,
    DUMP_SAVE_MOD_LP_ACORE,
    DUMP_SAVE_MOD_LP_CCORE,
    DUMP_SAVE_MOD_LP_ACORE_BUSERROR,
    DUMP_SAVE_MOD_LP_CCORE_BUSERROR,
    DUMP_SAVE_MOD_LP_MCORE_BUSERROR,
    DUMP_SAVE_MOD_ICC_ACORE,
    DUMP_SAVE_MOD_ICC_CCORE,
    DUMP_SAVE_MOD_ICC_MCORE,
    DUMP_SAVE_MOD_BOOST,
    DUMP_SAVE_MOD_MSP_SLEEP,
    DUMP_SAVE_MOD_AMON,
    DUMP_SAVE_MOD_TLPS,
    DUMP_SAVE_MOD_BUTT
}DUMP_SAVE_MOD_ENUM;

#endif



typedef enum{
    DUMP_SAVE_FILE_OM       = 0,
    DUMP_SAVE_FILE_DIAG,
    DUMP_SAVE_FILE_ZSP,
    DUMP_SAVE_FILE_HIFI,
    DUMP_SAVE_FILE_NCM,
    DUMP_SAVE_FILE_BUTT
}DUMP_SAVE_FILE_ENUM;

typedef enum{
    DUMP_SAVE_FILE_MODE_CREATE       = 0,
    DUMP_SAVE_FILE_MODE_APPEND,
    DUMP_SAVE_FILE_MODE_BUTT
}DUMP_SAVE_FILE_MODE_ENUM;

typedef BSP_VOID (*DUMP_SAVE_HOOK)(BSP_VOID);

BSP_S32 DRV_DUMP_SAVE_REGISTER_HOOK(DUMP_SAVE_MOD_ENUM ModId, DUMP_SAVE_HOOK pFunc);
BSP_S32 DRV_DUMP_GET_BUFFER(DUMP_SAVE_MOD_ENUM ModId, BSP_CHAR** buffer, BSP_U32* length);
BSP_S32 DRV_DUMP_SAVE_FILE(DUMP_SAVE_FILE_ENUM FileId, BSP_CHAR* buffer, BSP_U32 length, DUMP_SAVE_FILE_MODE_ENUM mode);


#ifdef __cplusplus
}
#endif

#endif

