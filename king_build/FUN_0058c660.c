
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058c660(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  int local_13c [9];
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  int local_100 [12];
  undefined1 local_d0 [64];
  float local_90;
  float local_8c;
  float local_88;
  
  if (param_1[0x3e4] != 0) {
    param_2 = 0;
  }
  if (param_2 != param_1[0x381]) {
    if (param_2 == 1) {
      param_1[0x381] = 1;
      return;
    }
    FUN_005eebf0();
    iVar1 = param_1[200];
    piVar4 = param_1 + 0x7d;
    piVar5 = local_100;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar3 = 0;
    do {
      iVar2 = FUN_00592120(param_1,local_d0,&local_158);
      if (iVar2 == 0) break;
      local_14c = local_158 + (float)_DAT_0064a590;
      local_154 = local_90 * local_14c;
      piVar4 = param_1 + 0x7d;
      piVar5 = local_13c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      local_150 = local_8c * local_14c;
      local_14c = local_88 * local_14c;
      local_148 = local_154;
      local_144 = local_150;
      local_140 = local_14c;
      FUN_005aae00(local_10c,&local_148);
      iVar2 = FUN_004e5437(param_1[200],param_1 + 0x86,local_118);
      if (iVar2 == 0) {
        iVar2 = param_1[200];
        (**(code **)(*param_1 + 0x1c))(1);
      }
      (**(code **)(*param_1 + 0x8c))(iVar2,local_13c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    if (iVar3 == 3) {
      (**(code **)(*param_1 + 0x8c))(iVar1,local_100);
      return;
    }
    param_1[0x381] = param_2;
  }
  return;
}

