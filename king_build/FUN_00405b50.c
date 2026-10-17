
void FUN_00405b50(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  undefined1 local_4e;
  undefined1 local_4d;
  int local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b0ee;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    ExceptionList = &local_c;
    if ((DAT_0068c048 & 0x3f) == 0) {
      ExceptionList = &local_c;
      FUN_004012c0(0x74);
    }
    DAT_0068c048 = DAT_0068c048 + 1;
    local_44 = param_1[8];
    piVar9 = (int *)param_1[9];
    *param_1 = *param_1 | 1;
    if (piVar9 != (int *)param_1[10]) {
      do {
        local_48 = piVar9;
        if ((*(byte *)(*piVar9 + 8) & 1) == 0) {
          iVar4 = FUN_00631d33(0xb8);
          local_4 = 0;
          local_40 = iVar4;
          if (iVar4 == 0) {
            local_4c = 0;
          }
          else {
            FUN_00478a20(&local_4e);
            *(undefined4 *)(iVar4 + 0x18) = 0;
            *(undefined4 *)(iVar4 + 0x20) = 0;
            *(undefined4 *)(iVar4 + 0x28) = 0;
            local_4._0_1_ = 1;
            *(undefined4 *)(iVar4 + 0x10) = 0;
            *(undefined4 *)(iVar4 + 0x1c) = 0;
            *(undefined4 *)(iVar4 + 0x24) = 0;
            *(undefined4 *)(iVar4 + 0x2c) = 0;
            puVar5 = (undefined4 *)(iVar4 + 0x30);
            iVar7 = 4;
            do {
              *puVar5 = 0;
              puVar5[1] = 0;
              *(undefined1 *)(puVar5 + 2) = 0;
              puVar5 = puVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            FUN_00478a20(&local_4d);
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_004011e0(iVar4 + 0x88,0x18,2,FUN_00405e90);
            uVar6 = FUN_00405ea0(0xffffffff,0x7fefffff,0xffffffff,0x7fefffff,0xffffffff,0x7fefffff);
            FUN_00405ed0(uVar6);
            uVar6 = FUN_00405ea0(0xffffffff,0xffefffff,0xffffffff,0xffefffff,0xffffffff,0xffefffff);
            FUN_00405ed0(uVar6);
            local_4c = iVar4;
          }
          local_4 = 0xffffffff;
          *(uint *)(local_4c + 0x70) = local_44;
          puVar8 = param_1;
          while( true ) {
            if ((*(byte *)(*piVar9 + 8) & 1) != 0) {
              FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                           s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x585,
                           s_Internal_error_0066b910,&DAT_0068c120,&DAT_0068c120);
            }
            *(uint *)(*piVar9 + 8) = *(uint *)(*piVar9 + 8) | 1;
            puVar1 = (uint *)piVar9[1];
            if (puVar1 == puVar8) {
              puVar8 = (uint *)piVar9[2];
            }
            else if ((uint *)piVar9[2] == puVar8) {
              (**(code **)(*(int *)*piVar9 + 0x1c))();
              puVar8 = puVar1;
            }
            else {
              FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                           s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x592,
                           s_Internal_error_0066b910,&DAT_0068c120,&DAT_0068c120);
            }
            piVar2 = *(int **)(local_4c + 0x7c);
            if (piVar2 == *(int **)(local_4c + 0x80)) {
              FUN_0044fe30(piVar2,piVar9);
            }
            else {
              if (piVar2 != (int *)0x0) {
                *piVar2 = *piVar9;
              }
              *(int *)(local_4c + 0x7c) = *(int *)(local_4c + 0x7c) + 4;
            }
            uVar3 = puVar8[8];
            if (uVar3 != 0) break;
            piVar2 = (int *)puVar8[9];
            if (*piVar9 == *piVar2) {
              piVar9 = piVar2 + 3;
            }
            else {
              piVar9 = piVar2;
              if (*piVar2 == piVar2[3]) {
                FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                             s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x5a6,
                             s_Internal_error_0066b910,&DAT_0068c120,&DAT_0068c120);
              }
            }
          }
          *(uint *)(local_4c + 0x74) = uVar3;
          FUN_00405b50(puVar8);
          if (DAT_0068be9c == DAT_0068bea0) {
            FUN_0044ce50(DAT_0068be9c,&local_4c);
          }
          else {
            if (DAT_0068be9c != (int *)0x0) {
              *DAT_0068be9c = local_4c;
            }
            DAT_0068be9c = DAT_0068be9c + 1;
          }
          piVar9 = *(int **)(local_44 + 0x18);
          if (piVar9 == *(int **)(local_44 + 0x1c)) {
            FUN_0044ce50(piVar9,&local_4c);
          }
          else {
            if (piVar9 != (int *)0x0) {
              *piVar9 = local_4c;
            }
            *(int *)(local_44 + 0x18) = *(int *)(local_44 + 0x18) + 4;
          }
          piVar9 = *(int **)(uVar3 + 0x24);
          if (piVar9 == *(int **)(uVar3 + 0x28)) {
            FUN_0044ce50(piVar9,&local_4c);
          }
          else {
            if (piVar9 != (int *)0x0) {
              *piVar9 = local_4c;
            }
            *(int *)(uVar3 + 0x24) = *(int *)(uVar3 + 0x24) + 4;
          }
        }
        piVar9 = local_48 + 3;
      } while (piVar9 != (int *)param_1[10]);
    }
  }
  ExceptionList = local_c;
  return;
}

