
undefined4 FUN_0046db70(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f8b0;
  local_c = ExceptionList;
  if (DAT_0068c27c == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x54) == 1) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(DAT_0068c278 + 8);
  }
  else {
    iVar8 = DAT_0068c268;
    iVar7 = DAT_0068c268;
    if (DAT_0068c268 != DAT_0068c26c) {
      while (iVar2 = iVar7 + 0xc, iVar2 != DAT_0068c26c) {
        piVar1 = (int *)(iVar7 + 0x10);
        iVar7 = iVar2;
        if (*piVar1 < *(int *)(iVar8 + 4)) {
          iVar8 = iVar2;
        }
      }
    }
    ExceptionList = &local_c;
    *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
    iVar8 = *(int *)(iVar8 + 8);
    *(int *)(param_1 + 0x2c8) = iVar8;
    if (iVar8 != *(int *)(DAT_0068c278 + 8)) {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x100;
    }
  }
  FUN_006022c0();
  local_34 = (undefined4 *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_40 = DAT_0066e62c;
  FUN_0046e460(0,&local_40,&local_3c);
  FUN_00475bc0(&local_34);
  FUN_006027f0(0x3df,local_34,local_30 - (int)local_34);
  FUN_00601820(local_24,local_20 - local_24);
  uVar3 = local_2c - (int)local_34;
  local_4 = (uint)local_4._1_3_ << 8;
  if (uVar3 != 0) {
    if (uVar3 < 0x81) {
      local_3c = (undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      local_38 = local_34;
      LVar4 = InterlockedExchange(&DAT_0068c164,1);
      uVar3 = DAT_0066b83c;
      if (LVar4 != 0) {
        uVar6 = 0;
        if (DAT_0066b83c != 0) {
          uVar5 = DAT_0068c168 >> 1;
          do {
            if (((uVar5 <= uVar6) && (DAT_0068c164 == 0)) &&
               (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar6;
              goto LAB_0046dd97;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar3);
        }
        DAT_0066b83c = 0x1e;
        iVar8 = 6;
        while( true ) {
          iVar7 = iVar8;
          if (0x1b < iVar8) {
            iVar7 = 0x1b;
          }
          LVar4 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar4 == 0) break;
          if (iVar7 < 0x15) {
            Sleep(0);
            iVar8 = iVar8 + 1;
          }
          else {
            Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
            iVar8 = iVar8 + 1;
          }
        }
      }
LAB_0046dd97:
      *local_38 = *local_3c;
      *local_3c = local_38;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(local_34);
    }
  }
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return 0;
}

