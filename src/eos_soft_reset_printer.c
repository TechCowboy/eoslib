#include <arch/z80.h>
#include "eos.h"

/** 
 * @brief Soft reset printer
 * @return status code 128 = complete
 *
 */

unsigned char eos_soft_reset_printer(void)
{
  Z80_registers r;
  
  AsmCall(0xFC96,&r,REGS_ALL,REGS_ALL);
  
  return r.Bytes.A;
}
