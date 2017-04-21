#include "cheats.h"

u32		g_apples;
u32		g_firef;
u32		g_waterf;
u32		g_lightf;
u32		g_raref;
u32		g_tree;
u32		g_vigour;
u32		g_achieve;
u32		g_items;
u32		g_exp;

void    assign_region(u32 region)
{
	g_apples = APPLES_ADDR;
	g_firef = FIREF_ADDR;
	g_waterf = WATERF_ADDR;
	g_lightf = LIGHTF_ADDR;
	g_raref = RAREF_ADDR;
	g_tree = TREESIZE_ADDR;
	g_vigour = VIGOUR_ADDR;
	g_achieve = ACHIEVEMENTS_ADDR;
	g_items = ITEMS_ADDR;
	g_exp = EXP_ADDR;
	
    switch (region)
    {
		case USA:
		g_apples -= USA_DIFFERENCE;
		g_firef -= USA_DIFFERENCE;
		g_waterf -= USA_DIFFERENCE;
		g_lightf -= USA_DIFFERENCE;
		g_raref -= USA_DIFFERENCE;
		g_tree -= USA_DIFFERENCE;
		g_vigour -= USA_DIFFERENCE;
		g_achieve -= USA_DIFFERENCE;
		g_items -= USA_DIFFERENCE;
		g_exp -= USA_DIFFERENCE;
		break;
		
		case JAP:
		g_apples -= JAP_DIFFERENCE;
		g_firef -= JAP_DIFFERENCE;
		g_waterf -= JAP_DIFFERENCE;
		g_lightf -= JAP_DIFFERENCE;
		g_raref -= JAP_DIFFERENCE;
		g_tree -= JAP_DIFFERENCE;
		g_vigour -= JAP_DIFFERENCE;
		g_achieve -= JAP_DIFFERENCE;
		g_items -= JAP_DIFFERENCE;
		g_exp -= JAP_DIFFERENCE;
		break;
    }
}

//Apples

void    set_current_apples(u16 value)
{
    WRITEU16(g_apples, value);
}

void    max_apples(void) //Maximum Apples
{
    set_current_apples(0x270F);
    update_apples_entry();
}

u16      get_current_apples(void)
{
    u16      current_apples;

    current_apples = READU16(g_apples);
    return (current_apples);
}

void    update_apples_entry(void)
{
    u16 current_apples;

    current_apples = get_current_apples();
    xsprintf(apples_level_buffer, "Current Apples: %d", current_apples);
}

void    increase_apples(void)
{
    u16  current_apples;

    current_apples = get_current_apples();
    if (current_apples < 0x270F)
        current_apples++;
    else
        current_apples = 0;
    set_current_apples(current_apples);
    update_apples_entry();
    disableCheat(g_increase_menu_index1);
}

void    decrease_apples(void)
{
    u16  current_apples;

    current_apples = get_current_apples();
    if (current_apples > 0)
        current_apples--;
    else
        current_apples = 0x270F;
    set_current_apples(current_apples);
    update_apples_entry();
    disableCheat(g_decrease_menu_index1);
}

//Fire Fragments

void    set_current_fireF(u16 value)
{
    WRITEU16(g_firef, value);
}

void    max_fireF(void) //Max Fire Fragments
{
    set_current_fireF(0x3E7);
    update_fireF_entry();
}

u16      get_current_fireF(void)
{
    u16      current_fireF;

    current_fireF = READU16(g_firef);
    return (current_fireF);
}

void    update_fireF_entry(void)
{
    u16 current_fireF;

    current_fireF = get_current_fireF();
    xsprintf(fireF_level_buffer, "Current Fire Fragments: %d", current_fireF);
}

void    increase_fireF(void)
{
    u16  current_fireF;

    current_fireF = get_current_fireF();
    if (current_fireF < 0x3E7)
        current_fireF++;
    else
        current_fireF = 0;
    set_current_fireF(current_fireF);
    update_fireF_entry();
    disableCheat(g_increase_menu_index2);
}

void    decrease_fireF(void)
{
    u16  current_fireF;

    current_fireF = get_current_fireF();
    if (current_fireF > 0)
        current_fireF--;
    else
        current_fireF = 0x3E7;
    set_current_fireF(current_fireF);
    update_fireF_entry();
    disableCheat(g_decrease_menu_index2);
}

//Water Fragments

void    set_current_waterF(u16 value)
{
    WRITEU16(g_waterf, value);
}

