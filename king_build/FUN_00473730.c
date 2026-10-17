
int FUN_00473730(undefined4 param_1,undefined4 **param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063fc08;
  local_c = ExceptionList;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00479420(param_1);
  FUN_00479420(param_2);
  if (&local_18 != param_2) {
    puVar3 = *param_2;
    uVar4 = (local_14 - (int)local_18) / 0x28;
    if ((uint)(((int)param_2[2] - (int)puVar3) / 0x28) < uVar4) {
      puVar3 = (undefined4 *)FUN_0047adc0(uVar4,local_18,local_14);
      iVar5 = ((int)param_2[2] - (int)*param_2) / 0x28;
      if (iVar5 != 0) {
        FUN_0044b440(*param_2,iVar5 * 0x28);
      }
      *param_2 = puVar3;
      param_2[2] = puVar3 + uVar4 * 10;
    }
    else {
      uVar1 = ((int)param_2[1] - (int)puVar3) / 0x28;
      if (uVar1 < uVar4) {
        FUN_0047c880(local_18,local_18 + uVar1 * 10,puVar3,param_1,0);
        FUN_0047d560(local_18 + (((int)param_2[1] - (int)*param_2) / 0x28) * 10,local_14,param_2[1],
                     param_1);
      }
      else {
        FUN_0047c880(local_18,local_14,puVar3,param_1,0);
      }
    }
    param_2[1] = *param_2 + uVar4 * 10;
  }
  puVar3 = local_18;
  iVar5 = (local_10 - (int)local_18) * 0x66666667;
  iVar2 = (local_10 - (int)local_18) / 0x28;
  if (iVar2 != 0) {
    uVar4 = iVar2 * 0x28;
    if (0x80 < uVar4) {
      iVar5 = FUN_0061c888(local_18);
      ExceptionList = local_c;
      return iVar5;
    }
    iVar5 = FUN_00401aa0();
    *puVar3 = *(undefined4 *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar3;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return iVar5;
}

