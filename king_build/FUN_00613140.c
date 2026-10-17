
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00613140(void)

{
  ushort uVar1;
  undefined2 uVar2;
  float *extraout_ECX;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int in_stack_0002040c;
  
  FUN_0061d4f0();
  if (in_stack_0002040c == 0) {
    return 0;
  }
  FUN_0061f516(in_stack_0002040c);
  puVar8 = (undefined4 *)register0x00000010;
  for (iVar3 = 0x8100; puVar8 = puVar8 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
  }
  *(undefined2 *)puVar8 = 0;
  puVar7 = (undefined2 *)&stack0x00000004;
  iVar3 = 0x101;
  do {
    iVar9 = 0x101;
    do {
      uVar2 = FUN_005aa7c0(in_stack_0002040c);
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar6 = (ushort *)&stack0x00000004;
  iVar3 = 0x101;
  pfVar4 = extraout_ECX;
  do {
    iVar9 = 0x101;
    pfVar5 = pfVar4;
    do {
      pfVar4 = pfVar5 + 4;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *pfVar5 = ((float)uVar1 * _DAT_00652220 - _DAT_0064b248) * _DAT_0064b2e8 + _DAT_00652218;
      iVar9 = iVar9 + -1;
      pfVar5 = pfVar4;
    } while (iVar9 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 1;
}

