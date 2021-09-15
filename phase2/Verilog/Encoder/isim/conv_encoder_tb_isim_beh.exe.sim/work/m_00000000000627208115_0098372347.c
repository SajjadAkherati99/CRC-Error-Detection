/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/my_files/course/term8/FPGA/project/phase2/Verilog/Encoder/conv_encoder_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static const char *ng3 = "scrambled_MATLAB.txt";
static const char *ng4 = "r";
static const char *ng5 = "encoded_verilog.txt";
static const char *ng6 = "w";
static unsigned int ng7[] = {1U, 0U};
static const char *ng8 = "%b";
static unsigned int ng9[] = {3U, 0U};
static const char *ng10 = " %b";
static unsigned int ng11[] = {2U, 0U};



static void Initial_27_0(char *t0)
{
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB4:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng3, ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng5, ng6);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t4, 0, t8, 0, 1);
    *((int *)t9) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng8, 2, t0, (char)118, t4, 1);
    t10 = (t9 + 4);
    *((int *)t10) = 0;
    t11 = (t0 + 1608);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t9, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 300000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(45, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_48_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_50_2(char *t0)
{
    char t16[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);

LAB9:    xsi_set_current_line(52, ng0);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 1608);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t16, 0, t19, 0, 1);
    *((int *)t20) = xsi_vlogfile_fscanf(*((unsigned int *)t15), ng8, 2, t0, (char)118, t16, 1);
    t21 = (t20 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 1);
    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t24 = (t11 ^ t12);
    t25 = (t10 | t24);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t5);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB13;

LAB10:    if (t28 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t16) = 1;

LAB13:    t7 = (t16 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t16);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t24 = (t11 ^ t12);
    t25 = (t10 | t24);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t5);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB21;

LAB18:    if (t28 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t16) = 1;

LAB21:    t7 = (t16 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t16);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t24 = (t11 ^ t12);
    t25 = (t10 | t24);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t5);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB28;

LAB25:    if (t28 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t16) = 1;

LAB28:    t7 = (t16 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t16);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB24:
LAB16:    goto LAB8;

LAB12:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(53, ng0);

LAB17:    xsi_set_current_line(54, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t20, 0, 8);
    t17 = (t20 + 4);
    t19 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (t36 >> 1);
    t38 = (t37 & 1);
    *((unsigned int *)t20) = t38;
    t39 = *((unsigned int *)t19);
    t40 = (t39 >> 1);
    t41 = (t40 & 1);
    *((unsigned int *)t17) = t41;
    xsi_vlogfile_fwrite(*((unsigned int *)t15), 0, 0, 1, ng10, 2, t0, (char)118, t20, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t24 = (t12 & 1);
    *((unsigned int *)t5) = t24;
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng10, 2, t0, (char)118, t16, 1);
    goto LAB16;

LAB20:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(58, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t20, 0, 8);
    t17 = (t20 + 4);
    t19 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (t36 >> 1);
    t38 = (t37 & 1);
    *((unsigned int *)t20) = t38;
    t39 = *((unsigned int *)t19);
    t40 = (t39 >> 1);
    t41 = (t40 & 1);
    *((unsigned int *)t17) = t41;
    xsi_vlogfile_fwrite(*((unsigned int *)t15), 0, 0, 1, ng10, 2, t0, (char)118, t20, 1);
    goto LAB24;

LAB27:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(60, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t20, 0, 8);
    t17 = (t20 + 4);
    t19 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (t36 >> 0);
    t38 = (t37 & 1);
    *((unsigned int *)t20) = t38;
    t39 = *((unsigned int *)t19);
    t40 = (t39 >> 0);
    t41 = (t40 & 1);
    *((unsigned int *)t17) = t41;
    xsi_vlogfile_fwrite(*((unsigned int *)t15), 0, 0, 1, ng10, 2, t0, (char)118, t20, 1);
    goto LAB31;

}


extern void work_m_00000000000627208115_0098372347_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_48_1,(void *)Always_50_2};
	xsi_register_didat("work_m_00000000000627208115_0098372347", "isim/conv_encoder_tb_isim_beh.exe.sim/work/m_00000000000627208115_0098372347.didat");
	xsi_register_executes(pe);
}