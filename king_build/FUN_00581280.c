
undefined4 __thiscall FUN_00581280(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x54))(param_2,&stack0x00000008);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x5c))(unaff_retaddr);
  }
  if (param_1[0x5d] != 0) {
    (**(code **)(*param_1 + 0x8c))(param_1[200],param_1 + 0x7d);
    param_1[0x77] = DAT_007015b0;
    param_1[0x78] = DAT_007015b4;
    param_1[0x79] = DAT_007015b8;
    param_1[0x7a] = DAT_007015b0;
    param_1[0x7b] = DAT_007015b4;
    param_1[0x7c] = DAT_007015b8;
    return uVar2;
  }
  (**(code **)(*param_1 + 0x58))(unaff_retaddr);
  param_1[0x77] = DAT_007015b0;
  param_1[0x78] = DAT_007015b4;
  param_1[0x79] = DAT_007015b8;
  param_1[0x7a] = DAT_007015b0;
  param_1[0x7b] = DAT_007015b4;
  param_1[0x7c] = DAT_007015b8;
  return uVar2;
}

