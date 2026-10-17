
void __fastcall FUN_004ee4a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x2778);
  *(undefined4 *)(param_1 + 0x2788) = 0;
  if (iVar1 == 1) {
    FUN_004ee370(0);
  }
  else {
    if (iVar1 == 2) {
      FUN_004ee200(1);
    }
    else if (iVar1 != 4) goto LAB_004ee4e5;
    *(undefined2 *)(param_1 + 0x2716) = 1;
    *(undefined4 *)(param_1 + 10000) = 0x3f800000;
  }
LAB_004ee4e5:
  *(undefined4 *)(param_1 + 0x2778) = 0;
  puVar2 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x2790);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

