
void __thiscall FUN_0044fa60(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_30;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e690;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if (uVar3 < param_2) {
    local_1c = param_2;
    ExceptionList = &local_10;
    local_24 = uVar3;
    puVar4 = (uint *)FUN_0044fd80(&DAT_0064a520,&DAT_0064a590,&local_1c);
    uVar8 = DAT_0064a58c;
    if (puVar4 != (uint *)&DAT_0064a590) {
      uVar8 = *puVar4;
    }
    if (uVar3 < uVar8) {
      local_20 = 0;
      local_18 = uVar8;
      FUN_0048a730(uVar8,(int)&param_2 + 3);
      local_8 = 0;
      uVar5 = FUN_00466b90(local_30,uVar8,&local_20,param_2);
      local_8 = 2;
      for (uVar8 = 0; piVar1 = *(int **)(param_1 + 4), uVar8 < uVar3; uVar8 = uVar8 + 1) {
        puVar9 = (undefined4 *)piVar1[uVar8];
        while (puVar9 != (undefined4 *)0x0) {
          uVar3 = FUN_0044fc70(puVar9 + 1);
          *(undefined4 *)(*(int *)(param_1 + 4) + uVar8 * 4) = *puVar9;
          *puVar9 = *(undefined4 *)(local_30 + (uVar3 % local_18) * 4);
          *(undefined4 **)(local_30 + (uVar3 % local_18) * 4) = puVar9;
          puVar9 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar8 * 4);
        }
        uVar3 = local_24;
      }
      *(int *)(param_1 + 4) = local_30;
      piVar2 = *(int **)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = uVar5;
      FUN_0046ce20(param_1 + 0xc,&local_28);
      for (piVar6 = piVar1; piVar6 != piVar2; piVar6 = piVar6 + 1) {
      }
      iVar7 = local_28 - (int)piVar1 >> 2;
      if (iVar7 != 0) {
        uVar3 = iVar7 * 4;
        if (uVar3 < 0x81) {
          FUN_00401aa0();
          *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
          DAT_0068c164 = 0;
          ExceptionList = local_10;
          return;
        }
        FUN_0061c888(piVar1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

