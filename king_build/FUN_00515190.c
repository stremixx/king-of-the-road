
undefined4
FUN_00515190(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 *param_5,
            int *param_6,undefined4 *param_7,int *param_8,undefined4 *param_9,int *param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  iVar1 = param_1;
  uVar6 = DAT_0071f844;
  DAT_0071f844 = param_1;
  iVar2 = FUN_00514d00(param_1,&DAT_00675c90,0x280,0x1e0,2,0x7600,&local_1c,&local_2c);
  iVar3 = FUN_00514d00(iVar1,&DAT_00675c88,800,600,2,0x7600,&local_18,&local_28);
  iVar4 = FUN_00514d00(iVar1,&DAT_00675c80,0x400,0x300,2,0x7600,&local_20,&param_1);
  iVar5 = FUN_00514d00(iVar1,s_vpasl_00675c78,0x640,0x4b0,2,0x7600,&local_14,&local_24);
  if (iVar5 == 0 && ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0)) {
    if ((((local_2c != 0) || (local_28 != 0)) || (param_1 != 0)) || (local_24 != 0))
    goto LAB_005153f5;
    FUN_0061c369(local_10,s_DRV_d_00675c44,iVar1 + 1);
    FUN_00603330(local_10,&DAT_00675c90,0xffffffff,DAT_006957c8);
    FUN_00603330(local_10,&DAT_00675c88,0xffffffff,DAT_006957c8);
    FUN_00603330(local_10,&DAT_00675c80,0xffffffff,DAT_006957c8);
    FUN_00603330(local_10,s_vpasl_00675c78,0xffffffff,DAT_006957c8);
    FUN_00514d00(iVar1,&DAT_00675c90,0x280,0x1e0,2,0x7600,&local_1c,&local_2c);
    FUN_00514d00(iVar1,&DAT_00675c88,800,600,2,0x7600,&local_18,&local_28);
    FUN_00514d00(iVar1,&DAT_00675c80,0x400,0x300,2,0x7600,&local_20,&param_1);
    FUN_00514d00(iVar1,s_vpasl_00675c78,0x640,0x4b0,2,0x7600,&local_20,&param_1);
  }
  FUN_00514ed0(local_2c,local_28,param_1,local_24);
  if (((local_2c == 0) && (local_28 == 0)) && ((param_1 == 0 && (local_24 == 0)))) {
    DAT_0071f844 = uVar6;
    return 0;
  }
LAB_005153f5:
  uVar6 = FUN_005d3160();
  *param_2 = uVar6;
  *param_3 = local_1c;
  *param_4 = local_2c;
  *param_5 = local_18;
  *param_6 = local_28;
  *param_7 = local_20;
  *param_8 = param_1;
  *param_9 = local_14;
  *param_10 = local_24;
  return 1;
}

