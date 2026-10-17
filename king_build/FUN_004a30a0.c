
undefined4 * __thiscall FUN_004a30a0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00642b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_0064aec0;
  iVar6 = *(int *)(param_2 + 0x10);
  param_1[3] = iVar6;
  param_1[4] = param_2 + 4;
  *(undefined4 **)(iVar6 + 0x10) = param_1;
  *(undefined4 **)(param_1[4] + 0xc) = param_1;
  param_1[5] = *(undefined4 *)(param_3 + 0x14);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 1;
  uStack_3 = 0;
  FUN_0061d173(param_1 + 9,0xc,8,FUN_004042a0,FUN_00492340);
  piVar2 = param_1 + 0x21;
  iVar6 = (*(int *)(param_3 + 0x88) - *(int *)(param_3 + 0x84)) / 0xc;
  local_4 = 2;
  iVar4 = 0;
  *piVar2 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (iVar6 != 0) {
    iVar4 = FUN_0044b6e0(iVar6 * 0xc);
  }
  *piVar2 = iVar4;
  param_1[0x22] = iVar4;
  param_1[0x23] = iVar4 + iVar6 * 0xc;
  local_4 = 3;
  uVar5 = FUN_004a2e60(*(undefined4 *)(param_3 + 0x84),*(undefined4 *)(param_3 + 0x88),iVar4,piVar2)
  ;
  param_1[0x22] = uVar5;
  param_1[0x24] = 0;
  if ((*(uint *)(param_3 + 0x9c) & 0x10000) == 0) {
    param_1[0x26] = 0;
    iVar6 = *(int *)(param_3 + 0x94);
    if (iVar6 == 0) {
      param_1[0x25] = 0;
      param_1[0x27] = 0;
    }
    else {
      param_1[0x25] = iVar6;
      param_1[0x27] = *(undefined4 *)(param_3 + 0x9c);
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
    }
  }
  else {
    param_1[0x27] = *(uint *)(param_3 + 0x9c);
    param_1[0x25] = *(undefined4 *)(param_3 + 0x94);
    param_1[0x26] = *(undefined4 *)(param_3 + 0x98);
  }
  *param_1 = &PTR_LAB_0064af3c;
  local_4 = 5;
  uVar3 = local_4;
  local_4 = 5;
  if (*(int *)(param_3 + 0x90) == 0) {
    param_2 = 0;
    if (0 < (int)param_1[5]) {
      puVar7 = (uint *)(param_3 + 0x24);
      puVar8 = param_1 + 0xb;
      param_3 = param_3 - (int)param_1;
      local_4 = uVar3;
      do {
        uVar1 = puVar8[-2];
        if ((uVar1 != 0) && ((*puVar8 & 0x10000) == 0)) {
          *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + -1;
          piVar2 = (int *)puVar8[-2];
          if (((piVar2[1] == 0) &&
              (((piVar2 != (int *)*puVar7 || (*puVar8 != *(uint *)(param_3 + (int)puVar8))) ||
               (puVar8[-1] != *(uint *)((int)puVar8 + param_3 + -4))))) && (piVar2 != (int *)0x0)) {
            (**(code **)(*piVar2 + 0xc))(1);
          }
        }
        if ((*(uint *)(param_3 + (int)puVar8) & 0x10000) == 0) {
          puVar8[-1] = 0;
          if (*puVar7 == 0) {
            puVar8[-2] = 0;
            *puVar8 = 0;
          }
          else {
            puVar8[-2] = *puVar7;
            *puVar8 = *(uint *)(param_3 + (int)puVar8);
            *(int *)(puVar8[-2] + 4) = *(int *)(puVar8[-2] + 4) + 1;
          }
        }
        else {
          *puVar8 = *(uint *)(param_3 + (int)puVar8);
          puVar8[-2] = *puVar7;
          puVar8[-1] = *(uint *)((int)puVar8 + param_3 + -4);
        }
        param_2 = param_2 + 1;
        puVar7 = puVar7 + 3;
        puVar8 = puVar8 + 3;
      } while (param_2 < (int)param_1[5]);
    }
  }
  else {
    iVar6 = FUN_00631d33(0xc);
    _local_4 = CONCAT31(uStack_3,6);
    if (iVar6 == 0) {
      param_1[0x24] = 0;
    }
    else {
      FUN_004a49f0(*(undefined4 *)(param_3 + 0x90));
      param_1[0x24] = iVar6;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

