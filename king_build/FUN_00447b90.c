
undefined1 * __fastcall FUN_00447b90(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined1 local_21;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063e19b;
  local_c = ExceptionList;
  piVar1 = (int *)(param_1 + 4);
  ExceptionList = &local_c;
  *param_1 = local_21;
  param_1[1] = local_21;
  param_1[2] = local_21;
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_1c = 100;
  local_10 = param_1;
  puVar4 = (uint *)FUN_0045a2e0(&DAT_0064a520,&DAT_0064a590,&local_1c,0);
  uVar7 = DAT_0064a58c;
  if (puVar4 != (uint *)&DAT_0064a590) {
    uVar7 = *puVar4;
  }
  iVar2 = *piVar1;
  if ((uint)(*(int *)(param_1 + 0xc) - iVar2 >> 2) < uVar7) {
    iVar3 = *(int *)(param_1 + 8);
    local_14 = FUN_0044ba30(uVar7,iVar2,iVar3);
    piVar8 = (int *)*piVar1;
    local_18 = *(int **)(param_1 + 8);
    if (piVar8 != local_18) {
      do {
        FUN_004030a0(piVar8);
        piVar8 = piVar8 + 1;
      } while (piVar8 != local_18);
    }
    piVar8 = (int *)*piVar1;
    iVar5 = *(int *)(param_1 + 0xc) - (int)piVar8 >> 2;
    if (iVar5 != 0) {
      uVar6 = iVar5 * 4;
      if (uVar6 < 0x81) {
        local_18 = (int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
        FUN_00401aa0();
        *piVar8 = *local_18;
        *local_18 = (int)piVar8;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(piVar8);
      }
    }
    *piVar1 = local_14;
    *(int *)(param_1 + 8) = local_14 + (iVar3 - iVar2 >> 2) * 4;
    *(uint *)(param_1 + 0xc) = local_14 + uVar7 * 4;
  }
  local_14 = 0;
  FUN_0044f610(*(undefined4 *)(param_1 + 8),uVar7,&local_14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return param_1;
}

