#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<114> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	var uLocal_162 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	func_96();
	while (true)
	{
		if (func_84())
		{
			func_81();
			return;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!bLocal_159)
	{
		bLocal_159 = func_80(&Local_45);
		return;
	}
	func_2(&Local_45);
}

int func_2(int* iParam0)
{
	if (!func_79(iParam0))
	{
		return 1;
	}
	if (func_15(iParam0))
	{
		return 1;
	}
	func_3(iParam0);
	return 0;
}

int func_3(int* iParam0)
{
	bool bVar0;
	
	bVar0 = func_12(iParam0);
	if (bVar0)
	{
		if (!func_6(iParam0))
		{
			return 0;
		}
	}
	func_5(iParam0);
	if (!bVar0)
	{
		func_4(iParam0);
	}
	return 1;
}

void func_4(int* iParam0)
{
	if (iParam0->f_111 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_111);
}

void func_5(int* iParam0)
{
	if (iParam0->f_112 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_112);
}

int func_6(int* iParam0)
{
	if (!func_80(iParam0))
	{
		return 0;
	}
	if (!func_11(iParam0))
	{
		return 0;
	}
	func_9(iParam0, 0);
	func_7(iParam0, 1);
	return 1;
}

void func_7(int* iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

void func_8(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_9(int* iParam0, int iParam1)
{
	func_10(iParam0, iParam1);
}

void func_10(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_11(int* iParam0)
{
	if (iParam0->f_107 == 0)
	{
		return 1;
	}
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_107);
	return StackVal;
}

bool func_12(int* iParam0)
{
	return (func_13(iParam0, 1) || !func_13(iParam0, 0));
}

bool func_13(int* iParam0, int iParam1)
{
	return func_14(iParam0, iParam1);
}

bool func_14(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

int func_15(int* iParam0)
{
	func_76(iParam0);
	func_71();
	if (func_53(iParam0))
	{
		return 0;
	}
	if (!func_13(iParam0, 1))
	{
		func_47(iParam0);
	}
	func_43(iParam0);
	if (func_13(iParam0, 2))
	{
		func_16(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_16(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_7(iParam0, 2);
	}
	func_39(iParam0);
	func_7(iParam0, 3);
	func_35(iParam0);
	func_18(iParam0, 0);
	func_17(iParam0);
}

void func_17(int* iParam0)
{
	if (iParam0->f_113 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_113);
}

int func_18(int* iParam0, int iParam1)
{
	struct<33> Var0;
	
	if (!func_30(iParam0, iParam1))
	{
		return 0;
	}
	iParam0->f_1 = iParam1;
	Var0 = { func_29(iParam0) };
	MISC::_COPY_MEMORY(&(iParam0->f_72), &Var0, 33);
	if (!func_28(&(iParam0->f_6), iParam1, &(iParam0->f_72)))
	{
		return 0;
	}
	if (!func_27(&(iParam0->f_72)) && func_26(&(iParam0->f_72)))
	{
		func_25(iParam0, iParam0->f_1);
		func_24(&(iParam0->f_72));
	}
	else
	{
		func_25(iParam0, -1);
	}
	func_19(iParam0, &(iParam0->f_72));
	return 1;
}

void func_19(int* iParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	
	if (func_14(iParam0, 3))
	{
		func_22(iParam0, func_23(uParam1));
		return;
	}
	iVar0 = func_21(uParam1);
	if (iVar0 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam0->f_1);
		Call_Loc(iVar0);
		return;
	}
	sVar1 = func_20(uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	func_22(iParam0, sVar1);
}

var func_20(var uParam0)
{
	return uParam0->f_4;
}

var func_21(var uParam0)
{
	return uParam0->f_11;
}

void func_22(var uParam0, char* sParam1)
{
	if (uParam0->f_108 == 0)
	{
		return;
	}
	Stack.Push(sParam1);
	Call_Loc(uParam0->f_108);
}

var func_23(var uParam0)
{
	return uParam0->f_5;
}

int func_24(var uParam0)
{
	if (uParam0->f_17 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_17);
	return StackVal;
}

void func_25(var uParam0, int iParam1)
{
	if (uParam0->f_109 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_109);
}

int func_26(var uParam0)
{
	if (uParam0->f_15 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_15);
	return StackVal;
}

int func_27(var uParam0)
{
	if (uParam0->f_14 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_14);
	return StackVal;
}

int func_28(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_9 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam2);
	Call_Loc(uParam0->f_9);
	switch (StackVal)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 0;
		
		default:
	}
	return 0;
}

struct<33> func_29(var uParam0)
{
	struct<33> Var0;
	
	if (uParam0->f_105 != 0)
	{
		Call_Loc(uParam0->f_105);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
	}
	Var0.f_8 = -1;
	return Var0;
}

int func_30(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_31(&(iParam0->f_6));
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = -1;
	}
	if (iParam1 < iVar0 || iParam1 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	return func_32((func_33(uParam0) - 1), 0);
}

int func_32(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_33(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	int iVar34;
	
	iVar0 = func_34(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (uParam0->f_8 == -1)
	{
		uParam0->f_8 = 0;
		Var1.f_8 = -1;
		iVar34 = -1;
		while (iVar34 != 2)
		{
			Stack.Push(uParam0->f_8);
			Stack.Push(&Var1);
			Call_Loc(iVar0);
			iVar34 = StackVal;
			if (iVar34 != 2)
			{
				uParam0->f_8++;
			}
		}
	}
	return uParam0->f_8;
}

int func_34(var* uParam0)
{
	return uParam0->f_9;
}

void func_35(int* iParam0)
{
	func_36(iParam0, &(iParam0->f_39), 1, 1);
}

void func_36(int* iParam0, var* uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	MISC::_COPY_MEMORY(&(iParam0->f_6), uParam1, 33);
	if (bParam3)
	{
		func_38(&(iParam0->f_6));
	}
	if (bParam2)
	{
		iVar0 = func_37(&(iParam0->f_6));
		func_18(iParam0, iVar0);
		func_76(iParam0);
	}
	func_9(iParam0, 1);
}

var func_37(var uParam0)
{
	return uParam0->f_6;
}

void func_38(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_21);
}

void func_39(int* iParam0)
{
	if (func_13(iParam0, 5) && func_42(&(iParam0->f_72)))
	{
		func_40(&(iParam0->f_72), 3, "");
	}
	func_7(iParam0, 5);
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 0;
}

void func_40(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_41(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Stack.Push(sParam2);
	Call_Loc(iVar0);
}

int func_41(var uParam0)
{
	return uParam0->f_32;
}

bool func_42(var uParam0)
{
	return func_41(uParam0) != 0;
}

void func_43(int* iParam0)
{
	func_45(iParam0);
	if (func_44(&(iParam0->f_72)))
	{
		func_19(iParam0, &(iParam0->f_72));
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_12;
}

void func_45(int* iParam0)
{
	if (func_46(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
}

int func_46(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_22);
	return StackVal;
}

void func_47(int* iParam0)
{
	if (!func_52(&(iParam0->f_72)))
	{
		if (func_50(&(iParam0->f_6), iParam0))
		{
			func_9(iParam0, 1);
		}
	}
	if (func_48(&(iParam0->f_72), iParam0))
	{
		func_9(iParam0, 1);
	}
}

int func_48(var uParam0, int* iParam1)
{
	int iVar0;
	
	iVar0 = func_49(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_49(var uParam0)
{
	return uParam0->f_28;
}

int func_50(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_51(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_51(var uParam0)
{
	return uParam0->f_31;
}

bool func_52(var uParam0)
{
	return uParam0->f_29;
}

int func_53(int* iParam0)
{
	if (func_13(iParam0, 3))
	{
		func_62(iParam0);
		return 1;
	}
	if (func_13(iParam0, 5))
	{
		func_54(iParam0);
		return 1;
	}
	return 0;
}

void func_54(int* iParam0)
{
	if (!func_42(&(iParam0->f_72)))
	{
		func_7(iParam0, 5);
		return;
	}
	if (!func_55(&(iParam0->f_3), &(iParam0->f_4), &(iParam0->f_5), 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0))
	{
		return;
	}
	func_40(&(iParam0->f_72), iParam0->f_3, MISC::GET_ONSCREEN_KEYBOARD_RESULT());
	func_39(iParam0);
	func_9(iParam0, 1);
}

int func_55(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33, bool bParam34)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_61())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*iParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_61())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_61())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					iVar7 = 6;
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH";
					}
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (MISC::IS_PC_VERSION())
				{
					iVar8 = 6;
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_60())
					{
						iVar9 = 64;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_86757)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_86757), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_138733)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_138733), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_138733)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_138733), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					Var10 = { Global_4718592.f_138765[iParam30 /*16*/] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4718592.f_138846[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var10))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam34)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_CDM_T";
					}
					else
					{
						sVar4 = "FMMC_CDM_F1";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*iParam1 == -3)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*iParam1 == -3)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar26 = 0;
					while (iVar26 <= 7)
					{
						if (MISC::IS_STRING_NULL(&(Global_4718592.f_86908[iVar26 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_86908[iVar26 /*16*/]), "", 64);
						}
						iVar26++;
					}
					MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_86908[0 /*16*/]), &(Global_4718592.f_86908[1 /*16*/]), &(Global_4718592.f_86908[2 /*16*/]), &(Global_4718592.f_86908[3 /*16*/]), &(Global_4718592.f_86908[4 /*16*/]), &(Global_4718592.f_86908[5 /*16*/]), &(Global_4718592.f_86908[6 /*16*/]), &(Global_4718592.f_86908[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_69665[iParam16 /*43*/].f_6[0 /*16*/])))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar27 = 0;
						while (iVar27 <= 1)
						{
							if (MISC::IS_STRING_NULL(&(Global_4718592.f_69665[iParam16 /*43*/].f_6[iVar27 /*16*/])))
							{
								StringCopy(&(Global_4718592.f_69665[iParam16 /*43*/].f_6[iVar27 /*16*/]), "", 64);
							}
							iVar27++;
						}
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_69665[iParam16 /*43*/].f_6[0 /*16*/]), &(Global_4718592.f_69665[iParam16 /*43*/].f_6[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_61())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_61())
					{
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (MISC::IS_XBOX360_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar9 = 16;
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					iVar9 = 16;
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					iVar9 = 61;
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (MISC::IS_DURANGO_VERSION())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					iVar9 = 15;
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(64);
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*iParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_61())
							{
								if (*iParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*iParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_61())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_61())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar28 = 0;
					while (iVar28 <= 7)
					{
						if (MISC::IS_STRING_NULL(&(Global_4718592.f_86779[iVar28 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_86779[iVar28 /*16*/]), "", 64);
						}
						iVar28++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam33))
					{
						sVar4 = sParam33;
					}
					if (bParam11)
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_86779[0 /*16*/]), &(Global_4718592.f_86779[1 /*16*/]), &(Global_4718592.f_86779[2 /*16*/]), &(Global_4718592.f_86779[3 /*16*/]), &(Global_4718592.f_86779[4 /*16*/]), &(Global_4718592.f_86779[5 /*16*/]), &(Global_4718592.f_86779[6 /*16*/]), &(Global_4718592.f_86779[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1922777, "", 64);
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = MISC::UPDATE_ONSCREEN_KEYBOARD();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*iParam1 = 0;
					return 0;
				
				case 2:
					*iParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1922777))
						{
							StringCopy(&Global_1922777, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
							if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1922777))
							{
								*iParam1 = 0;
								return 1;
							}
							iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1922777))
									{
										if (MISC::ARE_STRINGS_EQUAL(" ", HUD::_GET_TEXT_SUBSTRING(&Global_1922777, 0, 1)))
										{
											iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1922777);
											StringCopy(&Global_1922777, HUD::_GET_TEXT_SUBSTRING(&Global_1922777, 1, iVar2), 64);
										}
									}
									else
									{
										*iParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (func_60())
					{
						*iParam1 = 0;
						return 1;
					}
					if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*iParam1))
					{
						if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(*iParam1))
						{
							HUD::BUSYSPINNER_OFF();
							iVar0 = SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(*iParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1922777, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
										iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1922777);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1922777))
												{
													if (MISC::ARE_STRINGS_EQUAL(" ", HUD::_GET_TEXT_SUBSTRING(&Global_1922777, iVar3, iVar3 + 1)))
													{
														*iParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*iParam1 != -3)
									{
										*iParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 3;
									*iParam1 = 0;
									func_59(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) == 0)
							{
								HUD::BUSYSPINNER_OFF();
								*iParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							SOCIALCLUB::_SC_PROFANITY_CHECK_UGC_STRING(&Global_1922777, iParam1);
						}
						else
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&Global_1922777, iParam1);
						}
					}
					else if (MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT()))
					{
						*iParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						HUD::BUSYSPINNER_OFF();
						return 0;
					}
					else if (bParam22)
					{
						SOCIALCLUB::_SC_PROFANITY_CHECK_UGC_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iParam1);
					}
					else
					{
						SOCIALCLUB::SC_PROFANITY_CHECK_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iParam1);
					}
					if (MISC::IS_DURANGO_VERSION())
					{
						if ((!NETWORK::NETWORK_IS_SIGNED_ONLINE() || func_57() == 0) || func_56() == 1)
						{
							*iParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKYACHTNAME");
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					else if (bParam29)
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKVEHICLENAME");
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKPROFANITY");
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*iParam1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1922777))
						{
							*iParam1 = -1;
						}
						else
						{
							*iParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						HUD::BUSYSPINNER_OFF();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_56()
{
	if (!func_57())
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (func_58())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_58()
{
	return Global_2725728;
}

void func_59(int iParam0)
{
	Global_2725728 = iParam0;
}

bool func_60()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_61()
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_62(int* iParam0)
{
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_RELEASED(2, 237)))
	{
		func_63(iParam0, 1, 1);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 177))
	{
		func_7(iParam0, 3);
		func_9(iParam0, 1);
	}
}