void    max_waterF(void) //Max Water Fragments
{
    set_current_waterF(0x3E7);
    update_waterF_entry();
}

u16      get_current_waterF(void)
{
    u16      current_waterF;

    current_waterF = READU16(g_waterf);
    return (current_waterF);
}

void    update_waterF_entry(void)
{
    u16 current_waterF;

    current_waterF = get_current_waterF();
    xsprintf(waterF_level_buffer, "Current Water Fragsments: %d", current_waterF);
}

void    increase_waterF(void)
{
    u16  current_waterF;

    current_waterF = get_current_waterF();
    if (current_waterF < 0x3E7)
        current_waterF++;
    else
        current_waterF = 0;
    set_current_waterF(current_waterF);
    update_waterF_entry();
    disableCheat(g_increase_menu_index3);
}

void    decrease_waterF(void)
{
    u16  current_waterF;

    current_waterF = get_current_waterF();
    if (current_waterF > 0)
        current_waterF--;
    else
        current_waterF = 0x3E7;
    set_current_waterF(current_waterF);
    update_waterF_entry();
    disableCheat(g_decrease_menu_index3);
}

//Light Fragments

void    set_current_lightF(u16 value)
{
    WRITEU16(g_lightf, value);
}

void    max_lightF(void) //Max Light Fragments
{
    set_current_lightF(0x3E7);
    update_lightF_entry();
}

u16      get_current_lightF(void)
{
    u16      current_lightF;

    current_lightF = READU16(g_lightf);
    return (current_lightF);
}

void    update_lightF_entry(void)
{
    u16 current_lightF;

    current_lightF = get_current_lightF();
    xsprintf(lightF_level_buffer, "Current Light Fragsments: %d", current_lightF);
}

void    increase_lightF(void)
{
    u16  current_lightF;

    current_lightF = get_current_lightF();
    if (current_lightF < 0x3E7)
        current_lightF++;
    else
        current_lightF = 0;
    set_current_lightF(current_lightF);
    update_lightF_entry();
    disableCheat(g_increase_menu_index4);
}

void    decrease_lightF(void)
{
    u16  current_lightF;

    current_lightF = get_current_lightF();
    if (current_lightF > 0)
        current_lightF--;
    else
        current_lightF = 0x3E7;
    set_current_lightF(current_lightF);
    update_lightF_entry();
    disableCheat(g_decrease_menu_index4);
}


//Rare Fragments

void    set_current_rareF(u16 value)
{
    WRITEU16(g_raref, value);
}

void    max_rareF(void) //Max Rare Fragments
{
    set_current_rareF(0x3E7);
    update_rareF_entry();
}

u16      get_current_rareF(void)
{
    u16      current_rareF;

    current_rareF = READU16(g_raref);
    return (current_rareF);
}

void    update_rareF_entry(void)
{
    u16 current_rareF;

    current_rareF = get_current_rareF();
    xsprintf(rareF_level_buffer, "Current Rare Fragments: %d", current_rareF);
}

void    increase_rareF(void)
{
    u16  current_rareF;

    current_rareF = get_current_rareF();
    if (current_rareF < 0x3E7)
        current_rareF++;
    else
        current_rareF = 0;
    set_current_rareF(current_rareF);
    update_rareF_entry();
    disableCheat(g_increase_menu_index5);
}

void    decrease_rareF(void)
{
    u16  current_rareF;

    current_rareF = get_current_rareF();
    if (current_rareF > 0)
        current_rareF--;
    else
        current_rareF = 0x3E7;
    set_current_rareF(current_rareF);
    update_rareF_entry();
    disableCheat(g_decrease_menu_index5);
}

void	TreeSizer(void) //Max Tree Size
{
	if (is_pressed(BUTTON_X))
	{
	WRITEU16(g_tree, 0x0BB8);
	}
}

void	infVigour(void) //Infinite Vigour
{
	WRITEU8(g_vigour, 0x6E);
}

void	AllAchieve(void)
{
	if (is_pressed(BUTTON_X + BUTTON_B)) //Unlock All Achievements.
	{
		for (int i = 0; i < 254; i++)
		{
			WRITEU8(g_achieve + (i * 8), 0x04);
		}
	}
}

