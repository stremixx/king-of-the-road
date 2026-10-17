
void __thiscall FUN_004c43b0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int local_c0;
  int local_b8 [8];
  int local_98;
  undefined4 local_94 [12];
  int local_64;
  undefined4 local_60;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = iVar1 + 0x40;
  if (param_3 != 0) {
    local_c0 = param_3;
    piVar8 = param_2 + 0x19;
    do {
      piVar4 = (int *)*piVar8;
      if (((piVar4 != (int *)0x0) && (*piVar4 == 1)) &&
         ((iVar2 = piVar4[1], iVar2 == 1 ||
          ((((iVar2 == 5 || (iVar2 == 8)) || (iVar2 == 9)) || (iVar2 == 10)))))) {
        uVar9 = *(uint *)(iVar1 + 0x44);
        if (0x32 < uVar9) {
          uVar9 = 0x32;
        }
        uVar7 = 0;
        if (uVar9 != 0) {
          piVar4 = (int *)(iVar1 + 100);
          do {
            if ((piVar4[1] == piVar8[2]) && (*piVar4 == piVar8[3])) break;
            uVar7 = uVar7 + 1;
            piVar4 = piVar4 + 0x17;
          } while (uVar7 < uVar9);
        }
        if (uVar9 == uVar7) {
          local_b8[0] = 0;
          uVar9 = *(uint *)(iVar1 + 0x44) % 0x32;
          local_b8[1] = 0;
          local_b8[2] = 0;
          local_b8[3] = 0;
          local_b8[4] = 0;
          local_b8[5] = 0;
          FUN_004bd520();
          if (param_2 == (undefined4 *)0x0) {
            FUN_004bd5b0();
          }
          else {
            local_b8[0] = param_2[0xd];
            local_b8[1] = param_2[0xe];
            local_b8[3] = param_2[0x10];
            piVar4 = (int *)param_2[0x1b];
            local_b8[2] = param_2[0xf];
            local_b8[4] = param_2[0x11];
            local_b8[5] = param_2[0x12];
            if ((piVar4 == (int *)0x0) ||
               (((local_b8[6] = *piVar4, local_b8[6] != 5 && (local_b8[6] != 8)) &&
                (local_b8[6] != 6)))) {
              local_64 = param_2[0x1a];
              local_b8[6] = 0;
              if (local_64 != 0) {
                local_60 = *(undefined4 *)(local_64 + 0x24);
              }
            }
            else {
              iVar2 = param_2[0x1a];
              local_98 = piVar4[2];
              local_b8[7] = param_2[0x1c];
              puVar11 = local_94;
              puVar10 = param_2;
              for (iVar5 = 0xc; puVar10 = puVar10 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar11 = *puVar10;
                puVar11 = puVar11 + 1;
              }
              local_64 = iVar2;
              if (iVar2 != 0) {
                local_60 = *(undefined4 *)(iVar2 + 0x24);
              }
            }
          }
          iVar5 = iVar3 + uVar9 * 0x5c;
          iVar2 = uVar9 + 1;
          piVar4 = local_b8;
          piVar12 = (int *)(iVar5 + 8);
          for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar12 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar12 = piVar12 + 1;
          }
          if (*(int *)(iVar3 + iVar2 * 0x5c) == 0) {
            iVar6 = 0;
            if (*(int *)(DAT_00695184 + 0x1e8) != 0) {
              iVar6 = *(int *)(*(int *)(DAT_00695184 + 0x1e8) + 0x4c);
            }
            *(int *)(iVar3 + iVar2 * 0x5c) = iVar6;
            *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar6 + 0x24);
          }
          *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
        }
      }
      piVar8 = piVar8 + 0x34;
      local_c0 = local_c0 + -1;
    } while (local_c0 != 0);
  }
  return;
}