int func_63(int* iParam0, bool bParam1, bool bParam2)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!func_68(&(iParam0->f_72)))
	{
		return 0;
	}
	func_18(iParam0, iParam0->f_1);
	if (!func_67(iParam0))
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		func_64(iParam0);
	}
	if (func_14(&(iParam0->f_72.f_7), 1))
	{
		func_9(iParam0, 2);
	}
	if (func_34(&(iParam0->f_72)) == 0)
	{
		return 0;
	}
	func_36(iParam0, &(iParam0->f_72), 1, bParam2);
	if (func_14(&(iParam0->f_72.f_7), 2))
	{
		func_63(iParam0, 1, 1);
	}
	func_9(iParam0, 1);
	return 1;
}

void func_64(int* iParam0)
{
	func_65(&(iParam0->f_72));
}

void func_65(var uParam0)
{
	if (uParam0->f_19 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_19);
}

int func_66(int* iParam0)
{
	if (!func_13(iParam0, 5) && func_42(&(iParam0->f_72)))
	{
		func_9(iParam0, 5);
		return 0;
	}
	func_7(iParam0, 5);
	return 1;
}

int func_67(int* iParam0)
{
	if (!func_13(iParam0, 3) && !MISC::IS_STRING_NULL_OR_EMPTY(func_23(&(iParam0->f_72))))
	{
		func_9(iParam0, 3);
		func_9(iParam0, 1);
		return 0;
	}
	func_7(iParam0, 3);
	return 1;
}

int func_68(var uParam0)
{
	if (uParam0->f_13 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_13);
	return StackVal;
}

bool func_69(var uParam0)
{
	return func_70(&(uParam0->f_72));
}

int func_70(var uParam0)
{
	if (uParam0->f_26 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_26);
	return StackVal;
}

void func_71()
{
	func_75();
	func_74();
	func_73();
	func_72();
}

void func_72()
{
	PAD::DISABLE_CONTROL_ACTION(0, 167, true);
	PAD::DISABLE_CONTROL_ACTION(0, 166, true);
	PAD::DISABLE_CONTROL_ACTION(0, 168, true);
	PAD::DISABLE_CONTROL_ACTION(0, 169, true);
	PAD::DISABLE_CONTROL_ACTION(0, 19, true);
}

