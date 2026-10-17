
int * __thiscall FUN_004bc6e0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006448bc;
  local_c = ExceptionList;
  uVar6 = 0;
  ExceptionList = &local_c;
  param_1[4] = param_3;
  piVar4 = param_1 + 6;
  do {
    FUN_0061c369(local_10c,&DAT_0067154c,param_2,uVar6);
    uVar1 = FUN_005d8940(s_common_00671688);
    iVar2 = FUN_004bccd0(local_10c,uVar1);
    *piVar4 = iVar2;
    uVar6 = uVar6 + 1;
    piVar4 = piVar4 + 1;
    *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) | 0x40000;
  } while (uVar6 < 2);
  param_1[5] = param_4;
  iVar2 = FUN_00631d33(param_4 << 2);
  *param_1 = iVar2;
  iVar3 = FUN_00631d33(param_1[5] << 2);
  iVar2 = param_1[5];
  param_1[1] = iVar3;
  piVar4 = (int *)FUN_00631d33(iVar2 * 0xf0 + 4);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar4 + 1;
    *piVar4 = iVar2;
    FUN_0061d173(piVar5,0xf0,iVar2,&LAB_004bc870,FUN_004030a0);
  }
  iVar2 = param_1[5];
  local_4 = 0xffffffff;
  param_1[2] = (int)piVar5;
  piVar4 = (int *)FUN_00631d33(iVar2 * 0xf0 + 4);
  local_4 = 1;
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar4 + 1;
    *piVar4 = iVar2;
    FUN_0061d173(piVar5,0xf0,iVar2,&LAB_004bc870,FUN_004030a0);
  }
  iVar2 = 0;
  param_1[3] = (int)piVar5;
  if (0 < param_1[5]) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*param_1 + -4 + iVar2 * 4) = 0;
      *(undefined4 *)(param_1[1] + -4 + iVar2 * 4) = 0;
    } while (iVar2 < param_1[5]);
  }
  param_1[8] = 0;
  param_1[0x15] = 0;
  piVar4 = param_1 + 10;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

