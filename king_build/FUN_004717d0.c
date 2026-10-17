
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004717d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_58 [6];
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  local_8 = 0;
  uStack_4 = 0;
  puStack_18 = *(undefined4 **)(DAT_0068be20 + *(int *)(param_1 + 0xc) * 4);
  puStack_1c = &param_1;
  uStack_20 = 0x471801;
  FUN_00404d60();
  puStack_18 = &local_8;
  iStack_3c = param_1;
  uStack_40 = 0x471818;
  FUN_0040a430();
  puVar3 = (undefined4 *)&stack0x00000008;
  puVar4 = auStack_58;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00487600(0);
  *(double *)(iVar1 + 0x58) = _DAT_0066e8a0 * (double)CONCAT44(uStack_4,local_8);
  return;
}

