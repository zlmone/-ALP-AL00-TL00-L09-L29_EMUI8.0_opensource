#ifndef __DDR_RESTORE_MAP_H__
#define __DDR_RESTORE_MAP_H__ 
#include <ddr_data_struct.h>
#define PART_DDR_TRAIN "ddr_para"
#define RESTORE_MAGIC_PLAT_MASK (0xFFFF0000)
#define RESTORE_HEAD_ADDR (0x1000UL)
#define RESTORE_HEAD_SIZE (0x100UL)
#define RESTORE_DDR_TRAIN_PARAM_HEAD_ADDR (0x2000UL)
#define RESTORE_DDR_TRAIN_PARAM_HEAD_SIZE (0x30UL)
#define RESTORE_DDR_TRAIN_PARAM_ADDR (RESTORE_DDR_TRAIN_PARAM_HEAD_ADDR + RESTORE_DDR_TRAIN_PARAM_HEAD_SIZE)
#define RESTORE_DDR_TRAIN_PARAM_SIZE (0x5FF0UL)
#define RESTORE_DDR_FIRST_TRAIN_PARAM_BK_ADDR (0x3A000UL)
#define RESTORE_DDR_TRAIN_PARAM_BK_SIZE (RESTORE_DDR_TRAIN_PARAM_HEAD_SIZE + RESTORE_DDR_TRAIN_PARAM_SIZE)
#define RESTORE_DDR_TRAIN_PARAM_BK_ADDR (RESTORE_DDR_FIRST_TRAIN_PARAM_BK_ADDR + RESTORE_DDR_TRAIN_PARAM_BK_SIZE)
#define RESTORE_DDR_TRAIN_PARAM_BK_MAX_NUM (0x10UL)
#endif
