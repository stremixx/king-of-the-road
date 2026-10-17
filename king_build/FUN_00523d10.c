
int __thiscall FUN_00523d10(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int iStack_30;
  undefined4 *puStack_2c;
  char *pcStack_28;
  undefined4 *puStack_24;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 0x134);
  if (iVar1 == 1) {
    if (param_2 < 0xbe) {
      return param_2;
    }
    if (0xcd < param_2) {
      return param_2;
    }
    uVar4 = param_2 - 0xbeU & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x36c + uVar4 * 4);
    if (*(int *)(param_1 + 0x36c + uVar4 * 4) != 0) {
      puStack_24 = (undefined4 *)0x3f800000;
      pcStack_28 = (char *)0x3f800000;
      puStack_2c = (undefined4 *)0x523d82;
      FUN_005fd160();
    }
    puStack_24 = (undefined4 *)param_2;
    pcStack_28 = (char *)0x523d91;
    iVar1 = FUN_005bd200();
    *(int *)(param_1 + 0x13c) = iVar1;
    *(undefined4 *)(iVar1 + 0x28) = 1;
    puStack_24 = *(undefined4 **)(&DAT_00674bc8 + (param_2 - 0xbeU) * 4);
    *(undefined4 **)(param_1 + 0x344) = puStack_24;
    if (puStack_24 == (undefined4 *)0xffffffff) {
      if (DAT_006cd454 != (undefined4 *)0x0) {
        puStack_24 = (undefined4 *)0x1;
        pcStack_28 = (char *)0x523dc0;
        (**(code **)*DAT_006cd454)();
      }
      DAT_006cd454 = (undefined4 *)0x0;
      DAT_00695c00[4] = DAT_00695c00[4] | 3;
      puStack_24 = (undefined4 *)0x523dd8;
      FUN_00568e20();
      puStack_24 = (undefined4 *)0x523de1;
      (**(code **)(*(int *)(param_1 + -0x40) + 0x20))();
      puStack_24 = (undefined4 *)0x523dec;
      (**(code **)(*DAT_00695c00 + 0x24))();
      puStack_24 = (undefined4 *)0x523df1;
      FUN_0050b5d0();
      puStack_24 = (undefined4 *)0x1;
      pcStack_28 = (char *)0x523df8;
      iVar1 = FUN_004e1230();
      return iVar1;
    }
    if ((param_2 == 0xc4) || (param_2 == 0xcb)) {
      *(undefined4 *)(param_1 + 0x134) = 0x17;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 1;
      return (int)puStack_24;
    }
    if (*(int *)(param_1 + 0x348 + uVar4 * 4) == 0) {
      *(undefined4 *)(param_1 + 0x134) = 0x16;
      local_10 = 0;
      uStack_c = 0;
      if (param_2 != 0xca) {
        pcStack_28 = *(char **)(param_1 + 0x344);
        puStack_2c = &local_10;
        iStack_30 = param_1 + 0x168;
        puStack_24 = puStack_2c;
        FUN_0041d3f0();
        FUN_00568670(&iStack_30);
        iVar1 = FUN_004316d0();
        *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_c,local_10);
        *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 1;
        return iVar1;
      }
      puStack_24 = (undefined4 *)0x407f4000;
      pcStack_28 = (char *)0x0;
      puStack_2c = (undefined4 *)0x523f53;
      iVar1 = FUN_00511140();
      *(double *)(param_1 + 0x158) = (double)extraout_ST0_00;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 1;
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x130);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        *(undefined4 *)(param_1 + 0x134) = 0x18;
        puStack_24 = (undefined4 *)0x523f09;
        iVar1 = thunk_FUN_00603580();
        *(double *)(param_1 + 0x160) = (double)extraout_ST0;
        *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 1;
        return iVar1;
      }
      puStack_24 = (undefined4 *)0x0;
      pcStack_28 = s_for_Mafia_this_incorrect_situati_00676f7c;
      puStack_2c = (undefined4 *)0x523ee1;
      iVar1 = FUN_005d2520();
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 1;
      return iVar1;
    }
    puStack_2c = (undefined4 *)(param_1 + 0x168);
    iStack_30 = 0x523e4c;
    pcStack_28 = (char *)iVar1;
    FUN_0041d3f0();
    puStack_2c = (undefined4 *)DAT_006d0fd8;
    iStack_30 = *(int *)(DAT_006d0fd8 + 0x268) + 0x509c;
    FUN_0041d3f0();
    iStack_30 = 0x523e6c;
    FUN_00432640();
    if (DAT_006cd454 != (undefined4 *)0x0) {
      puStack_24 = (undefined4 *)0x1;
      pcStack_28 = (char *)0x523e7f;
      (**(code **)*DAT_006cd454)();
    }
    DAT_006cd454 = (undefined4 *)0x0;
    DAT_00695c00[4] = DAT_00695c00[4] | 3;
    puStack_24 = (undefined4 *)0x523e97;
    FUN_00568e20();
    puStack_24 = (undefined4 *)0x523ea0;
    (**(code **)(*(int *)(param_1 + -0x40) + 0x20))();
    puStack_24 = (undefined4 *)0x523eab;
    (**(code **)(*DAT_00695c00 + 0x24))();
    puStack_24 = (undefined4 *)0x523eb0;
    FUN_0050b5d0();
    puStack_24 = (undefined4 *)0x1;
    pcStack_28 = (char *)0x523eb7;
    iVar1 = FUN_004e1230();
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28) = 1;
    return iVar1;
  }
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return iVar1;
  }
  iVar3 = param_2 + -0x78;
  switch(param_2) {
  case 0x78:
    *(undefined4 *)(param_1 + 0x138) = 1;
    iVar1 = *(int *)(param_1 + 0x31c) + 1;
    *(int *)(param_1 + 0x31c) = iVar1 % 0x1b;
    return iVar1 / 0x1b;
  case 0x79:
    *(undefined4 *)(param_1 + 0x138) = 0;
    iVar3 = *(int *)(param_1 + 0x31c);
    iVar1 = iVar3 + -1;
    *(int *)(param_1 + 0x31c) = iVar1;
    if (iVar1 < 0) {
      iVar3 = iVar3 + 0x1a;
      *(int *)(param_1 + 0x31c) = iVar3;
      return iVar3;
    }
    break;
  case 0x7a:
    uVar4 = *(int *)(param_1 + 800) + 1U & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(param_1 + 800) = uVar4;
    break;
  case 0xce:
    if ((iVar1 == 2) && (iVar3 = 0, *(int *)(param_1 + 0x37c) != 0)) {
      puStack_24 = (undefined4 *)0x3f800000;
      pcStack_28 = (char *)0x3f800000;
      puStack_2c = (undefined4 *)0x52402d;
      FUN_005fd160();
      iVar3 = extraout_ECX;
    }
    if ((*(int *)(param_1 + 0x134) == 3) && (iVar3 = 0, *(int *)(param_1 + 900) != 0)) {
      puStack_24 = (undefined4 *)0x3f800000;
      pcStack_28 = (char *)0x3f800000;
      puStack_2c = (undefined4 *)0x52404e;
      FUN_005fd160();
      iVar3 = extraout_ECX_00;
    }
    if ((*(int *)(param_1 + 0x148) != 0) && (*(int *)(*(int *)(param_1 + 0x148) + 0x28) != 1)) {
      puStack_24 = *(undefined4 **)(param_1 + 800);
      pcStack_28 = *(char **)(param_1 + 0x31c);
      puStack_2c = (undefined4 *)0x524077;
      puStack_24 = (undefined4 *)FUN_005229f0();
      puStack_2c = (undefined4 *)(param_1 + 0x168);
      iStack_30 = 0x52408a;
      FUN_0041d3f0();
      iStack_30 = *(int *)(DAT_006d0fd8 + 0x268) + 0x509c;
      FUN_0041d3f0();
      iStack_30 = 0x5240a9;
      FUN_00433c40();
LAB_005240ac:
      if (*(int *)(param_1 + 0x148) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x28) = 1;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x144) + 0x28) = 1;
      iVar1 = *(int *)(param_1 + 0x140);
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x134) = 1;
      return iVar1;
    }
    puStack_24 = *(undefined4 **)(param_1 + 0x344);
    if (puStack_24 == (undefined4 *)0x40) {
      pcStack_28 = *(char **)(param_1 + 0x15c);
      puStack_2c = *(undefined4 **)(param_1 + 0x158);
      puStack_24 = (undefined4 *)0xa;
      iStack_30 = 0x5240ff;
      FUN_00511210();
      goto LAB_005240ac;
    }
    puStack_2c = (undefined4 *)(param_1 + 0x168);
    iStack_30 = 0x524111;
    pcStack_28 = (char *)iVar3;
    FUN_0041d3f0();
    iStack_30 = *(int *)(DAT_006d0fd8 + 0x268) + 0x509c;
    puStack_2c = (undefined4 *)extraout_ECX_01;
    FUN_0041d3f0();
    iStack_30 = 0x524130;
    FUN_00432640();
    if (*(int *)(param_1 + 0x344) != 0x10) goto LAB_005240ac;
    if (DAT_006cd454 == (undefined4 *)0x0) goto LAB_005241df;
    puVar2 = (undefined4 *)*DAT_006cd454;
    goto LAB_005241dd;
  case 0xcf:
    if ((iVar1 == 2) && (*(int *)(param_1 + 0x380) != 0)) {
      puStack_24 = (undefined4 *)0x3f800000;
      pcStack_28 = (char *)0x3f800000;
      puStack_2c = (undefined4 *)0x524177;
      FUN_005fd160();
    }
    if ((*(int *)(param_1 + 0x134) == 3) && (*(int *)(param_1 + 0x388) != 0)) {
      puStack_24 = (undefined4 *)0x3f800000;
      pcStack_28 = (char *)0x3f800000;
      puStack_2c = (undefined4 *)0x524198;
      FUN_005fd160();
    }
    if (*(int *)(param_1 + 0x148) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x28) = 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x144) + 0x28) = 1;
    iVar1 = *(int *)(param_1 + 0x140);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x134) = 1;
    if (*(int *)(param_1 + 0x130) != 0) {
      return iVar1;
    }
    if (DAT_006cd454 == (undefined4 *)0x0) goto LAB_005241df;
    puVar2 = (undefined4 *)*DAT_006cd454;
LAB_005241dd:
    puStack_24 = (undefined4 *)0x1;
    pcStack_28 = (char *)0x5241df;
    (*(code *)*puVar2)();
LAB_005241df:
    DAT_006cd454 = (undefined4 *)0x0;
    DAT_00695c00[4] = DAT_00695c00[4] | 3;
    puStack_24 = (undefined4 *)0x5241f2;
    FUN_00568e20();
    puStack_24 = (undefined4 *)0x5241fb;
    (**(code **)(*(int *)(param_1 + -0x40) + 0x20))();
    puStack_24 = (undefined4 *)0x524206;
    (**(code **)(*DAT_00695c00 + 0x24))();
    puStack_24 = (undefined4 *)0x52420b;
    FUN_0050b5d0();
    puStack_24 = (undefined4 *)0x1;
    pcStack_28 = (char *)0x524212;
    iVar1 = FUN_004e1230();
    return iVar1;
  }
  return iVar1;
}

