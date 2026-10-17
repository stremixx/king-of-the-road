
void FUN_00472160(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f9f9;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  ExceptionList = &local_c;
  param_1[3] = DAT_0068c0c4;
  iVar2 = *param_1;
  iVar5 = FUN_0047c550(iVar1,iVar1,iVar2,iVar2,0);
  iVar3 = param_1[1];
  for (; iVar5 != iVar3; iVar5 = iVar5 + 0x10) {
    FUN_0046c840(0);
  }
  param_1[1] = param_1[1] + (iVar1 - iVar2 >> 4) * -0x10;
  puVar7 = DAT_006898e0;
  if (DAT_006898e0 != DAT_006898e4) {
    do {
      local_1c = *puVar7;
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
      puVar4 = (undefined4 *)param_1[1];
      local_4 = 0;
      if (puVar4 == (undefined4 *)param_1[2]) {
        FUN_004795d0(puVar4,&local_1c);
      }
      else {
        local_4 = 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = local_1c;
          FUN_0044dd30(&local_18);
        }
        param_1[1] = param_1[1] + 0x10;
      }
      puVar4 = local_18;
      uVar6 = local_10 - (int)local_18;
      local_4 = 0xffffffff;
      if (uVar6 != 0) {
        if (uVar6 < 0x81) {
          FUN_00401aa0();
          *puVar4 = *(undefined4 *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
          *(undefined4 **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = puVar4;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(local_18);
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != DAT_006898e4);
  }
  ExceptionList = local_c;
  return;
}

