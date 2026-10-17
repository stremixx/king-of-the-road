
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0057d450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  fVar1 = DAT_00701594 * _DAT_0064c988;
  fVar2 = DAT_00701598 * _DAT_0064c988;
  *(float *)(param_1 + 0x314) = DAT_00701590 * _DAT_0064c988;
  *(float *)(param_1 + 0x318) = fVar1;
  *(float *)(param_1 + 0x31c) = fVar2;
  *(undefined4 *)(param_1 + 0x1a0) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x1a8) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x1ac) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x1b0) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x1b4) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x1b8) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x1bc) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x1c0) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x18c) = param_2;
  *(undefined4 *)(param_1 + 0x194) = param_3;
  *(undefined4 *)(param_1 + 0x198) = param_4;
  *(undefined4 *)(param_1 + 0x19c) = param_5;
  puVar4 = &DAT_00701550;
  puVar5 = (undefined4 *)(param_1 + 0x2b4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_00701550;
  puVar5 = (undefined4 *)(param_1 + 0x2e4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0057d710(param_1 + 0xcc4);
  return;
}

