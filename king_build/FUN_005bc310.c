
undefined4 * __thiscall
FUN_005bc310(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  int local_cc;
  int local_c8;
  undefined4 *local_c4;
  undefined4 local_a4 [12];
  undefined4 local_74 [12];
  undefined1 local_44 [48];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647e17;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = &PTR_FUN_00650788;
  param_1[1] = param_2;
  uVar1 = FUN_00631d33();
  param_1[3] = uVar1;
  puVar2 = (undefined4 *)FUN_00631d33(param_2 * 0x30);
  local_c = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (-1 < param_2 + -1) {
    local_c4 = (undefined4 *)param_2;
    puVar7 = puVar2;
    do {
      FUN_004011e0(puVar7,0xc,4,FUN_004042a0);
      puVar5 = &DAT_00701550;
      puVar6 = puVar7;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar7 = puVar7 + 0xc;
      local_c4 = (undefined4 *)((int)local_c4 + -1);
    } while (local_c4 != (undefined4 *)0x0);
  }
  param_1[2] = puVar2;
  param_1[4] = &PTR_LAB_0064c80c;
  param_1[5] = 0;
  param_1[6] = 0;
  local_c = 2;
  *param_1 = &PTR_FUN_00650784;
  param_1[4] = &PTR_LAB_00650770;
  param_1[0xd] = 0;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  uVar1 = __ftol();
  param_1[0xc] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = FUN_00631d33();
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  local_c8 = 0;
  if (0 < (int)param_1[1]) {
    local_cc = 0;
    local_c4 = param_3;
    do {
      uVar1 = FUN_005ab330(local_44,*local_c4,local_c4[1],local_c4[2]);
      FUN_005bb9d0(local_c8,uVar1);
      FUN_005bba00(local_c8,(double)local_c8);
      if (local_cc != 0) {
        iVar3 = param_1[2];
        puVar2 = (undefined4 *)(local_cc + iVar3) + -0xc;
        puVar7 = local_74;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar2 = (undefined4 *)(local_cc + iVar3);
        puVar7 = local_a4;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
        fVar8 = (float10)FUN_005aabc0();
        *(double *)(param_1[7] + -8 + local_c8 * 8) = (double)fVar8;
        if (0x30 < local_cc) {
          iVar3 = param_1[7];
          *(double *)(iVar3 + -8 + local_c8 * 8) =
               *(double *)(iVar3 + -0x10 + local_c8 * 8) + *(double *)(iVar3 + -8 + local_c8 * 8);
        }
      }
      local_c8 = local_c8 + 1;
      local_c4 = local_c4 + 3;
      local_cc = local_cc + 0x30;
    } while (local_c8 < (int)param_1[1]);
  }
  puVar2 = param_1 + 0x10;
  iVar3 = 10;
  do {
    puVar2[10] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = local_14;
  return param_1;
}

