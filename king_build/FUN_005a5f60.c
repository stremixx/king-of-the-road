
undefined4 * __thiscall
FUN_005a5f60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
            undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0x1f,s_lightonglass2_0067d97c);
  param_1[10] = param_3;
  param_1[8] = param_2;
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  param_1[0x1e] = param_10;
  param_1[0xd] = param_6;
  local_4 = 0;
  *param_1 = &PTR_FUN_00650558;
  param_1[0x1d] = param_9;
  param_1[0x1a] = param_8;
  FUN_0061c369(local_4c,&DAT_0067d974,param_7);
  iVar1 = FUN_005ee8e0(0,local_4c);
  param_1[0x1b] = iVar1;
  if (iVar1 == 0) {
    FUN_005d2520(local_4c,0);
  }
  *(byte *)(param_1[0x1b] + 0x28) = *(byte *)(param_1[0x1b] + 0x28) | 1;
  FUN_0061c369(local_4c,&DAT_0067d96c,param_7);
  iVar1 = FUN_005ee8e0(0,local_4c);
  param_1[0x1c] = iVar1;
  if (iVar1 == 0) {
    FUN_005d2520(local_4c,0);
  }
  *(byte *)(param_1[0x1c] + 0x28) = *(byte *)(param_1[0x1c] + 0x28) | 1;
  FUN_0061c369(local_4c,&DAT_0067d964,param_7);
  iVar1 = FUN_005ee8e0(0,local_4c);
  param_1[0x10] = iVar1;
  if (iVar1 == 0) {
    FUN_005d2520(local_4c,0);
  }
  if ((*(byte *)(param_1 + 0x1e) & 4) == 0) {
    iVar1 = 1;
    if (1 < param_8 + 1) {
      piVar3 = param_1 + 0x11;
      do {
        FUN_0061c369(local_4c,s__ss_d_0067d95c,param_7,iVar1);
        iVar2 = FUN_005ee8e0(0,local_4c);
        *piVar3 = iVar2;
        if (iVar2 == 0) {
          FUN_005d2520(local_4c,0);
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar1 < param_8 + 1);
    }
  }
  else {
    FUN_0061c369(local_4c,&DAT_0067d954,param_7);
    iVar1 = FUN_005ee8e0(0,local_4c);
    param_1[0x11] = iVar1;
    if (iVar1 == 0) {
      FUN_005d2520(local_4c,0);
    }
  }
  FUN_005d2c20(param_1);
  ExceptionList = local_c;
  return param_1;
}