void	AchieveWirePass(void)
{
	if (is_pressed(BUTTON_X + BUTTON_DR)) //Unlock Wireless And Password Achievements.
	{
		for (int i = 0; i < 6; i++)
		{
			WRITEU8(g_achieve + 0x708 + (i * 8), 0x04);
			WRITEU8(g_achieve + 0x7D0, 0x04);
		}
	}
}

void	EquipmentState(u32 state) //All Equipment State Modifier
{
	for (int i = 0; i < 88; i++)
	{
		WRITEU32(g_items + 0x1 + (i * 4), state);
	}
}

void	BoughtEquimentDX(void) //Sets 'sold out & DX' state for all items.
{
	EquipmentState(0x00000401);
}

void	UnlockEquipment(void) //Sets 'Can buy' state for all items.
{
	u32 def = 0x00000300;
	EquipmentState(0x00000200);
	WRITEU32(g_items + 0x02, def);
	WRITEU32(g_items + 0x2E, def);
	WRITEU32(g_items + 0x5A, def);
	WRITEU32(g_items + 0x86, def);
	WRITEU32(g_items + 0xB2, def);
	WRITEU32(g_items + 0xDE, def);
	WRITEU32(g_items + 0x10A, def);
	WRITEU32(g_items + 0x136, def);
}

void	UnlockEquipmentDX(void) //Sets 'Can buy DX' state for all items.
{
	EquipmentState(0x00000201);
}

void	MaxSupportItems(void) //99 Potion & Orb
{
	for (int i = 0; i < 3; i++)
	{
		WRITEU16(g_items + 0x172 + (i * 4), 0x6303);
	}
}

u8      get_current_BookLVL(void)
{
    u8      current_BookLVL;

    current_BookLVL = READU8(g_items + 0x161);
    return (current_BookLVL);
}

void    set_current_BookLVL(u8 value) //Sets Codex as sold out and sets level
{
    u8  current_BookLVL;

    current_BookLVL = get_current_BookLVL();
	for (int i = 0; i < 4; i++)
	{
		WRITEU32(g_items + 0x160 + (i * 4), 0x01020000); //amount,status(sold out),level,00
		WRITEU8(g_items + 0x161 + (i * 4), value);
		current_BookLVL = get_current_BookLVL();
		
		if (current_BookLVL == 0x03)
		{
			WRITEU32(g_items + 0x160 + (i * 4), 0x01040300);
		}
	}
}

void    update_BookLVL_entry(void)
{
    u8 current_BookLVL;
	char cur_BookLVL[20];

    current_BookLVL = get_current_BookLVL();
	
	if (current_BookLVL == 0x03)
	{
		strcpy( cur_BookLVL, "Ultimate");
	}
	else if (current_BookLVL == 0x02)
	{
		strcpy( cur_BookLVL, "Volume 3");
	}
	else if (current_BookLVL == 0x01)
	{
		strcpy( cur_BookLVL, "Volume 2");
	}
	else if (current_BookLVL == 0x00)
	{
		strcpy( cur_BookLVL, "Volume 1");
	}
	else 
	{
		strcpy( cur_BookLVL, "Unknown!");
	}
	
    xsprintf(BookLVL_level_buffer, "Current Codex Levels: %s\n", cur_BookLVL);
}

void    increase_BookLVL(void)
{
    u8  current_BookLVL;

    current_BookLVL = get_current_BookLVL();
    if (current_BookLVL < 0x3)
        current_BookLVL++;
    else
        current_BookLVL = 0;
    set_current_BookLVL(current_BookLVL);
    update_BookLVL_entry();
    disableCheat(g_increase_menu_index6);
}

void    decrease_BookLVL(void)
{
    u8  current_BookLVL;

    current_BookLVL = get_current_BookLVL();
    if (current_BookLVL > 0)
        current_BookLVL--;
    else
        current_BookLVL = 0x3;
    set_current_BookLVL(current_BookLVL);
    update_BookLVL_entry();
    disableCheat(g_decrease_menu_index6);
}

void	Exp1000(void) //Add 1000 Exp
{
	u32 current_exp;
	
	if (is_pressed(BUTTON_X))
	{
		current_exp = READU32(g_exp);
		
		if (current_exp < 0x0F423F)
		{
		ADD16(g_exp, 0x3E8);
		ADD16((g_exp + 0xC), 0x3E8);
		ADD16((g_exp + 0x18), 0x3E8);
		ADD16((g_exp + 0x24), 0x3E8);
		wait_all_released();
		}
		
		else
		{
			WRITEU32(g_exp, 0x0F423F);
		}
	}
}