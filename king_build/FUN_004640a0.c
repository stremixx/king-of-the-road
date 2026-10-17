
int * FUN_004640a0(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar1 = param_3;
  puStack_8 = &LAB_0063f5a0;
  local_c = ExceptionList;
  local_4 = 0;
  piVar4 = param_2;
  ExceptionList = &local_c;
  while( true ) {
    iVar2 = FUN_0061d520(*param_1,puVar1);
    while (iVar2 < 0) {
      piVar5 = param_1 + 3;
      param_1 = param_1 + 3;
      iVar2 = FUN_0061d520(*piVar5,puVar1);
    }
    iVar2 = FUN_0061d520(puVar1,piVar4[-3]);
    piVar5 = piVar4;
    while (piVar4 = piVar5 + -3, iVar2 < 0) {
      iVar2 = FUN_0061d520(puVar1,piVar5[-6]);
      piVar5 = piVar4;
    }
    if (piVar4 <= param_1) break;
    FUN_0044a420(param_1[1] - *param_1,&param_2);
    local_14 = FUN_00407250(*param_1,param_1[1],local_18);
    local_4._0_1_ = 1;
    FUN_0044c100(piVar4);
    FUN_0044c100(&local_18);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_10 - local_18 != 0) {
      FUN_0044b440(local_18,local_10 - local_18);
    }
    param_1 = param_1 + 3;
  }
  uVar3 = param_5 - (int)puVar1;
  if (uVar3 != 0) {
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = puVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(puVar1);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

