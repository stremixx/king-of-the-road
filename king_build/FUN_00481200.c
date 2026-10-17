
void FUN_00481200(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_51;
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c [2];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640150;
  local_14 = ExceptionList;
  local_20 = param_1;
  ExceptionList = &local_14;
  FUN_00490d40(param_1,&DAT_0066edf4,local_1c);
  uVar3 = 0;
  local_50 = (int *)(param_2[1] - *param_2);
  local_c = 0;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_50,&local_4c);
  iVar2 = *param_2;
  if (param_2[1] != iVar2) {
    do {
      local_51 = *(undefined1 *)(iVar2 + uVar3);
      FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_51,&local_50);
      iVar2 = *param_2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_2[1] - iVar2));
  }
  iVar2 = param_2[7];
  iVar4 = 0;
  local_44 = iVar2;
  if (iVar2 != param_2[8]) {
    do {
      local_50 = (int *)(iVar2 + 8);
      local_48 = 2;
      local_44 = iVar2;
      do {
        piVar1 = (int *)*local_50;
        if (piVar1 != (int *)0x0) {
          local_28 = param_1;
          FUN_00490d40(param_1,&DAT_0066edec,local_24);
          local_c._0_1_ = 1;
          local_4c = iVar4;
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_4c,&local_48);
          local_4c = *piVar1;
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_4c,&local_48);
          local_4c = piVar1[1];
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_4c,&local_48);
          local_4c = piVar1[3];
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_4c,&local_48);
          local_3c = piVar1[5];
          local_40 = piVar1[4];
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_40,&local_38);
          local_38 = piVar1[6];
          local_34 = piVar1[7];
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_38,&local_30);
          local_2c = local_1c[0];
          local_30 = local_20;
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_28);
          local_4c = piVar1[2];
          FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_4c,&local_48);
          local_c = (uint)local_c._1_3_ << 8;
          FUN_00490d90(local_28,local_24);
          iVar2 = local_44;
        }
        local_50 = local_50 + 1;
        local_48 = local_48 + -1;
      } while (local_48 != 0);
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + 1;
      local_48 = 0;
      local_44 = iVar2;
    } while (iVar2 != param_2[8]);
  }
  local_c = 0xffffffff;
  FUN_00490d90(local_20,local_1c);
  ExceptionList = local_14;
  return;
}

