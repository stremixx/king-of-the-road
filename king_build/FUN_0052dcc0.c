
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052dcc0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0xdfc) = *(undefined4 *)(param_1 + 800);
  uVar1 = FUN_005ab330(local_60,DAT_00701590 * _DAT_0064b440,DAT_00701594 * _DAT_0064b440,
                       DAT_00701598 * _DAT_0064b440);
  puVar2 = (undefined4 *)FUN_005ab130(local_30,param_1 + 500,uVar1);
  puVar4 = (undefined4 *)(param_1 + 0xe00);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0xe30) = 0;
  *(undefined4 *)(param_1 + 0xdf8) = 0;
  if (param_2 == 0) {
    *(code **)(param_1 + 0xe40) = FUN_004843e0;
  }
  else {
    *(int *)(param_1 + 0xe40) = param_2;
  }
  uVar1 = FUN_005eea00(s_ovation1Sound_006774c0);
  *(undefined4 *)(param_1 + 0xe38) = 0;
  *(undefined4 *)(param_1 + 0xe3c) = 0;
  *(undefined4 *)(param_1 + 0xe34) = uVar1;
  return;
}

