#include "cheats.h"

u32		g_apples;
u32		g_firef;
u32		g_waterf;
u32		g_lightf;
u32		g_raref;

void    assign_region(u32 region)
{
	g_apples = APPLES_ADDR;
	g_firef = FIREF_ADDR;
	g_waterf = WATERF_ADDR;
	g_lightf = LIGHTF_ADDR;
	g_raref = RAREF_ADDR;
	
    switch (region)
    {
		case USA:
		g_apples -= USA_DIFFERENCE;
		g_firef -= USA_DIFFERENCE;
		g_waterf -= USA_DIFFERENCE;
		g_lightf -= USA_DIFFERENCE;
		g_raref -= USA_DIFFERENCE;
		break;
		
		case JAP:
		g_apples -= JAP_DIFFERENCE;
		g_firef -= JAP_DIFFERENCE;
		g_waterf -= JAP_DIFFERENCE;
		g_lightf -= JAP_DIFFERENCE;
		g_raref -= JAP_DIFFERENCE;
		break;
    }
}

//Apples

void    set_current_apples(u32 value)
{
    WRITEU32(g_apples, value);
}

void    max_apples(void)
{
    set_current_apples(0x270F);
    update_apples_entry();
}

u32      get_current_apples(void)
{
    u32      current_apples;

    current_apples = READU32(g_apples);
    return (current_apples);
}

void    update_apples_entry(void)
{
    u32 current_apples;

    current_apples = get_current_apples();
    xsprintf(apples_level_buffer, "Current Apples: %d", current_apples);
}

void    increase_apples(void)
{
    u32  current_apples;

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
    u32  current_apples;

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

void    set_current_fireF(u32 value)
{
    WRITEU32(g_firef, value);
}

void    max_fireF(void)
{
    set_current_fireF(0x3E7);
    update_fireF_entry();
}

u32      get_current_fireF(void)
{
    u32      current_fireF;

    current_fireF = READU32(g_firef);
    return (current_fireF);
}

void    update_fireF_entry(void)
{
    u32 current_fireF;

    current_fireF = get_current_fireF();
    xsprintf(fireF_level_buffer, "Current Fire Fragments: %d", current_fireF);
}

void    increase_fireF(void)
{
    u32  current_fireF;

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
    u32  current_fireF;

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

void    set_current_waterF(u32 value)
{
    WRITEU32(g_waterf, value);
}

void    max_waterF(void)
{
    set_current_waterF(0x3E7);
    update_waterF_entry();
}

u32      get_current_waterF(void)
{
    u32      current_waterF;

    current_waterF = READU32(g_waterf);
    return (current_waterF);
}

void    update_waterF_entry(void)
{
    u32 current_waterF;

    current_waterF = get_current_waterF();
    xsprintf(waterF_level_buffer, "Current Water Fragsments: %d", current_waterF);
}

void    increase_waterF(void)
{
    u32  current_waterF;

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
    u32  current_waterF;

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

void    set_current_lightF(u32 value)
{
    WRITEU32(g_lightf, value);
}

void    max_lightF(void)
{
    set_current_lightF(0x3E7);
    update_lightF_entry();
}

u32      get_current_lightF(void)
{
    u32      current_lightF;

    current_lightF = READU32(g_lightf);
    return (current_lightF);
}

void    update_lightF_entry(void)
{
    u32 current_lightF;

    current_lightF = get_current_lightF();
    xsprintf(lightF_level_buffer, "Current Light Fragsments: %d", current_lightF);
}

void    increase_lightF(void)
{
    u32  current_lightF;

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
    u32  current_lightF;

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

void    set_current_rareF(u32 value)
{
    WRITEU32(g_raref, value);
}

void    max_rareF(void)
{
    set_current_rareF(0x3E7);
    update_rareF_entry();
}

u32      get_current_rareF(void)
{
    u32      current_rareF;

    current_rareF = READU32(g_raref);
    return (current_rareF);
}

void    update_rareF_entry(void)
{
    u32 current_rareF;

    current_rareF = get_current_rareF();
    xsprintf(rareF_level_buffer, "Current Rare Fragments: %d", current_rareF);
}

void    increase_rareF(void)
{
    u32  current_rareF;

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
    u32  current_rareF;

    current_rareF = get_current_rareF();
    if (current_rareF > 0)
        current_rareF--;
    else
        current_rareF = 0x3E7;
    set_current_rareF(current_rareF);
    update_rareF_entry();
    disableCheat(g_decrease_menu_index5);
}
