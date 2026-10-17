
void FUN_00638194(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00638ffd();
  if (param_3 == 0) {
    FUN_00632e26(0,0,0,0,0,(-(uint)(param_2 != 0) & 0xffffffc0) + 0x80 | 0x17);
    (**(code **)(*param_1 + 0xc4))(param_2);
    if ((param_2 != 0) || (iVar2 = FUN_0063900e(), iVar2 == 0)) {
      (**(code **)(*piVar1 + 200))(0);
    }
  }
  else {
    (**(code **)(*param_1 + 0xc4))(param_2);
    piVar1[0x2e] = piVar1[0x2e] | 0xc;
  }
  iVar2 = FUN_0063900e();
  if (iVar2 == 0) {
    return;
  }
  if ((int *)param_1[0x1c] == (int *)0x0) {
    uVar3 = (uint)(param_2 != 0);
  }
  else {
    uVar3 = (**(code **)(*(int *)param_1[0x1c] + 0xe0))();
  }
  if (uVar3 == 1) {
    if (param_2 != 0) {
      piVar1[0x22] = -1;
      if (param_3 == 0) {
        uVar4 = 8;
        goto LAB_00638252;
      }
      piVar1[0x22] = 8;
      goto LAB_0063827d;
    }
  }
  else if (uVar3 == 0) {
    piVar1[0x22] = -1;
    if (param_3 != 0) {
      piVar1[0x22] = 0;
      return;
    }
    uVar4 = 0;
LAB_00638252:
    FUN_00632e75(uVar4);
    return;
  }
  if (param_3 != 0) {
    return;
  }
LAB_0063827d:
  (**(code **)(*piVar1 + 200))(0);
  return;
}