void func_73()
{
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 85, true);
	PAD::DISABLE_CONTROL_ACTION(0, 0, true);
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 137, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
}

void func_74()
{
	PAD::DISABLE_CONTROL_ACTION(0, 140, true);
	PAD::DISABLE_CONTROL_ACTION(0, 141, true);
	PAD::DISABLE_CONTROL_ACTION(0, 143, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 51, true);
	PAD::DISABLE_CONTROL_ACTION(0, 45, true);
	PAD::DISABLE_CONTROL_ACTION(0, 55, true);
	PAD::DISABLE_CONTROL_ACTION(0, 21, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 0, true);
}

void func_75()
{
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
	PAD::DISABLE_CONTROL_ACTION(0, 157, true);
	PAD::DISABLE_CONTROL_ACTION(0, 158, true);
	PAD::DISABLE_CONTROL_ACTION(0, 159, true);
	PAD::DISABLE_CONTROL_ACTION(0, 160, true);
	PAD::DISABLE_CONTROL_ACTION(0, 161, true);
	PAD::DISABLE_CONTROL_ACTION(0, 162, true);
	PAD::DISABLE_CONTROL_ACTION(0, 163, true);
	PAD::DISABLE_CONTROL_ACTION(0, 164, true);
	PAD::DISABLE_CONTROL_ACTION(0, 165, true);
	PAD::DISABLE_CONTROL_ACTION(0, 14, true);
	PAD::DISABLE_CONTROL_ACTION(0, 15, true);
	PAD::DISABLE_CONTROL_ACTION(0, 53, true);
	PAD::DISABLE_CONTROL_ACTION(0, 54, true);
}

void func_76(var uParam0)
{
	if (func_27(&(uParam0->f_72)) || !func_26(&(uParam0->f_72)))
	{
		func_77(uParam0, 1);
	}
}

void func_77(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	
	iVar1 = iParam0->f_1;
	iVar2 = func_33(&(iParam0->f_6));
	Var3.f_8 = -1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var3 = { func_29(iParam0) };
		iVar1 = (iVar1 + iParam1);
		iVar1 = func_78(iVar1, iVar2);
		if (!func_28(&(iParam0->f_6), iVar1, &Var3))
		{
			return;
		}
		if (!func_27(&Var3) && func_26(&Var3))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_18(iParam0, iVar1);
}

