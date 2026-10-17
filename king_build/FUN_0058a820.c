
/* WARNING: Removing unreachable block (ram,0x0058a8cf) */
/* WARNING: Removing unreachable block (ram,0x0058a8d6) */
/* WARNING: Removing unreachable block (ram,0x0058a8e0) */
/* WARNING: Removing unreachable block (ram,0x0058a8e9) */
/* WARNING: Removing unreachable block (ram,0x0058a8f9) */
/* WARNING: Removing unreachable block (ram,0x0058a99e) */
/* WARNING: Removing unreachable block (ram,0x0058a9b2) */
/* WARNING: Removing unreachable block (ram,0x0058a9c0) */
/* WARNING: Removing unreachable block (ram,0x0058a9e9) */
/* WARNING: Removing unreachable block (ram,0x0058aa7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0058a820(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000378;
  undefined4 in_stack_0000037c;
  undefined4 in_stack_00000380;
  undefined4 in_stack_00000678;
  undefined4 in_stack_00000778;
  float in_stack_00000878;
  int in_stack_00000b7c;
  int in_stack_00000c7c;
  int in_stack_00001980;
  float *in_stack_00001988;
  undefined4 *in_stack_0000198c;
  undefined4 *in_stack_00001990;
  
  FUN_0061d4f0();
  FUN_00587370();
  iVar5 = FUN_00589570();
  iVar6 = FUN_0058a530();
  iVar7 = FUN_00584830();
  if (((iVar5 == 0) && (iVar6 == 0)) && (iVar7 == 0)) {
    return 0;
  }
  *in_stack_00001988 = in_stack_00000878 * *in_stack_00001988;
  uVar4 = DAT_007015b8;
  uVar3 = DAT_007015b4;
  uVar2 = DAT_007015b0;
  if (iVar6 == 0) {
    FUN_005aad50();
    FUN_005aae00();
    in_stack_00001990[0xd] = uVar2;
    in_stack_00001990[0xe] = uVar3;
    in_stack_00001990[0xf] = uVar4;
    puVar8 = (undefined4 *)FUN_005aaad0();
    in_stack_00001990[0x10] = *puVar8;
    in_stack_00001990[0x11] = puVar8[1];
    in_stack_00001990[0x12] = puVar8[2];
  }
  else {
    in_stack_00001990[0xd] = in_stack_00000078;
    in_stack_00001990[0xe] = in_stack_0000007c;
    in_stack_00001990[0xf] = in_stack_00000080;
    in_stack_00001990[0x10] = in_stack_00000378;
    in_stack_00001990[0x11] = in_stack_0000037c;
    in_stack_00001990[0x12] = in_stack_00000380;
  }
  in_stack_00001990[0x19] = in_stack_00000778;
  in_stack_00001990[0x1d] = in_stack_00000678;
  if (in_stack_00000b7c == -1) {
    puVar8 = (undefined4 *)&stack0x00000d7c;
    for (iVar10 = 0xc; in_stack_00001990 = in_stack_00001990 + 1, iVar10 != 0; iVar10 = iVar10 + -1)
    {
      *in_stack_00001990 = *puVar8;
      puVar8 = puVar8 + 1;
    }
  }
  uVar9 = 0;
  *in_stack_0000198c = 0;
  if (*(int *)(in_stack_00001980 + 0xe04) == 0) {
    uVar1 = *(uint *)(in_stack_00001980 + 0xf38 + in_stack_00000c7c * 4);
    if ((uVar1 & 1) != 0) {
      uVar9 = 0x4000000;
    }
    if ((uVar1 & 2) != 0) {
      uVar9 = uVar9 | 0x2000000;
    }
  }
  if (in_stack_00000b7c == -1) {
    uVar9 = uVar9 | 0x8000000;
  }
  if (iVar5 != 0) {
    uVar9 = uVar9 | 3;
  }
  if (iVar6 != 0) {
    uVar9 = uVar9 | 8;
  }
  if (iVar7 != 0) {
    uVar9 = uVar9 | 4;
  }
  return uVar9;
}

