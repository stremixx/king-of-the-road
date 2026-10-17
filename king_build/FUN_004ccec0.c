
uint * __thiscall FUN_004ccec0(uint *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  DAT_006951c0 = param_3;
  if (8 < param_2) {
    param_2 = 8;
  }
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  uVar1 = FUN_00631d33(0x7788);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)(uVar1 + 0x70);
    iVar3 = 0xff;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x1e;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  param_1[3] = uVar1;
  uVar1 = 0;
  do {
    *(undefined4 *)(param_1[3] + 0x70 + uVar1) = 0;
    *(undefined4 *)(param_1[3] + 0x68 + uVar1) = 0;
    *(undefined4 *)(param_1[3] + 0x6c + uVar1) = 0;
    *(undefined4 *)(param_1[3] + 0x74 + uVar1) = 0xffffffff;
    (**(code **)(*param_3 + 0xb0))(param_3,iVar3,0);
    uVar1 = uVar1 + 0x78;
    iVar3 = iVar3 + 1;
  } while (uVar1 < 0x7788);
  return param_1;
}

