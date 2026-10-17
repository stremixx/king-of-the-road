
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057cf40(int *param_1,int param_2,undefined4 param_3,int *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined1 local_6c [4];
  float local_68;
  float local_64;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (399 < DAT_0067c04c) {
    FUN_004e1e9c(s_Moving_Priority>_BEGIN_PRIOR_0067c0cc);
  }
  param_1[0x129] = param_1[0x5c];
  param_1[0x379] = 0;
  param_1[299] = 4;
  fVar7 = (float10)FUN_004e2035();
  param_1[0xca] = (int)(float)fVar7;
  *(undefined2 *)((int)param_1 + 0x32e) = 0;
  *(undefined2 *)(param_1 + 0xcb) = 0;
  fVar7 = (float10)FUN_004e2035();
  param_1[0x37a] = (int)(float)fVar7;
  param_1[100] = param_2;
  param_1[0x163] = 0;
  param_1[0x164] = DAT_00695b40;
  param_1[0x165] = 0x3f000000;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  fVar7 = (float10)FUN_004e2035();
  param_1[0xe2] = (int)(float)(fVar7 - (float10)_DAT_0064c7a8);
  param_1[0x35b] = DAT_007015b0;
  param_1[0x35c] = DAT_007015b4;
  param_1[0x35d] = DAT_007015b8;
  param_1[0x35e] = DAT_007015b0;
  param_1[0x35f] = DAT_007015b4;
  param_1[0x360] = DAT_007015b8;
  param_1[0x62] = 0;
  FUN_0057d450(0x3f800000,param_1[100],param_1[100],param_1[100]);
  param_1[200] = param_5;
  piVar3 = param_1 + 0x7d;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar3 = *param_4;
    param_4 = param_4 + 1;
    piVar3 = piVar3 + 1;
  }
  piVar3 = (int *)FUN_005aba00(local_60,param_1 + 0x7d);
  piVar6 = param_1 + 0x95;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  piVar3 = (int *)FUN_005ab130(local_60,param_3,param_1 + 0x95);
  piVar6 = param_1 + 0xad;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  uVar4 = FUN_005aba00(local_60,param_3);
  piVar3 = (int *)FUN_005ab130(local_30,param_1 + 0x7d,uVar4);
  piVar6 = param_1 + 0xb9;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  piVar3 = param_1 + 0x7d;
  piVar6 = param_1 + 0x319;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  fVar1 = DAT_00701594 * _DAT_0064c7a8;
  fVar2 = DAT_00701598 * _DAT_0064c7a8;
  param_1[0x123] = (int)(DAT_00701590 * _DAT_0064c7a8 + (float)param_1[0x86]);
  param_1[0x124] = (int)(fVar1 + (float)param_1[0x87]);
  param_1[0x125] = (int)(fVar2 + (float)param_1[0x88]);
  local_68 = DAT_00701594 * _DAT_0064c7a8;
  local_64 = DAT_00701598 * _DAT_0064c7a8;
  param_1[0x126] = (int)(DAT_00701590 * _DAT_0064c7a8 + (float)param_1[0x86]);
  param_1[0x127] = (int)(local_68 + (float)param_1[0x87]);
  param_1[0x128] = (int)(local_64 + (float)param_1[0x88]);
  (**(code **)(*param_1 + 0xdc))(local_6c);
  param_1[0x68] = DAT_007015b0;
  param_1[0x69] = DAT_007015b4;
  param_1[0x6a] = DAT_007015b8;
  param_1[0x6b] = DAT_007015b0;
  param_1[0x6c] = DAT_007015b4;
  param_1[0x6d] = DAT_007015b8;
  param_1[0x6e] = DAT_007015b0;
  param_1[0x6f] = DAT_007015b4;
  param_1[0x70] = DAT_007015b8;
  param_1[0x74] = DAT_007015b0;
  param_1[0x75] = DAT_007015b4;
  param_1[0x76] = DAT_007015b8;
  piVar3 = param_1 + 0x7d;
  piVar6 = param_1 + 0xcc;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  param_1[0xd8] = param_1[0x68];
  param_1[0xd9] = param_1[0x69];
  param_1[0xda] = param_1[0x6a];
  param_1[0xdb] = param_1[0x6b];
  param_1[0xdc] = param_1[0x6c];
  param_1[0xdd] = param_1[0x6d];
  FUN_0058def0(param_3,s__MovingItem__init0__1_0067c0b4,0);
  FUN_0058def0(param_2,s__MovingItem__init0__2_0067c09c,0);
  (**(code **)(*param_1 + 0x34))();
  FUN_0057d710(param_1 + 0x331);
  param_1[0xc5] = DAT_006f5338;
  param_1[0xc6] = DAT_006f533c;
  iVar5 = DAT_006f5340;
  *(undefined1 *)(param_1 + 0x11b) = 0;
  param_1[199] = iVar5;
  piVar3 = param_1 + 0x363;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  param_1[0x36c] = 0;
  param_1[0x12a] = 0;
  param_1[300] = 0;
  param_1[0x313] = DAT_007015b0;
  param_1[0x314] = DAT_007015b4;
  param_1[0x315] = DAT_007015b8;
  param_1[0x316] = DAT_007015b0;
  param_1[0x317] = DAT_007015b4;
  iVar5 = DAT_007015b8;
  param_1[0x12d] = 0;
  param_1[0x318] = iVar5;
  param_1[0x12e] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  piVar3 = param_1 + 0x12f;
  for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  piVar3 = param_1 + 0x373;
  iVar5 = 6;
  do {
    piVar3[-6] = 0;
    *piVar3 = 0x4b189680;
    piVar3 = piVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0x77] = DAT_007015b0;
  param_1[0x78] = DAT_007015b4;
  param_1[0x79] = DAT_007015b8;
  param_1[0x7a] = DAT_007015b0;
  param_1[0x7b] = DAT_007015b4;
  iVar5 = DAT_007015b8;
  param_1[0x168] = 0;
  param_1[0x7c] = iVar5;
  fVar7 = (float10)FUN_004e2035();
  param_1[0x312] = (int)(float)(fVar7 - (float10)_DAT_0064c7a8);
  (**(code **)(*param_1 + 0x4c))();
  return;
}

