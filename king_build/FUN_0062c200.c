
void FUN_0062c200(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  
  DAT_0077a3a4 = 0;
  iVar6 = 4;
  do {
    if (DAT_007355e4 < DAT_007355e0) {
      uVar2 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar2 = FUN_0062afd0(0);
    }
    DAT_0077a3a4 = DAT_0077a3a4 << 8 | uVar2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (DAT_007355e4 < DAT_007355e0) {
    DAT_0077a3a0 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
    DAT_007355e4 = DAT_007355e4 + 1;
  }
  else {
    DAT_0077a3a0 = FUN_0062afd0(0);
  }
  if (0x19 < (int)DAT_0077a3a0) {
    FUN_0062b1c0(s_invalid_compressed_data____Huffm_00689138);
  }
  iVar7 = 1;
  iVar6 = 0;
  uVar4 = DAT_0077a3a0;
  uVar2 = DAT_007355e4;
  if (0 < (int)DAT_0077a3a0) {
    puVar8 = &DAT_0077a1d0;
    do {
      if (uVar2 < DAT_007355e0) {
        uVar3 = (uint)(byte)(&DAT_0072d594)[uVar2];
        DAT_007355e4 = uVar2 + 1;
      }
      else {
        uVar3 = FUN_0062afd0(0);
        uVar4 = DAT_0077a3a0;
      }
      uVar2 = DAT_007355e4;
      iVar6 = iVar6 + uVar3;
      *puVar8 = uVar3;
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar7 <= (int)uVar4);
    if (0x100 < iVar6) {
      FUN_0062b1c0(s_too_many_leaves_in_Huffman_tree_00689118);
      uVar4 = DAT_0077a3a0;
      uVar2 = DAT_007355e4;
    }
  }
  iVar6 = 1;
  *(int *)(&DAT_0077a1cc + uVar4 * 4) = *(int *)(&DAT_0077a1cc + uVar4 * 4) + 1;
  iVar7 = 0;
  if ((int)uVar4 < 1) {
    *(int *)(&DAT_0077a1cc + uVar4 * 4) = *(int *)(&DAT_0077a1cc + uVar4 * 4) + 1;
    return;
  }
  iVar9 = 0;
  do {
    iVar5 = *(int *)((int)&DAT_0077a1d0 + iVar9);
    *(int *)((int)&DAT_0077a3ac + iVar9) = iVar7;
    if (0 < iVar5) {
      do {
        if (uVar2 < DAT_007355e0) {
          uVar1 = (&DAT_0072d594)[uVar2];
          DAT_007355e4 = uVar2 + 1;
        }
        else {
          uVar1 = FUN_0062afd0(0);
          uVar4 = DAT_0077a3a0;
        }
        uVar2 = DAT_007355e4;
        (&DAT_0077a234)[iVar7] = uVar1;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar6 = iVar6 + 1;
    iVar9 = iVar9 + 4;
  } while (iVar6 <= (int)uVar4);
  *(int *)(&DAT_0077a1cc + uVar4 * 4) = *(int *)(&DAT_0077a1cc + uVar4 * 4) + 1;
  return;
}

