#ifndef CHEATS_H
#define CHEATS_H

#include "../Includes/plugin.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define     ADD32(addr, value)         			*(u32 *)addr += value
#define     SUB32(addr, value)         			*(u32 *)addr -= value
#define     ADD64(addr, value)                  *(vs64 *)addr += value
#define     SUB64(addr, value)                  *(vs64 *)addr -= value
#define		ADD16(addr, value)					*(u16 *)addr += value
#define		SUB16(addr, value)					*(u16 *)addr -= value
#define     ADDTOFLOAT(addr, add_value)         *(float *)addr += (float)add_value
#define     SUBTOFLOAT(addr, sub_value)         *(float *)addr -= (float)sub_value

/*
 Addresses
*/

#define		APPLES_ADDR				0x302B21EC
#define		FIREF_ADDR				0x302B220C
#define		WATERF_ADDR				0x302B2210
#define		LIGHTF_ADDR				0x302B2214
#define		RAREF_ADDR				0x302B2218
#define		TREESIZE_ADDR			0x302B2209
#define		VIGOUR_ADDR				0x302B23E8
#define		ACHIEVEMENTS_ADDR		0x302B19EC
#define		ITEMS_ADDR				0x302B2220
#define		EXP_ADDR				0x302B15A4


#define		USA_DIFFERENCE			0x1C20
#define		JAP_DIFFERENCE			0x3BE0


enum
{
    EUR = 0,
    USA,
    JAP
};

/*
Globals
*/
 
extern char    apples_level_buffer[40];
extern char    fireF_level_buffer[40];
extern char    waterF_level_buffer[40];
extern char    lightF_level_buffer[40];
extern char    rareF_level_buffer[40];
extern char    BookLVL_level_buffer[40];
extern int     g_increase_menu_index1;
extern int     g_decrease_menu_index1;
extern int     g_increase_menu_index2;
extern int     g_decrease_menu_index2;
extern int     g_increase_menu_index3;
extern int     g_decrease_menu_index3;
extern int     g_increase_menu_index4;
extern int     g_decrease_menu_index4;
extern int     g_increase_menu_index5;
extern int     g_decrease_menu_index5;
extern int     g_increase_menu_index6;
extern int     g_decrease_menu_index6;
 
/*
Cheats
*/

void    disable_entry(int identifier);
void    assign_region(u32 region);

void	update_apples_entry(void);
void    increase_apples(void);
void    decrease_apples(void);
void	max_apples(void);
void	update_fireF_entry(void);
void    increase_fireF(void);
void    decrease_fireF(void);
void	max_fireF(void);
void	update_waterF_entry(void);
void    increase_waterF(void);
void    decrease_waterF(void);
void	max_waterF(void);
void	update_lightF_entry(void);
void    increase_lightF(void);
void    decrease_lightF(void);
void	max_lightF(void);
void	update_rareF_entry(void);
void    increase_rareF(void);
void    decrease_rareF(void);
void	max_rareF(void);
void	TreeSizer(void);
void	infVigour(void);
void	AllAchieve(void);
void	AchieveWirePass(void);
void	BoughtEquimentDX(void);
void	UnlockEquipment(void);
void	UnlockEquipmentDX(void);
void	MaxSupportItems(void);
void    update_BookLVL_entry(void);
void    increase_BookLVL(void);
void    decrease_BookLVL(void);
void	Exp1000(void);

#endif
