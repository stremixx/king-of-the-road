
undefined4 __thiscall FUN_005e4570(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648bab;
  local_c = ExceptionList;
  iVar7 = 0;
  if (param_2 != (byte *)0x0) {
    iVar4 = -1;
    pbVar5 = param_2;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    ExceptionList = &local_c;
    if (iVar4 == -4) goto LAB_005e45b4;
  }
  ExceptionList = &local_c;
  FUN_005d2520(s_Illegal_name_of_the_module_00682270,param_2);
LAB_005e45b4:
  if (param_2 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = *param_2;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      iVar7 = iVar7 + (uint)bVar1;
      pbVar6 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar6;
    }
    iVar4 = FUN_00631d33(0xfb4);
    local_4 = 0;
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_005e3d70(param_2);
    }
    iVar4 = *(int *)(param_1 + 0x640 + (iVar7 % 100) * 4);
    local_4 = 0xffffffff;
    if (iVar4 == 0) {
      *(undefined4 **)(param_1 + 0x640 + (iVar7 % 100) * 4) = puVar3;
    }
    else {
      while (iVar7 = iVar4, iVar7 != 0) {
        pbVar5 = *(byte **)(iVar7 + 0xfb0);
        pbVar6 = param_2;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_005e465d:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_005e4662;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_005e465d;
          pbVar6 = pbVar6 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_005e4662:
        if ((iVar4 == 0) || (iVar4 = *(int *)(iVar7 + 8), *(int *)(iVar7 + 8) == 0)) break;
      }
      pbVar5 = *(byte **)(iVar7 + 0xfb0);
      do {
        bVar1 = *param_2;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_005e469f:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005e46a4;
        }
        if (bVar1 == 0) break;
        bVar1 = param_2[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_005e469f;
        param_2 = param_2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_005e46a4:
      if (iVar4 == 0) {
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
      else {
        FUN_005d1840(iVar7);
      }
    }
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}

