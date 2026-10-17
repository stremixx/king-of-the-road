
undefined4 * __thiscall FUN_005ce830(undefined4 *param_1,int param_2,byte *param_3,int *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  bool bVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648433;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005d2890(100,s__particlesystemtask_0067e9a7 + 1);
  puVar1 = param_1 + 8;
  local_4 = 0;
  FUN_005f1020(&DAT_0068c120,5,1);
  *puVar1 = &PTR_FUN_0064b25c;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar7 = 4;
  puVar4 = param_1 + 0x1c;
  do {
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4 = puVar4 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = &DAT_00701550;
  puVar10 = param_1 + 0x1a;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  param_1[0x26] = 0;
  *param_1 = &PTR_FUN_00650e70;
  *puVar1 = &PTR_LAB_00650e24;
  if ((param_4 != (int *)0x0) || (param_4 = *(int **)(param_2 + 0x20c), param_4 != (int *)0x0)) {
    (**(code **)(*param_4 + 0x14))(0,-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1);
  }
  param_1[0x19] = param_2;
  FUN_005d2c20(param_1);
  iVar7 = *(int *)(param_2 + 0x1d4);
  iVar8 = 0;
  iVar3 = *(int *)(iVar7 + 0x48);
  if (0 < iVar3) {
    pbVar9 = *(byte **)(iVar7 + 0x4c);
    pbVar5 = param_3;
    pbVar11 = pbVar9;
LAB_005ce914:
    do {
      bVar2 = *pbVar5;
      bVar12 = bVar2 < *pbVar9;
      if (bVar2 == *pbVar9) {
        if (bVar2 != 0) {
          bVar2 = pbVar5[1];
          bVar12 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_005ce938;
          pbVar9 = pbVar9 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar2 != 0) goto LAB_005ce914;
        }
        iVar6 = 0;
      }
      else {
LAB_005ce938:
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) break;
      iVar8 = iVar8 + 1;
      pbVar9 = pbVar11 + 0x7c;
      pbVar5 = param_3;
      pbVar11 = pbVar9;
    } while (iVar8 < iVar3);
  }
  if (iVar8 < iVar3) {
    param_1[0x27] = *(int *)(iVar7 + 0x4c) + iVar8 * 0x7c;
  }
  else {
    param_1[0x27] = 0;
  }
  param_1[0x18] = 0;
  param_1[0x26] = DAT_0071f868;
  ExceptionList = pvStack_c;
  return param_1;
}

