
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00457580(int *param_1,int *param_2,int *param_3,double *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  int *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0063ed10;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_c = 0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (local_5c = param_2; local_5c != param_3; local_5c = local_5c + 1) {
    iVar5 = *local_5c;
    piVar2 = (int *)FUN_0045fa80(*(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(iVar5 + 0x20),param_2
                                 ,local_5c);
    if (piVar2 != *(int **)(iVar5 + 0x20)) {
      iVar5 = *(int *)(DAT_0068be60 + *piVar2 * 4);
      local_58 = *(undefined4 *)(iVar5 + 0x38);
      uStack_54 = *(undefined4 *)(iVar5 + 0x3c);
      local_50 = *(undefined4 *)(param_4 + 1);
      uStack_4c = *(undefined4 *)((int)param_4 + 0xc);
      local_48 = *(undefined4 *)(iVar5 + 0x30);
      uStack_44 = *(undefined4 *)(iVar5 + 0x34);
      local_40 = *(undefined4 *)param_4;
      uStack_3c = *(undefined4 *)((int)param_4 + 4);
      FUN_00405ea0(*(double *)(iVar5 + 0x30) - *param_4,*(double *)(iVar5 + 0x38) - param_4[1],
                   *(double *)(iVar5 + 0x40) - param_4[2]);
      fVar6 = (float10)FUN_004577a0();
      if ((float10)_DAT_0064a850 < fVar6) {
        if (local_34 == local_30) {
          FUN_0045faa0(local_34,&local_5c);
        }
        else {
          if (local_34 != (undefined4 *)0x0) {
            *local_34 = local_5c;
          }
          local_34 = local_34 + 1;
        }
      }
    }
  }
  iVar5 = (int)local_34 - (int)local_38 >> 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0044b6e0();
  }
  *param_1 = iVar3;
  param_1[1] = iVar3;
  param_1[2] = iVar3 + iVar5 * 4;
  local_c = CONCAT31(local_c._1_3_,1);
  iVar5 = FUN_0046b5a0(local_38,local_34,iVar3,local_5c);
  puVar1 = local_38;
  param_1[1] = iVar5;
  iVar5 = (int)local_30 - (int)local_38 >> 2;
  if (iVar5 != 0) {
    uVar4 = iVar5 * 4;
    if (0x80 < uVar4) {
      FUN_0061c888();
      ExceptionList = local_14;
      return param_1;
    }
    FUN_00401aa0();
    *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_14;
  return param_1;
}

