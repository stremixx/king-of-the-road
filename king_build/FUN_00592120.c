
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00592120(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int in_stack_00000b30;
  undefined4 *in_stack_0000193c;
  float *in_stack_00001940;
  
  FUN_0061d4f0();
  FUN_0057d570();
  FUN_00587370();
  iVar3 = FUN_00589590();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar4 = 0;
  fVar1 = _DAT_0064b254;
  if (0 < in_stack_00000b30) {
    pfVar5 = (float *)&stack0x00000a30;
    do {
      if ((pfVar5[0x41] != 0.0) && (fVar1 < *pfVar5)) {
        fVar1 = *pfVar5;
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < in_stack_00000b30);
  }
  iVar4 = iVar3 * 0xc;
  in_stack_0000193c[0xd] = *(undefined4 *)(&stack0x00000030 + iVar4);
  in_stack_0000193c[0xe] = *(undefined4 *)(&stack0x00000034 + iVar4);
  in_stack_0000193c[0xf] = *(undefined4 *)(&stack0x00000038 + iVar4);
  in_stack_0000193c[0x10] = *(undefined4 *)(&stack0x00000330 + iVar4);
  uVar2 = *(undefined4 *)(&stack0x00000338 + iVar4);
  in_stack_0000193c[0x11] = *(undefined4 *)(&stack0x00000334 + iVar4);
  in_stack_0000193c[0x12] = uVar2;
  in_stack_0000193c[0x1d] = *(undefined4 *)(&stack0x00000630 + iVar3 * 4);
  in_stack_0000193c[0x19] = *(undefined4 *)(&stack0x00000730 + iVar3 * 4);
  if (*(int *)(&stack0x00000b34 + iVar3 * 4) == -1) {
    puVar6 = (undefined4 *)(&stack0x00000d34 + iVar3 * 0x30);
    for (iVar4 = 0xc; in_stack_0000193c = in_stack_0000193c + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *in_stack_0000193c = *puVar6;
      puVar6 = puVar6 + 1;
    }
  }
  *in_stack_00001940 = fVar1;
  return 1;
}

