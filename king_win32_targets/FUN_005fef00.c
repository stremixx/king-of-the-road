
/* WARNING: Removing unreachable block (ram,0x005ff026) */
/* WARNING: Removing unreachable block (ram,0x005ff02a) */
/* WARNING: Removing unreachable block (ram,0x005ff033) */
/* WARNING: Removing unreachable block (ram,0x005fefd9) */
/* WARNING: Removing unreachable block (ram,0x005fefe5) */
/* WARNING: Removing unreachable block (ram,0x005fefe7) */
/* WARNING: Removing unreachable block (ram,0x005feff4) */

undefined4 FUN_005fef00(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint in_stack_000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  LPCSTR in_stack_000020ec;
  
  FUN_0061d4f0();
  DVar2 = timeGetTime();
  uVar4 = DVar2 ^ 0x9a4ec86;
  puVar8 = (undefined4 *)register0x00000010;
  for (iVar3 = 0x37; puVar8 = puVar8 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
  }
  in_stack_000000dc = uVar4;
  uVar6 = 0;
  iVar3 = 1;
  do {
    iVar5 = uVar4 - iVar3;
    uVar4 = uVar6 % 0x37;
    uVar6 = uVar6 + 0x15;
    *(int *)(&stack0x00000004 + uVar4 * 4) = iVar3;
    uVar4 = *(uint *)(&stack0x00000004 + uVar4 * 4);
    iVar3 = iVar5;
  } while (uVar6 < 0x46e);
  iVar3 = 4;
  do {
    uVar4 = 0;
    piVar7 = (int *)register0x00000010;
    do {
      piVar7 = piVar7 + 1;
      uVar6 = uVar4 + 0x1f;
      uVar4 = uVar4 + 1;
      *piVar7 = *piVar7 - *(int *)(&stack0x00000004 + (uVar6 % 0x37) * 4);
    } while (uVar4 < 0x37);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  in_stack_000000e0 = 0;
  in_stack_000000e4 = 0x1f;
  puVar9 = &DAT_00722ab8;
  puVar8 = (undefined4 *)register0x00000010;
  for (iVar3 = 0x39; puVar8 = puVar8 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar8;
    puVar9 = puVar9 + 1;
  }
  GetFullPathNameA(in_stack_000020ec,0x2000,&stack0x000000e8,(LPSTR *)&stack0x00000000);
  DAT_00722c9c = DAT_00722c98;
  uVar4 = 0xffffffff;
  pcVar10 = &stack0x000000e8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_0044c1c0(DAT_00722c98,&stack0x000000e8,(int)&stack0x000000e4 + ~uVar4 + 3);
  FUN_005fec50(s___wav_00682bc8);
  FUN_005fec50(s___mid_00682bc0);
  FUN_005fec50(s___mp3_00682bb8);
  return 0;
}

