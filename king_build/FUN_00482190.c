
/* WARNING: Removing unreachable block (ram,0x004822f2) */
/* WARNING: Removing unreachable block (ram,0x00482304) */
/* WARNING: Removing unreachable block (ram,0x004822f9) */

void FUN_00482190(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  byte *local_30;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar5 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640280;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490cf0(param_1,&local_10,&local_18,&local_14);
  if (local_10 == DAT_0066ee50) {
    iVar8 = *(int *)*piVar5;
    local_4 = 1;
    *piVar5 = (int)((int *)*piVar5 + 1);
    FUN_004471c0(0,0);
    FUN_0047abc0(iVar8);
    piVar3 = DAT_0068be9c;
    for (; DAT_0068be9c = piVar3, iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar4 = (uint)param_1 >> 8;
      param_1 = (int *)CONCAT31((int3)uVar4,*(undefined1 *)*piVar5);
      *piVar5 = (int)((undefined1 *)*piVar5 + 1);
      FUN_0047ac10(&param_1);
      piVar3 = DAT_0068be9c;
    }
    local_30 = (byte *)0x0;
    for (piVar7 = DAT_0068be98; piVar7 != piVar3; piVar7 = piVar7 + 1) {
      iVar8 = FUN_00410cf0();
      if (iVar8 != 0) {
        pbVar6 = (byte *)FUN_00410cf0();
        pbVar9 = local_30;
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0048228c:
            iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00482291;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0048228c;
          pbVar6 = pbVar6 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_00482291:
        if (iVar8 == 0) break;
      }
    }
    if (piVar7 == DAT_0068be9c) {
      FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                   s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x1a2,s_Can_not_find_road_0066ee58,0,
                   &DAT_0068c120);
    }
    uVar2 = *(undefined4 *)*piVar5;
    *piVar5 = (int)((undefined4 *)*piVar5 + 1);
    *(undefined4 *)(*piVar7 + 0x10) = uVar2;
  }
  local_4 = 0xffffffff;
  FUN_00490d20(piVar5,local_18,local_14);
  ExceptionList = local_c;
  return;
}

