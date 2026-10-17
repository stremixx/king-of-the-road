
/* WARNING: Removing unreachable block (ram,0x00482a3b) */
/* WARNING: Removing unreachable block (ram,0x00482a4d) */
/* WARNING: Removing unreachable block (ram,0x00482a42) */

void FUN_004828c0(int *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte *local_30;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640340;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490cf0(param_1,&local_10,&local_18,&local_14);
  if (local_10 == DAT_0066ee98) {
    iVar7 = *(int *)*piVar4;
    local_4 = 1;
    *piVar4 = (int)((int *)*piVar4 + 1);
    FUN_004471c0(0,0);
    FUN_0047abc0(iVar7);
    piVar2 = DAT_0068bb7c;
    for (; DAT_0068bb7c = piVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar3 = (uint)param_1 >> 8;
      param_1 = (int *)CONCAT31((int3)uVar3,*(undefined1 *)*piVar4);
      *piVar4 = (int)((undefined1 *)*piVar4 + 1);
      FUN_0047ac10(&param_1);
      piVar2 = DAT_0068bb7c;
    }
    local_30 = (byte *)0x0;
    for (piVar6 = DAT_0068bb78; piVar6 != piVar2; piVar6 = piVar6 + 1) {
      iVar7 = FUN_00410cf0();
      if (iVar7 != 0) {
        pbVar5 = (byte *)FUN_00410cf0();
        pbVar8 = local_30;
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_004829bc:
            iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_004829c1;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_004829bc;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_004829c1:
        if (iVar7 == 0) break;
      }
    }
    if (piVar6 == DAT_0068bb7c) {
      FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                   s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x1f7,
                   s_Can_not_find_obstacle_0066eea0,0,&DAT_0068c120);
    }
    *(undefined1 *)(*piVar6 + 0x1c) = *(undefined1 *)*piVar4;
    *piVar4 = *piVar4 + 1;
    if (*piVar6 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar6 + 0xc;
    }
    FUN_00483d00(iVar7);
  }
  local_4 = 0xffffffff;
  FUN_00490d20(piVar4,local_18,local_14);
  ExceptionList = local_c;
  return;
}

