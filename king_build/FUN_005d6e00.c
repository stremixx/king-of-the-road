
int * FUN_005d6e00(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  undefined1 local_10c [20];
  int local_f8 [26];
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_7c;
  uint uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  iVar8 = DAT_0071f7f4;
  piVar9 = local_f8;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_90 = (-(uint)(DAT_0071f864 != 0) & 0xffffc7c0) + 0x4040;
  local_f8[0] = 0x7c;
  local_f8[1] = 7;
  local_f8[3] = DAT_0071f7fc;
  piVar9 = local_f8;
  local_f8[2] = ((uint)(param_1 % DAT_0071f7fc != 0) + param_1 / DAT_0071f7fc) * param_2;
  iVar1 = (**(code **)(*DAT_0071f86c + 0x18))(DAT_0071f86c,piVar9,local_10c,0);
  if (iVar1 == 0) {
    if (unaff_EBP != (int *)0x0) {
      iVar13 = 0;
      uStack_8c = 0x7c;
      uStack_88 = 0x7ff9ee;
      iVar1 = (**(code **)(*unaff_EBP + 100))(unaff_EBP,0,&uStack_8c,1);
      puVar11 = (undefined4 *)0x0;
      if (iVar1 == 0) {
        puVar11 = puStack_7c;
      }
      uVar3 = DAT_0071f7fc;
      if (puVar11 != (undefined4 *)0x0) {
        for (; param_2 != 0; param_2 = param_2 + -1) {
          uVar5 = 0;
          if (param_1 != 0) {
            puVar4 = puStack_18;
            puVar7 = puVar11;
            do {
              if (uVar3 + uVar5 < param_1) {
                puVar6 = puVar4;
                puVar10 = puVar7;
                for (uVar2 = uVar3 * iVar8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
                  *puVar10 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar10 = puVar10 + 1;
                }
                for (uVar3 = uVar3 * iVar8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                  *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
                uVar3 = DAT_0071f7fc * iVar13;
              }
              else {
                uVar3 = (param_1 - uVar5) * iVar8;
                puVar6 = puVar4;
                puVar10 = puVar7;
                for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
                  *puVar10 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar10 = puVar10 + 1;
                }
                for (uVar2 = uVar3 & 3; param_1 = uStack_20, uVar2 != 0; uVar2 = uVar2 - 1) {
                  *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
              }
              puVar4 = (undefined4 *)((int)puVar4 + uVar3);
              uVar5 = uVar5 + DAT_0071f7fc;
              puVar7 = (undefined4 *)((int)puVar7 + local_90 * iStack_1c);
              uVar3 = DAT_0071f7fc;
              iVar8 = iVar13;
            } while (uVar5 < param_1);
          }
          puStack_18 = (undefined4 *)((int)puStack_18 + iVar8 * param_1);
          puVar11 = (undefined4 *)((int)puVar11 + local_90);
        }
        (**(code **)(*piVar9 + 0x80))(piVar9,0);
      }
      return piVar9;
    }
  }
  else {
    if (iVar1 == -0x7789ff9c) {
      pcVar12 = s_inv_caps_006818f4;
    }
    else if (iVar1 == -0x7ff8ffa9) {
      pcVar12 = s_inv_par_006818ec;
    }
    else if (iVar1 == -0x7789ff6f) {
      pcVar12 = s_inv_pf_006818e4;
    }
    else {
      if (iVar1 != -0x7789ffa1) {
        return (int *)0x0;
      }
      pcVar12 = s_inc_pr_006818dc;
    }
    FUN_005d2250(pcVar12,0);
  }
  return (int *)0x0;
}

