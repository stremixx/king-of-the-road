
undefined4 __fastcall FUN_005d1e70(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined4 **)(*param_1 + 8);
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      iVar3 = FUN_005d1dd0(puVar2[3],puVar2[4]);
      if (iVar3 == 0) {
        iVar3 = _strncmp((char *)puVar2[3],&DAT_0067ea60,2);
        if (iVar3 != 0) {
          return puVar2[3];
        }
      }
      else {
        FUN_005d1860();
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
    iVar3 = FUN_005d1dd0(*(undefined4 *)(*param_1 + 0xc),*(undefined4 *)(*param_1 + 0x10));
    if (iVar3 == 0) {
      iVar3 = _strncmp(*(char **)(*param_1 + 0xc),&DAT_0067ea60,2);
      if (iVar3 != 0) {
        return *(undefined4 *)(*param_1 + 0xc);
      }
    }
    else {
      puVar1 = (undefined4 *)*param_1;
      if (puVar1[2] == 0) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *param_1 = 0;
        return 0;
      }
      *param_1 = puVar1[2];
      FUN_005d1860();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  return 0;
}

