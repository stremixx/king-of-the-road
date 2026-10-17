
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00554c60(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float unaff_retaddr;
  
  if (param_2 <= _DAT_0064b240) {
    if (param_2 < _DAT_0064b254) {
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        (**(code **)(*param_1 + 0x20))(&param_2);
        FUN_00555640(&stack0x00000000);
      }
      else {
        FUN_00555640(&param_2);
        (**(code **)(*param_1 + 0x20))(&param_2);
      }
      if (unaff_retaddr == _DAT_0064b254) {
        return 0;
      }
      return 1;
    }
  }
  else {
    param_2 = 1.0;
  }
  iVar1 = FUN_00549300();
  if ((iVar1 == 1) || (iVar1 = FUN_00549300(), iVar1 == 2)) {
    FUN_00548bd0(1);
  }
  FUN_00554c10();
  if (param_1[0x1518] != 0) {
    FUN_00501410(0,&param_2,param_1[0xa39]);
    iVar1 = *(int *)(param_1[0x1518] + 0x3ca0);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      FUN_004eafa0(0);
    }
    else if (iVar1 == 2) {
      FUN_004eaf60(0xbf19999a);
    }
    FUN_00501410(1,&param_2,param_1[0xa3a]);
  }
  FUN_00588b90(&param_2,param_1[0xa31]);
  iVar1 = 0;
  param_1[0x1517] = (int)(*(float *)(param_1[0x950] + 0x20) + (float)_DAT_0064a830);
  if ((param_1[0x1518] != 0) && (0 < (int)(&DAT_00697028)[param_1[0xa2d] * 0x25c])) {
    iVar2 = 0xb;
    piVar3 = param_1 + 0xa44;
    do {
      if (0xc < iVar2) break;
      FUN_00501410(iVar2 + -8,&param_2,piVar3[-8]);
      FUN_00501410(iVar2,&param_2,*piVar3);
      FUN_00501410(iVar2 + 8,&param_2,piVar3[8]);
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar1 < (int)(&DAT_00697028)[param_1[0xa2d] * 0x25c]);
  }
  FUN_00588b90(&param_2,param_1[0xa30]);
  FUN_00588b90(&param_2,param_1[0xa33]);
  FUN_00588b90(&param_2,param_1[0xa32]);
  if ((param_1[0x1518] != 0) && (iVar1 < (int)(&DAT_00697028)[param_1[0xa2d] * 0x25c])) {
    iVar2 = iVar1 + 0xb;
    piVar3 = param_1 + iVar1 + 0xa44;
    do {
      FUN_00501410(iVar2 + -8,&param_2,piVar3[-8]);
      FUN_00501410(iVar2,&param_2,*piVar3);
      FUN_00501410(iVar2 + 8,&param_2,piVar3[8]);
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar1 < (int)(&DAT_00697028)[param_1[0xa2d] * 0x25c]);
  }
  FUN_00588b90(&param_2,param_1[0xa38]);
  FUN_00588b90(&param_2,param_1[0xa37]);
  FUN_00588b90(&param_2,param_1[0xa36]);
  FUN_00588b90(&param_2,param_1[0xa35]);
  FUN_00588b90(&param_2,param_1[0xa34]);
  FUN_00501410(2,&param_2,param_1[0xa3b]);
  if (param_2 == _DAT_0064b254) {
    return 0;
  }
  return 1;
}

