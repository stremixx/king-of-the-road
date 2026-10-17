
void __thiscall FUN_005dec10(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_120 [9];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  FUN_005dea80(param_3);
  puVar2 = local_120 + 2;
  iVar3 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = &DAT_00701550;
  puVar4 = local_120;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_005ab7d0(local_60,(float)*(double *)(param_1 + 0xb70));
  uVar1 = FUN_005ab5d0(local_f0,-(float)*(double *)(param_1 + 0xb78),uVar1);
  uVar1 = FUN_005ab6d0(local_c0,(float)*(double *)(param_1 + 0xb80),uVar1);
  uVar1 = FUN_005ab130(local_90,uVar1);
  puVar2 = (undefined4 *)FUN_005ab130(local_30,uVar1);
  puVar4 = local_120;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_fc = *(undefined4 *)(param_3 + 0x24);
  local_f8 = *(undefined4 *)(param_3 + 0x28);
  local_f4 = *(undefined4 *)(param_3 + 0x2c);
  FUN_005f1800(local_120,0);
  *(undefined4 *)(*(int *)(param_1 + 0x1e8) + 0x4c) = param_2;
  return;
}

