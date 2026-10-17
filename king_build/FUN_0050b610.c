
int FUN_0050b610(undefined4 param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  uint unaff_ESI;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iStack_9c;
  uint uStack_98;
  int iStack_94;
  undefined1 auStack_90 [12];
  uint uStack_84;
  undefined4 *puStack_80;
  undefined4 local_7c [4];
  undefined4 *puStack_6c;
  int *piStack_24;
  int *piStack_20;
  uint uStack_1c;
  int *piStack_10;
  
  iVar9 = 1;
  puVar3 = local_7c;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_7c[0] = 0x7c;
  local_7c[1] = 0x7ff9ee;
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      if ((param_3 & 0x10) != 0) {
        iVar9 = 4;
      }
    }
    else {
      iVar9 = 3;
    }
  }
  else {
    iVar9 = 2;
  }
  iVar4 = (**(code **)(*param_2 + 100))(param_2,0,local_7c,0x11,0);
  puVar3 = puStack_80;
  if (iVar4 == 0) {
    uVar13 = uStack_84;
    iVar2 = (**(code **)(*piStack_10 + 100))(piStack_10,0,auStack_90,0x21,0);
    iVar4 = unaff_EBP;
    if (iVar2 == 0) {
      iVar4 = 0;
      if (0 < iStack_9c) {
        iVar2 = (int)puVar3 * iVar9;
        iVar12 = 0;
        puVar3 = (undefined4 *)((uVar13 - 1) * (int)puVar3 + (int)puStack_6c);
        do {
          if ((int)uVar13 <= iVar12) break;
          puVar10 = puVar3;
          if ((uStack_1c & 1) == 0) {
            puVar10 = puStack_6c;
          }
          if ((uStack_1c & 0xfffffffe) == 0) {
            uVar6 = uStack_84;
            if ((int)uStack_98 < (int)uStack_84) {
              uVar6 = uStack_98;
            }
            puVar7 = puStack_80;
            for (uVar5 = (uVar6 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
          else {
            if ((uStack_1c & 2) != 0) {
              puVar10 = (undefined4 *)((int)puVar10 + uStack_84 * 2 + -2);
            }
            iVar8 = 0;
            if (0 < (int)uStack_98) {
              iVar11 = 0;
              puVar7 = puStack_80;
              do {
                uStack_84 = unaff_ESI;
                if ((int)unaff_ESI <= iVar11) break;
                *(undefined2 *)puVar7 = *(undefined2 *)puVar10;
                puVar7 = (undefined4 *)((int)puVar7 + 2);
                if ((uStack_1c & 2) == 0) {
                  iVar1 = iVar9 * 2;
                }
                else {
                  iVar1 = iVar9 * -2;
                }
                puVar10 = (undefined4 *)((int)puVar10 + iVar1);
                iVar8 = iVar8 + 1;
                iVar11 = iVar11 + iVar9;
              } while (iVar8 < (int)uStack_98);
            }
          }
          puVar3 = (undefined4 *)((int)puVar3 - iVar2);
          iVar12 = iVar12 + iVar9;
          puStack_6c = (undefined4 *)((int)puStack_6c + iVar2);
          iVar4 = iVar4 + 1;
          puStack_80 = (undefined4 *)((int)puStack_80 + iStack_94);
        } while (iVar4 < iStack_9c);
      }
      (**(code **)(*piStack_24 + 0x80))(piStack_24,0);
      iVar4 = iStack_9c;
    }
    (**(code **)(*piStack_20 + 0x80))(piStack_20,0);
  }
  return iVar4;
}