int func_78(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

bool func_79(var uParam0)
{
	return !func_13(uParam0, 2);
}

int func_80(int* iParam0)
{
	if (iParam0->f_106 == 0)
	{
		return 1;
	}
	Call_Loc(iParam0->f_106);
	return StackVal;
}

void func_81()
{
	func_82(&Local_45);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_82(int* iParam0)
{
	func_83(iParam0);
	func_7(iParam0, 0);
	func_7(iParam0, 1);
}

void func_83(var uParam0)
{
	if (uParam0->f_110 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_110);
}

int func_84()
{
	var uVar0;
	
	func_92(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (func_89(159))
	{
		if (!func_88())
		{
			return 1;
		}
	}
	if (func_89(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_85() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_85()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85()
{
	switch (func_87())
	{
		case 0:
			return func_86();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_86()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_87()
{
	return Global_31505;
}

bool func_88()
{
	return Global_2714627.f_698;
}

int func_89(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return Global_2725224;
}

bool func_91()
{
	return Global_2714627.f_693;
}

void func_92(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_93(iVar0);
					break;
				
				case 801199324:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_93(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_95(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_94(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_94(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_96()
{
	struct<9> Var0;
	
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Var0.f_8 = -1;
	func_247(&Var0);
	Local_45 = { func_107(&Var0, 0) };
	iLocal_160 = 35071;
	iLocal_161 = 8428;
}

void func_97(var uParam0)
{
	func_106(uParam0, "TUT_ROOT_M1T", 0);
	func_105(uParam0, "TUT_ROOT_M1", 0);
	func_103(uParam0, "TUT_ROOT_M1_D", 0);
	func_98(uParam0, 0, 8506, 2);
}

void func_98(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = iParam1;
	uParam0->f_9 = iParam2;
	uParam0->f_8 = iParam3;
}

int func_99(int iParam0, var uParam1)
{
	func_102(uParam1, iLocal_161);
	switch (iParam0)
	{
		case 0:
			func_101(uParam1);
			return 0;
		
		case 1:
			func_100(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_100(var uParam0)
{
	func_105(uParam0, "TUT_SUB_M2", 0);
	func_103(uParam0, "TUT_SUB_M2_D", 0);
}

void func_101(var uParam0)
{
	func_105(uParam0, "TUT_SUB_M2", 0);
	func_103(uParam0, "TUT_SUB_M2_D", 0);
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
}

void func_103(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_4 = sParam1;
	func_104(uParam0, 6, bParam2);
}

void func_104(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_10(&(uParam0->f_7), iParam1);
	}
	else
	{
		func_8(&(uParam0->f_7), iParam1);
	}
}

void func_105(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_3 = sParam1;
	func_104(uParam0, 5, bParam2);
}

void func_106(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_1 = sParam1;
	func_104(uParam0, 3, bParam2);
}

struct<114> func_107(var* uParam0, int iParam1)
{
	struct<114> Var0;
	
	Var0.f_6.f_8 = -1;
	Var0.f_39.f_8 = -1;
	Var0.f_72.f_8 = -1;
	func_225(&Var0, 33909);
	func_194(&Var0, 18967);
	func_191(&Var0, 18603);
	func_188(&Var0, 18472);
	func_120(&Var0, 11107);
	func_116(&Var0, 10670);
	func_110(&Var0, 8984);
	func_109(&Var0, uParam0);
	func_108(&Var0, uParam0, iParam1, 0);
	return Var0;
}

void func_108(int* iParam0, var* uParam1, int iParam2, bool bParam3)
{
	func_36(iParam0, uParam1, 0, bParam3);
	func_18(iParam0, iParam2);
	if (func_34(uParam1) == 0)
	{
		return;
	}
	if (func_14(&(iParam0->f_72.f_7), 2))
	{
		func_63(iParam0, 0, 1);
	}
}

void func_109(var uParam0, var* uParam1)
{
	MISC::_COPY_MEMORY(&(uParam0->f_39), uParam1, 33);
}

void func_110(var uParam0, int iParam1)
{
	uParam0->f_110 = iParam1;
}

void func_111()
{
	func_115(1, 0);
	func_112(1, -1);
}

void func_112(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_114(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22830.f_8674)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22830.f_8674 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22830.f_5885[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22830.f_5885[iVar0] = 0;
	}
	if (Global_22830.f_5871[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22830.f_5871[iVar0] = 0;
	}
	if (Global_22830.f_5878[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22830.f_5878[iVar0] = 0;
	}
	if (bParam0)
	{
		func_113(&(Global_22830.f_5917[iVar0 /*10*/]));
		Global_22830.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22830.f_5978[iVar0] = 0;
	}
}

void func_113(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_114(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22830.f_5978[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22830.f_5978[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22830.f_5978[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_115(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22830.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22830.f_2381[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2725767[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4175[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_4432[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4690[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_5346[iVar0] = 0;
		Global_22830.f_5484[iVar0] = 0;
		Global_22830.f_5613[iVar0] = 0;
		Global_22830.f_6136[iVar0] = 0f;
		Global_22830.f_5742[iVar0] = 0;
		Global_22830.f_6002[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22830.f_5313[iVar0] = 0;
		Global_22830.f_5325[iVar0] = 0f;
		Global_22830.f_5319[iVar0] = -1f;
		Global_22830.f_5332[iVar0] = 0;
		Global_22830.f_5340[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22830.f_5221[iVar0 /*4*/]), "", 16);
		Global_22830.f_5270[iVar0] = -1;
		Global_22830.f_5283[iVar0] = 361;
		Global_22830.f_5296[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22830.f_6277[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22830.f_7286[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22830.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4533983.f_16), "", 16);
	Global_4533983.f_20 = -1;
	Global_22830 = 0;
	Global_22830.f_5475 = 0;
	Global_22830.f_5476 = 0;
	Global_22830.f_5477 = 0;
	Global_22830.f_5479 = 0;
	Global_22830.f_5480 = 0;
	Global_22830.f_5481 = 0;
	Global_22830.f_5478 = 0;
	Global_22830.f_6131 = 0;
	Global_22830.f_6271 = 0;
	Global_22830.f_5996 = 0;
	Global_22830.f_5995 = 0;
	Global_22830.f_5997 = 0;
	StringCopy(&(Global_22830.f_4947), "", 24);
	Global_22830.f_5019 = 0;
	Global_22830.f_5020 = 0;
	Global_22830.f_5021 = 0;
	Global_22830.f_5022 = 0;
	Global_22830.f_5023 = 0;
	Global_22830.f_5024 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4953[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_5025 = 0;
	StringCopy(&(Global_4533983.f_21), "", 16);
	Global_4533983.f_61 = 0;
	Global_4533983.f_62 = 0;
	Global_4533983.f_63 = 0;
	Global_4533983.f_64 = 0;
	Global_4533983.f_65 = 0;
	Global_4533983.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4533983.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4533983.f_67 = 0;
	StringCopy(&(Global_22830.f_1), "", 16);
	Global_22830.f_5331 = 0f;
	Global_22830.f_68 = 0;
	Global_22830.f_69 = 0;
	Global_22830.f_70 = 0;
	Global_22830.f_71 = 0;
	Global_22830.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_6001 = 0;
	Global_22830.f_6000 = 0;
	Global_22830.f_5998 = 0;
	Global_22830.f_5999 = 0;
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	Global_22830.f_5482 = 10;
	Global_22830.f_5483 = 0;
	Global_22830.f_6133 = 0f;
	Global_22830.f_6134 = 0f;
	Global_22830.f_5985 = 0;
	Global_22830.f_5986 = 0;
	Global_22830.f_5987 = 0f;
	Global_22830.f_5988 = 0;
	Global_22830.f_5990 = 0;
	Global_22830.f_5989 = 0;
	Global_22830.f_5991 = 0;
	Global_22830.f_5992 = 0;
	Global_22830.f_5993 = 0;
	Global_22830.f_5994 = 0;
	Global_22830.f_8670 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22830.f_6265[iVar0] = -1;
		Global_22830.f_6268[iVar0] = -1;
		iVar0++;
	}
	Global_22830.f_5338 = 0f;
	Global_22830.f_5309 = 0;
	Global_22830.f_5339 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22830.f_6272)
	{
		Global_22830.f_6272[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_8649 = 0;
	Global_22830.f_8644 = 0;
	Global_22830.f_8654 = 0;
	Global_22830.f_8659 = 0;
	Global_22830.f_8664 = 0;
	Global_22830.f_8666 = 0;
	Global_22830.f_8672 = 0;
	Global_22827 = 0.05f;
	Global_22828 = 0.05f;
	Global_22829 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_22829 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22829 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22829 = 0.225f;
	}
}

void func_116(var uParam0, int iParam1)
{
	uParam0->f_106 = iParam1;
}

bool func_117()
{
	return func_118(0, -1, 1);
}

bool func_118(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_114(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22830.f_5892[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22830.f_5892[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22830.f_5892[iVar0 /*4*/]), 9);
		Global_22830.f_5885[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22830.f_5892[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22830.f_5871[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22830.f_5878[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22830.f_5917[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_119(&(Global_22830.f_5917[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_119(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_120(var uParam0, int iParam1)
{
	uParam0->f_105 = iParam1;
}

struct<33> func_121()
{
	struct<33> Var0;
	
	Var0.f_8 = -1;
	func_172(&Var0, 14472);
	func_125(&Var0, 11425, 0);
	func_122(&Var0, 11174);
	return Var0;
}

void func_122(var uParam0, int iParam1)
{
	uParam0->f_27 = iParam1;
}

int func_123(var uParam0)
{
	func_124(202, "PIM_CEXI", -1);
	if (func_68(uParam0))
	{
		func_124(201, "PIM_CSEL", -1);
	}
	return 1;
}

void func_124(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22830.f_5026 >= 12)
	{
		StringCopy(&Global_4533983, sVar0, 64);
		StringCopy(&(Global_4533983.f_16), sParam1, 16);
		Global_4533983.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22830.f_5309), Global_22830.f_5026);
	StringCopy(&(Global_22830.f_5028[Global_22830.f_5026 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22830.f_5221[Global_22830.f_5026 /*4*/]), sParam1, 16);
	Global_22830.f_5270[Global_22830.f_5026] = iParam2;
	Global_22830.f_5283[Global_22830.f_5026] = iParam0;
	Global_22830.f_5296[Global_22830.f_5026] = 32;
	Global_22830.f_5026++;
}

void func_125(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_28 = iParam1;
	func_126(uParam0, iParam2);
}

void func_126(var uParam0, var uParam1)
{
	uParam0->f_29 = uParam1;
}

bool func_127(int* iParam0, var uParam1)
{
	func_152(iParam0);
	return func_128(iParam0) != 0;
}

int func_128(int* iParam0)
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_136(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_129(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_129(int* iParam0)
{
	PAD::SET_INPUT_EXCLUSIVE(2, 176);
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) && func_68(&(iParam0->f_72)))
	{
		func_63(iParam0, 1, 1);
		return 2;
	}
	return 0;
}

int func_130(int* iParam0)
{
	PAD::SET_INPUT_EXCLUSIVE(2, 174);
	PAD::SET_INPUT_EXCLUSIVE(2, 175);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 174))
	{
		func_134(iParam0);
		return 9;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 175))
	{
		func_131(iParam0);
		return 10;
	}
	return 0;
}

void func_131(int* iParam0)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_68(&(iParam0->f_72)))
	{
		return;
	}
	func_133(&(iParam0->f_72));
	func_132(&(iParam0->f_72));
	func_9(iParam0, 1);
}

void func_132(var uParam0)
{
	if (uParam0->f_24 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_24);
}

void func_133(var uParam0)
{
	if (uParam0->f_23 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_23);
}

void func_134(int* iParam0)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_68(&(iParam0->f_72)))
	{
		return;
	}
	func_133(&(iParam0->f_72));
	func_135(&(iParam0->f_72));
	func_9(iParam0, 1);
}

void func_135(var uParam0)
{
	if (uParam0->f_25 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_25);
}

int func_136(int* iParam0)
{
	PAD::SET_INPUT_EXCLUSIVE(2, 177);
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 177))
	{
		func_137(iParam0, 0, 1);
		return 1;
	}
	return 0;
}

void func_137(int* iParam0, bool bParam1, bool bParam2)
{
	struct<33> Var0;
	int iVar33;
	bool bVar34;
	int iVar35;
	
	if (bParam2)
	{
		func_142(&(iParam0->f_72));
	}
	Var0 = { func_29(iParam0) };
	if (!func_140(iParam0, &Var0))
	{
		func_9(iParam0, 2);
		return;
	}
	iVar33 = func_139(&(iParam0->f_6));
	bVar34 = func_14(&(iParam0->f_6.f_7), 2);
	if (func_13(iParam0, 4))
	{
		iVar33 = 0;
	}
	iVar35 = func_138(&(iParam0->f_6));
	func_36(iParam0, &Var0, 0, 1);
	if (func_30(iParam0, iVar33))
	{
		if (iVar35 != 0)
		{
			Call_Loc(iVar35);
		}
		func_18(iParam0, iVar33);
	}
	else
	{
		func_18(iParam0, 0);
		func_24(&(iParam0->f_72));
	}
	if (bVar34 && !bParam1)
	{
		func_137(iParam0, 0, 1);
	}
	else if (func_14(&(iParam0->f_72.f_7), 2) && !bParam1)
	{
		func_63(iParam0, 1, 1);
		func_18(iParam0, iVar33);
	}
	func_9(iParam0, 1);
}

var func_138(var uParam0)
{
	return uParam0->f_17;
}

var func_139(var uParam0)
{
	return *uParam0;
}

bool func_140(var uParam0, var uParam1)
{
	return func_141(&(uParam0->f_6), uParam1);
}

int func_141(var uParam0, var uParam1)
{
	if (uParam0->f_10 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_10);
	return 1;
}

void func_142(var uParam0)
{
	if (uParam0->f_20 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_20);
}

int func_143(int* iParam0)
{
	PAD::SET_INPUT_EXCLUSIVE(2, 172);
	PAD::SET_INPUT_EXCLUSIVE(2, 173);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 172))
	{
		func_144(iParam0, -1);
		return 5;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 173))
	{
		func_144(iParam0, 1);
		return 6;
	}
	return 0;
}

int func_144(int* iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_146(iParam0);
	if (iVar0 <= 1)
	{
		return 0;
	}
	if (func_145(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
	func_77(iParam0, iParam1);
	if (func_24(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
	return 1;
}

int func_145(var uParam0)
{
	if (uParam0->f_18 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_18);
	return StackVal;
}

int func_146(var uParam0)
{
	return func_33(&(uParam0->f_6));
}

int func_147(int* iParam0)
{
	PAD::SET_INPUT_EXCLUSIVE(2, 205);
	PAD::SET_INPUT_EXCLUSIVE(2, 206);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
	{
		if (func_148(iParam0, -1))
		{
			return 3;
		}
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
	{
		if (func_148(iParam0, 1))
		{
			return 4;
		}
		return 0;
	}
	return 0;
}

int func_148(int* iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_14(&(iParam0->f_6.f_7), 2))
	{
		return 0;
	}
	bVar0 = func_14(&(iParam0->f_6.f_7), 7);
	if (bVar0)
	{
		iVar1 = func_150(iParam0);
		iVar2 = func_149(iParam0);
		if ((iParam1 < 0 && iVar1 <= 0) || (iParam1 > 0 && iVar1 >= iVar2))
		{
			return 0;
		}
	}
	func_137(iParam0, 1, 1);
	func_144(iParam0, iParam1);
	func_63(iParam0, 1, 1);
	return 1;
}

int func_149(var uParam0)
{
	struct<33> Var0;
	
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	Var0 = { func_29(uParam0) };
	if (!func_141(&(uParam0->f_6), &Var0))
	{
		return 0;
	}
	return func_31(&Var0);
}

int func_150(var uParam0)
{
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	return func_151(uParam0);
}

var func_151(var uParam0)
{
	return func_139(&(uParam0->f_6));
}

void func_152(int* iParam0)
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return;
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 239);
	PAD::SET_INPUT_EXCLUSIVE(2, 240);
	func_168(0, 0, 0, 1);
	func_167();
	func_164(iParam0);
	func_160(iParam0);
	func_154(iParam0);
	func_153(iParam0);
}

void func_153(int* iParam0)
{
	PAD::SET_INPUT_EXCLUSIVE(2, 238);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
	{
		func_137(iParam0, 0, 1);
	}
}

void func_154(int* iParam0)
{
	bool bVar0;
	
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	bVar0 = func_159();
	if (func_157() || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241) && bVar0))
	{
		func_144(iParam0, -1);
		return;
	}
	if (func_155() || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242) && bVar0))
	{
		func_144(iParam0, 1);
		return;
	}
}

bool func_155()
{
	return (PAD::IS_CONTROL_JUST_RELEASED(2, 237) && func_156());
}

bool func_156()
{
	return Global_4534059 == -3;
}

bool func_157()
{
	return (PAD::IS_CONTROL_JUST_RELEASED(2, 237) && func_158());
}

bool func_158()
{
	return Global_4534059 == -2;
}

bool func_159()
{
	return Global_4534059 > -1;
}

void func_160(int* iParam0)
{
	PAD::SET_INPUT_EXCLUSIVE(2, 237);
	PAD::ENABLE_CONTROL_ACTION(2, 176, true);
	if (!PAD::IS_CONTROL_JUST_RELEASED(2, 237))
	{
		return;
	}
	if (!func_163())
	{
		func_9(iParam0, 2);
		return;
	}
	if (func_162(iParam0))
	{
		func_63(iParam0, 1, 1);
	}
	else
	{
		func_161(iParam0);
	}
}

void func_161(int* iParam0)
{
	func_18(iParam0, Global_4534059);
}

bool func_162(int* iParam0)
{
	return Global_4534059 == iParam0->f_1;
}

bool func_163()
{
	return ((func_159() || func_156()) || func_158());
}

void func_164(int* iParam0)
{
	int iVar0;
	
	if (!func_159())
	{
		return;
	}
	if (!func_166())
	{
		return;
	}
	if (!func_162(iParam0))
	{
		return;
	}
	iVar0 = func_165(0.045f);
	if (iVar0 > 0)
	{
		func_131(iParam0);
	}
	else if (iVar0 < 0)
	{
		func_134(iParam0);
	}
	else if (iVar0 == -999)
	{
		func_63(iParam0, 1, 1);
	}
}

int func_165(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_22829);
	fVar1 = (Global_22830.f_5987 - (IntToFloat(Global_22830.f_5989) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4534053 >= fVar0 && Global_4534053 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4534053 >= fVar0 && Global_4534053 < fVar4)
	{
		return -1;
	}
	if (Global_4534053 >= fVar4 && Global_4534053 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237);
	}
	return 0;
}

void func_167()
{
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
}

void func_168(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4534059 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(true);
	fVar0 = Global_22827;
	fVar2 = (fVar0 + Global_22829);
	fVar3 = Global_22830.f_5987;
	fVar1 = (Global_22830.f_5987 - (IntToFloat(Global_22830.f_5989) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22830.f_5989 < 1)
	{
		fVar1 = (Global_22830.f_5987 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_171();
	if (Global_4534059 == -6)
	{
		return;
	}
	Global_4534059 = -1;
	fVar7 = Global_4534053;
	fVar8 = Global_4534054;
	if (Global_22830.f_5990 > Global_22830.f_5989)
	{
		if (((Global_4534053 >= fVar0 && Global_4534053 <= fVar2) && Global_4534054 >= fVar3) && Global_4534054 < (fVar3 + fVar6))
		{
			Global_4534059 = -2;
			if (bParam3)
			{
				func_170(0);
			}
			return;
		}
		if (((Global_4534053 >= fVar0 && Global_4534053 <= fVar2) && Global_4534054 >= (fVar3 + fVar6)) && Global_4534054 < (fVar3 + 0.034722f))
		{
			Global_4534059 = -3;
			if (bParam3)
			{
				func_170(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22830.f_5990 == -1)
		{
			Global_4534059 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22830.f_5989);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_169(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22829, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4534059 = Global_22830.f_8295[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4534059 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4534059 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4534059 = -4;
		return;
	}
	Global_4534059 = -1;
}

void func_169(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_170(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22827;
	fVar1 = Global_22830.f_5987;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4534059 == -2)
	{
		func_169(fVar0, fVar1, Global_22829, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4534059 == -3)
	{
		func_169(fVar0, (fVar1 + fVar2), Global_22829, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_171()
{
	Global_4534055 = Global_4534053;
	Global_4534056 = Global_4534054;
	Global_4534053 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4534054 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4534057 = (Global_4534053 - Global_4534055);
	Global_4534058 = (Global_4534054 - Global_4534056);
}

void func_172(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

void func_173(var uParam0, int iParam1)
{
	func_174(iParam1, func_187(uParam0), 0, 1, 0, 0, 0);
}

void func_174(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22830.f_5475 > iParam0)
	{
		return;
	}
	if (Global_22830.f_5475 >= 128)
	{
		return;
	}
	if (Global_22830.f_5477 >= 256)
	{
		return;
	}
	if (Global_22830.f_6000 < Global_22830.f_5998)
	{
		return;
	}
	if (Global_22830.f_5475 != iParam0)
	{
		Global_22830.f_5475 = iParam0;
		Global_22830.f_5476 = 0;
	}
	iVar0 = Global_22830.f_5313[Global_22830.f_5476];
	if (iVar0 != 1)
	{
		while (Global_22830.f_5476 < 4 && iVar0 != 1)
		{
			Global_22830.f_5476++;
			iVar0 = Global_22830.f_5313[Global_22830.f_5476];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22830.f_73[Global_22830.f_5477 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22830.f_1610[Global_22830.f_5477] = bParam3;
	Global_22830.f_1867[Global_22830.f_5477] = iParam4;
	Global_22830.f_2124[Global_22830.f_5477] = iParam6;
	Global_22830.f_5477++;
	if (!bParam3)
	{
		func_186(Global_22830.f_5475, 1);
	}
	else
	{
		func_186(Global_22830.f_5475, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_183(&(Global_22830.f_73[Global_22830.f_5477 /*6*/]));
		if (Global_22830.f_5332[Global_22830.f_5476])
		{
			func_176(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22830.f_5325[Global_22830.f_5476])
		{
			Global_22830.f_5325[Global_22830.f_5476] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_175(&(Global_22830.f_73[Global_22830.f_5477 /*6*/]));
			if (fVar4 > Global_22830.f_6002[iParam0])
			{
				Global_22830.f_6002[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_22830.f_5346[iParam0]), Global_22830.f_5476);
	Global_22830.f_5476++;
	Global_22830.f_6001 = 1;
	Global_22830.f_5999 = (Global_22830.f_5477 - 1);
	Global_22830.f_6000 = 0;
	Global_22830.f_5998 = iParam2;
}

float func_175(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

int func_176(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_182(iParam0), 64);
	StringCopy(&cVar16, func_179(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(false);
			if (func_178())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_178())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_177(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_177(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22830.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22829)
			{
				*fParam4 = (*fParam4 * (Global_22829 / *fParam3));
				*fParam3 = Global_22829;
			}
		}
		return 1;
	}
	return 0;
}

float func_177(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_178()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_179(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22830.f_7286[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22830.f_7286[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_181(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_180(&uVar3);
			}
		}
		else
		{
			return func_180(&(Global_22830.f_7286[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_180(var uParam0)
{
	return uParam0;
}

struct<13> func_181(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_182(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22830.f_6277[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22830.f_6277[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_181(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_180(&uVar0);
		}
		else
		{
			return func_180(&(Global_22830.f_6277[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_183(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_184(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_184(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_185(Global_22830.f_6268[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_185(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_186(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_22830.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_22830.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
}

var func_187(var uParam0)
{
	return uParam0->f_3;
}

void func_188(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

void func_189(char* sParam0)
{
	func_190(sParam0, 0, 0);
}

void func_190(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_4947), sParam0, 24);
	Global_22830.f_5019 = 0;
	Global_22830.f_5020 = 0;
	Global_22830.f_5021 = 0;
	Global_22830.f_5022 = 0;
	Global_22830.f_5023 = iParam1;
	Global_22830.f_5024 = MISC::GET_GAME_TIMER();
	Global_22830.f_5025 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4953[iVar0] = 0;
		iVar0++;
	}
}

void func_191(var uParam0, int iParam1)
{
	uParam0->f_109 = iParam1;
}

void func_192(var uParam0)
{
	func_193(uParam0, 1, 1);
}

void func_193(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22830.f_5996 = uParam0;
	Global_22830.f_6131 = iParam2;
	if (Global_22830.f_5996 < Global_22830.f_5995)
	{
		Global_22830.f_5995 = Global_22830.f_5996;
	}
	else if ((Global_22830.f_5986 && Global_22830.f_5996 > Global_22830.f_5997) || (!Global_22830.f_5986 && Global_22830.f_5996 >= (Global_22830.f_5995 + Global_22830.f_5482)))
	{
		iVar0 = Global_22830.f_5995;
		while (iVar0 <= Global_22830.f_5996)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22830.f_5346[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22830.f_5482 && Global_22830.f_5995 < 128)
		{
			Global_22830.f_5995++;
			iVar1 = 0;
			iVar0 = Global_22830.f_5995;
			while (iVar0 <= Global_22830.f_5996)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22830.f_5346[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22830.f_5985 = 0;
	Global_22830.f_5986 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22830.f_4947), "", 24);
		StringCopy(&(Global_4533983.f_21), "", 16);
	}
}

void func_194(var uParam0, int iParam1)
{
	uParam0->f_112 = iParam1;
}

void func_195()
{
	func_196(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
}

void func_196(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_114(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_222(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22830)
	{
		if (func_176(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22830 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_22830.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22828;
	}
	else
	{
		fVar59 = (((Global_22828 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22829;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(false);
		if (func_178())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_178())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22830.f_5475 <= 1)
		{
			func_174(Global_22830.f_5475 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_22830.f_6271 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22830.f_5985)
		{
			if (MISC::GET_HASH_KEY(&(Global_22830.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22828;
			}
			else
			{
				if (Global_22830)
				{
					StringCopy(&cVar65, func_182(29), 64);
					StringCopy(&cVar81, func_179(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22830.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_169(Global_22827, Global_22828, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, false);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, false);
					}
				}
				if (Global_22830.f_8644)
				{
					iVar1 = Global_22830.f_8640;
					iVar2 = Global_22830.f_8641;
					iVar3 = Global_22830.f_8642;
					iVar4 = Global_22830.f_8643;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_169(Global_22827, (Global_22828 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22828 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22830.f_1)) != 0)
				{
					func_221();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22830.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22830.f_68)
					{
						if (Global_22830.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22830.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_14[iVar16], Global_22830.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22830.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22827 + 0.00390625f), ((Global_22828 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22830.f_5992)
				{
					func_221();
					func_219((((Global_22827 + fParam5) - 0.00390625f) - func_220("CM_ITEM_COUNT", Global_22830.f_5993, Global_22830.f_5994)), ((Global_22828 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5993, Global_22830.f_5994);
				}
				else if (Global_22830.f_5988 > Global_22830.f_5482)
				{
					if (Global_22830.f_5991 != 0)
					{
						func_221();
						func_219((((Global_22827 + fParam5) - 0.00390625f) - func_220("CM_ITEM_COUNT", Global_22830.f_5991, Global_22830.f_5990)), ((Global_22828 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5991, Global_22830.f_5990);
					}
				}
			}
			iVar6 = Global_22830.f_5995;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22830.f_8654)
			{
				iVar1 = Global_22830.f_8650;
				iVar2 = Global_22830.f_8651;
				iVar3 = Global_22830.f_8652;
				iVar4 = Global_22830.f_8653;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22830.f_5482 && iVar6 <= Global_22830.f_5475)
			{
				if (iVar6 >= 0)
				{
					if (Global_22830.f_5742[iVar6])
					{
						if (Global_22830.f_5613[iVar6] && iVar6 != Global_22830.f_5995)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22830.f_6002[iVar6] != 0f)
						{
							fVar56 = Global_22830.f_6002[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, false);
			if (Global_22830.f_5988 > Global_22830.f_5482)
			{
				if (Global_22830.f_8659)
				{
					iVar1 = Global_22830.f_8655;
					iVar2 = Global_22830.f_8656;
					iVar3 = Global_22830.f_8657;
					iVar4 = Global_22830.f_8658;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_169(Global_22827, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_22830.f_8672)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_22830.f_4947)) != 0 && Global_22830.f_5023 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22827 + 0.0046875f);
				if (Global_22830.f_5025 != 0)
				{
					func_176(Global_22830.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_218(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22830.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5019)
				{
					if (Global_22830.f_4953[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4953[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4962[iVar16], Global_22830.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4953[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_169(Global_22827, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8664)
				{
					iVar1 = Global_22830.f_8660;
					iVar2 = Global_22830.f_8661;
					iVar3 = Global_22830.f_8662;
					iVar4 = Global_22830.f_8663;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_218(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22830.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5019)
				{
					if (Global_22830.f_4953[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4953[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4962[iVar16], Global_22830.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4953[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22830.f_5025 != 0)
				{
					func_176(Global_22830.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					func_217(Global_22830.f_5025, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_182(Global_22830.f_5025), func_179(Global_22830.f_5025, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22830.f_5023 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22830.f_5024) > Global_22830.f_5023)
					{
						StringCopy(&(Global_22830.f_4947), "", 24);
						Global_22830.f_5023 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4533983.f_21)) != 0 && Global_4533983.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22827 + 0.0046875f);
				if (Global_4533983.f_67 != 0)
				{
					func_176(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_218(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_169(Global_22827, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8664)
				{
					iVar1 = Global_22830.f_8660;
					iVar2 = Global_22830.f_8661;
					iVar3 = Global_22830.f_8662;
					iVar4 = Global_22830.f_8663;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_218(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4533983.f_67 != 0)
				{
					func_176(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_217(Global_4533983.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_182(Global_4533983.f_67), func_179(Global_4533983.f_67, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4533983.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4533983.f_66) > Global_4533983.f_65)
					{
						StringCopy(&(Global_4533983.f_21), "", 16);
						Global_4533983.f_65 = -1;
					}
				}
			}
			func_209(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22830.f_5985)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22830.f_5475;
			if (Global_22830.f_5986)
			{
				iVar98 = (Global_22830.f_5989 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22830.f_6002[iVar6] != 0f)
				{
					fVar56 = Global_22830.f_6002[iVar6];
				}
				if (Global_22830.f_5986)
				{
					iVar6 = Global_22830.f_8295[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22830.f_5995 && iVar9 < Global_22830.f_5482)
				{
					bVar33 = true;
					if (Global_22830.f_5996 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22830.f_5613[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22830.f_6136[iVar6] = fVar35;
				fVar34 = (Global_22827 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22830.f_5996 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22830.f_8666)
					{
						HUD::GET_HUD_COLOUR(Global_22830.f_8665, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22827 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false);
					Global_22830.f_6134 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22830.f_5483)
				{
					if (MISC::IS_BIT_SET(Global_22830.f_5346[iVar6], iVar8) || Global_22830.f_5313[iVar8] == 5)
					{
						if (Global_22830.f_5986)
						{
							iVar19 = Global_22830.f_8311[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar20 = Global_22830.f_8352[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar21 = Global_22830.f_8393[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar22 = Global_22830.f_8434[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar23 = Global_22830.f_8475[((iVar9 * Global_22830.f_5483) + iVar8)];
						}
						else
						{
							Global_22830.f_8311[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar19;
							Global_22830.f_8352[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar20;
							Global_22830.f_8393[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar21;
							Global_22830.f_8434[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar22;
							Global_22830.f_8475[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22830.f_6268[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6265[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22830.f_6268[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6265[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22830.f_5319[iVar8] != -1f)
						{
							fVar34 = ((Global_22827 + 0.0046875f) + Global_22830.f_5319[iVar8]);
						}
						if ((iVar8 < 4 && Global_22830.f_5319[iVar8 + 1] != -1f) && fVar34 < Global_22830.f_5319[iVar8 + 1])
						{
							fVar46 = (Global_22830.f_5319[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22827 + Global_22829) - 0.0046875f) - fVar34);
						}
						if ((Global_22830.f_5332[iVar8] && Global_22830.f_6131) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22830.f_5313[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22830.f_5986)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_22830.f_2124[iVar24])
											{
												bVar53 = true;
											}
											func_184(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22830.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4175[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4432[(iVar21 + iVar27)], Global_22830.f_4561[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_176(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22830.f_4690[(iVar22 + iVar14)] == 2 || Global_22830.f_4690[(iVar22 + iVar14)] == 51) || Global_22830.f_4690[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5340[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar42;
										Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar43;
										Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar44;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22830.f_5340[iVar101] == 2)
												{
													Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar101)] = (Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar101)] - Global_22830.f_5325[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar43 = Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar44 = Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)];
									}
									if (bVar54)
									{
										if (func_176(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_182(26), func_179(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_182(27), func_179(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_22830.f_2124[iVar24])
										{
											bVar53 = true;
										}
										func_184(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22830.f_8670 && Global_22830.f_8671 == iVar6)
										{
											func_208(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22830.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4175[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4432[(iVar21 + iVar27)], Global_22830.f_4561[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22830.f_4690[(iVar22 + iVar28)] == 2 || Global_22830.f_4690[(iVar22 + iVar28)] == 51) || Global_22830.f_4690[(iVar22 + iVar28)] == 61)
											{
												if (func_176(Global_22830.f_4690[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_176(Global_22830.f_4690[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_217(Global_22830.f_4690[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22830.f_5340[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_182(Global_22830.f_4690[(iVar22 + iVar28)]), func_179(Global_22830.f_4690[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_182(Global_22830.f_4690[(iVar22 + iVar28)]), func_179(Global_22830.f_4690[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22830.f_5340[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_60() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_22830.f_2124[iVar24])
													{
														bVar53 = true;
													}
													func_184(0, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_22830.f_5995 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22830.f_4690[(iVar22 + iVar14)] != 2 && Global_22830.f_4690[(iVar22 + iVar14)] != 51) && Global_22830.f_4690[(iVar22 + iVar14)] != 61)
											{
												if (func_176(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_176(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_217(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22830.f_4690[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_182(Global_22830.f_4690[(iVar22 + iVar14)]), func_179(Global_22830.f_4690[(iVar22 + iVar14)], bVar32), (Global_22827 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else if (Global_22830.f_5340[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_182(Global_22830.f_4690[(iVar22 + iVar14)]), func_179(Global_22830.f_4690[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_182(Global_22830.f_4690[(iVar22 + iVar14)]), func_179(Global_22830.f_4690[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22830.f_5986)
									{
										func_184(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22830.f_8670 && Global_22830.f_8671 == iVar6)
										{
											func_208(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22830.f_4175[iVar20]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5340[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar42;
										Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar43 = Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)];
									}
									if (bVar54)
									{
										if (func_176(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_182(26), func_179(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_182(27), func_179(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_184(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar55, 0, 0, 0);
										func_207((fVar34 + fVar42), fVar35, "NUMBER", Global_22830.f_4175[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22830.f_5986)
									{
										func_184(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22830.f_8670 && Global_22830.f_8671 == iVar6)
										{
											func_208(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22830.f_4432[iVar21], Global_22830.f_4561[iVar21]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar42 = 0f;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5340[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar42;
										Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar43 = Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)];
									}
									if (bVar54)
									{
										if (func_176(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_182(26), func_179(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
										if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_182(27), func_179(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
												}
											}
										}
									}
									func_184(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar55, 0, 0, 0);
									func_206((fVar34 + fVar42), fVar35, "NUMBER", Global_22830.f_4432[iVar21], Global_22830.f_4561[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_176(Global_22830.f_4690[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22830.f_5986)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22830.f_5340[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar42;
											Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
											fVar44 = Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)];
										}
										if (bVar54)
										{
											if (func_176(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22830.f_5340[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_217(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_182(26), func_179(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
											if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_217(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_182(27), func_179(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_176(Global_22830.f_4690[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(Global_22830.f_4690[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_182(Global_22830.f_4690[iVar22]), func_179(Global_22830.f_4690[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_205(Global_22830.f_4690[iVar22])), (fVar37 * func_205(Global_22830.f_4690[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22830.f_5313[iVar8] == 5)
						{
							if (Global_22830.f_5325[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22830.f_5325[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22830.f_5325[iVar8]);
							if (Global_22830.f_5332[iVar8])
							{
								if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22830.f_5325[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22830.f_8295[iVar9] = iVar6;
						Global_22830.f_5997 = iVar6;
						iVar9++;
						if (Global_22830.f_5613[iVar6])
						{
							iVar13++;
						}
						if (Global_22830.f_6002[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22830.f_6002[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22830.f_5985)
					{
						Global_22830.f_5742[iVar6] = 1;
						if (Global_22830.f_5484[iVar6])
						{
							if (bVar32)
							{
								Global_22830.f_5991 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22830.f_5991 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22830.f_5985)
			{
				Global_22830.f_5987 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22830.f_5990 = iVar11;
				Global_22830.f_5988 = iVar10;
				Global_22830.f_5985 = 1;
			}
		}
		if (!Global_22830.f_5986)
		{
			Global_22830.f_5989 = iVar9;
			Global_22830.f_5986 = 1;
		}
		iVar5++;
	}
	Global_22830.f_6133 = fVar51;
	Global_22830.f_6135 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_22830.f_6133);
	if (!Global_22830.f_8639)
	{
		func_198(0);
	}
	Global_22830.f_8639 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_197(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_197(int iParam0)
{
	Global_1645739.f_1121 = iParam0;
}

void func_198(int iParam0)
{
	if (func_204())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_203(0))
		{
			func_199(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_199(int iParam0)
{
	if (func_204())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_202())
		{
			func_201(1, 1);
		}
		else
		{
			func_201(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_200())
	{
		Global_19954.f_1 = 3;
	}
}

int func_200()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_201(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_203(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_202()
{
	return MISC::IS_BIT_SET(Global_1958920, 5);
}

int func_203(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7824, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_204()
{
	return MISC::IS_BIT_SET(Global_1958920, 19);
}

float func_205(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_206(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_207(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_208(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22830.f_8667[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22830.f_8667[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_114(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_222(bParam4, bParam8))
	{
		return;
	}
	if (func_215())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_212(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22830.f_5026 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5026)
			{
				if (Global_22830.f_5283[iVar1] != 361)
				{
					StringCopy(&(Global_22830.f_5028[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22830.f_5283[iVar1], true), 64);
				}
				else if (Global_22830.f_5296[iVar1] != 32)
				{
					StringCopy(&(Global_22830.f_5028[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22830.f_5296[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22830.f_5027 = 0;
		}
		if (!Global_22830.f_5027)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22830.f_5338 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5026)
			{
				if (MISC::GET_HASH_KEY(&(Global_22830.f_5221[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_211(&(Global_22830.f_5028[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22830.f_5221[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_211(&(Global_22830.f_5028[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22830.f_5270[iVar1] == -1)
					{
						func_210(&(Global_22830.f_5221[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22830.f_5270[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22830.f_5221[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22830.f_5283[iVar1] != 361 && MISC::IS_BIT_SET(Global_22830.f_5309, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22830.f_5283[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4533983.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22830.f_5026);
				func_211(&Global_4533983);
				if (Global_4533983.f_20 == -1)
				{
					func_210(&(Global_4533983.f_16));
				}
				else
				{
					iVar4 = Global_22830.f_5270[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4533983.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22830.f_5339)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22830.f_5027 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22830.f_5026)
		{
			if (Global_22830.f_5270[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22830.f_5221[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4533983.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4533983.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22830.f_8674)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22830.f_8674 = 1;
			}
		}
		else if (Global_22830.f_8674)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22830.f_8674 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22830.f_5312)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22830.f_5917[iVar0 /*10*/], Global_22830.f_5310, Global_22830.f_5311, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22830.f_5917[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_210(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_211(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_212(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_213(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_213(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_214();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_214()
{
	return Global_1574907;
}

int func_215()
{
	struct<3> Var0;
	
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	if (func_216())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19899 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_216()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_218(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22827 + Global_22829) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_219(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_220(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_221();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22830.f_8649)
	{
		iVar0 = Global_22830.f_8645;
		iVar1 = Global_22830.f_8646;
		iVar2 = Global_22830.f_8647;
		iVar3 = Global_22830.f_8648;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22827 + 0.0046875f), ((Global_22827 + Global_22829) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

int func_222(bool bParam0, bool bParam1)
{
	if (Global_2703656.f_1585.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_224(8, -1) && func_223() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78112) || Global_22830.f_8673) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100026.f_1457)
	{
		return 0;
	}
	return 1;
}

int func_223()
{
	return Global_1574980;
}

bool func_224(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1644209.f_1048, iParam0);
}

void func_225(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
}

int func_226(int* iParam0)
{
	func_246(-1);
	func_115(1, 0);
	func_243(iParam0);
	func_239(iParam0);
	func_238(0, 0, 0, 0, 0);
	func_234(iParam0);
	func_227(iParam0);
	func_18(iParam0, iParam0->f_1);
	return 1;
}

void func_227(int* iParam0)
{
	if (func_13(iParam0, 3))
	{
		func_124(202, "PIMK2_CANCEL", -1);
		func_124(201, "PIMK2_ACCEPT", -1);
		return;
	}
	if (func_13(iParam0, 5))
	{
		return;
	}
	if (!func_52(&(iParam0->f_72)))
	{
		func_231(iParam0);
	}
	func_228(iParam0);
}

void func_228(int* iParam0)
{
	func_229(&(iParam0->f_72), &(iParam0->f_72));
}

void func_229(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_230(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_230(var uParam0)
{
	return uParam0->f_27;
}

void func_231(int* iParam0)
{
	func_232(&(iParam0->f_6), &(iParam0->f_72));
}

void func_232(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_233(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_233(var uParam0)
{
	return uParam0->f_30;
}

void func_234(int* iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	int iVar36;
	int iVar37;
	
	func_237(iParam0, 0);
	iVar0 = func_34(&(iParam0->f_6));
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_8 = -1;
	iVar36 = -1;
	while (iVar36 != 2)
	{
		Var3 = { func_29(iParam0) };
		Stack.Push(iVar1);
		Stack.Push(&Var3);
		Call_Loc(iVar0);
		iVar36 = StackVal;
		if (iVar36 != 0)
		{
			iVar1++;
		}
		else
		{
			if (func_235(iParam0, iVar1, &Var3))
			{
				iVar2++;
			}
			iVar1++;
		}
	}
	iVar37 = func_32(0, (iVar2 - 1));
	func_237(iParam0, iVar37);
	func_25(iParam0, iParam0->f_1);
	func_24(&(iParam0->f_72));
}

int func_235(var uParam0, int iParam1, var uParam2)
{
	if (func_27(uParam2))
	{
		return 0;
	}
	func_236(uParam2, iParam1);
	Global_22830.f_1610[iParam1] = func_68(uParam2);
	return 1;
}

void func_236(var uParam0, var uParam1)
{
	if (uParam0->f_16 == 0)
	{
		return;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_16);
}

void func_237(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5332[0] = iParam0;
	Global_22830.f_5332[1] = iParam1;
	Global_22830.f_5332[2] = iParam2;
	Global_22830.f_5332[3] = iParam3;
	Global_22830.f_5332[4] = iParam4;
}

void func_239(int* iParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_241(func_242(&(iParam0->f_6)))))
	{
		func_240(func_187(&(iParam0->f_6)));
		return;
	}
	func_240(func_242(&(iParam0->f_6)));
}

void func_240(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_1), sParam0, 16);
	Global_22830.f_68 = 0;
	Global_22830.f_69 = 0;
	Global_22830.f_70 = 0;
	Global_22830.f_71 = 0;
	Global_22830.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
}

var func_241(var uParam0)
{
	return uParam0;
}

var func_242(var uParam0)
{
	return uParam0->f_1;
}

void func_243(int* iParam0)
{
	func_245(1, 1, 0, 0, 0);
	func_244(1, 2, 1, 1, 1);
	func_4(iParam0);
}

void func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5340[0] = iParam0;
	Global_22830.f_5340[1] = iParam1;
	Global_22830.f_5340[2] = iParam2;
	Global_22830.f_5340[3] = iParam3;
	Global_22830.f_5340[4] = iParam4;
}

void func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5313[0] = iParam0;
	Global_22830.f_5313[1] = iParam1;
	Global_22830.f_5313[2] = iParam2;
	Global_22830.f_5313[3] = iParam3;
	Global_22830.f_5313[4] = iParam4;
	Global_22830.f_5483 = 0;
	if (iParam0 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam1 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam2 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam3 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam4 != 0)
	{
		Global_22830.f_5483++;
	}
}

void func_246(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22830.f_5221[iVar0 /*4*/]), "", 16);
		Global_22830.f_5270[iVar0] = -1;
		Global_22830.f_5283[iVar0] = 361;
		Global_22830.f_5296[iVar0] = 32;
		iVar0++;
	}
	Global_22830.f_5309 = 0;
	StringCopy(&(Global_4533983.f_16), "", 16);
	Global_4533983.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_114(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22830.f_5917[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_247(var uParam0)
{
	func_106(uParam0, "TUT_ROOT_TITLE", 0);
	func_98(uParam0, 0, 35102, 2);
}

int func_248(int iParam0, var uParam1)
{
	func_102(uParam1, iLocal_160);
	switch (iParam0)
	{
		case 0:
			func_97(uParam1);
			return 0;
		
		case 1:
			func_249(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_249(var uParam0)
{
	func_105(uParam0, "TUT_ROOT_M2", 0);
	func_103(uParam0, "TUT_ROOT_M2_D", 0);
}

