/**
 * @section descr File description
 *
 * Spider platform specific handlers
 *
 * @section copyright Copyright
 *
 * Trampoline OS
 *
 * Trampoline is copyright (c) IRCCyN 2005+
 * Copyright DG for function and data structures documentation and THUMB2 port
 * Trampoline is protected by the French intellectual property law.
 *
 * This software is distributed under the Lesser GNU Public Licence
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#include "tpl_os.h"
#include "tpl_os_interrupt_kernel.h"
#include "emblib.h"

/******************************************************************************
 * Exception handlers.
 ******************************************************************************/

/******************************************************************************
 * IRQ acknowledge functions.
 ******************************************************************************/
FUNC(void, OS_CODE) ARM_TIMER_ClearFlag(void);
