
undefined4 FUN_004a1070(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int local_2c;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18 [2];
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006428c7;
  pvStack_c = ExceptionList;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 1;
  local_2c = (param_3[1] - *param_3) / 0xc + -1;
  ExceptionList = &pvStack_c;
  if (local_2c != 0) {
    iVar8 = local_2c * 0xc;
    ExceptionList = &pvStack_c;
    do {
      FUN_004a2a10(local_18,0,param_2);
      iVar2 = *param_3;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_18[0] == 0) {
        FUN_004a5470(0,1);
      }
      if ((local_10 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iVar6 = local_18[0];
      piVar1 = (int *)(local_18[0] + 0x14);
      iVar3 = *(int *)(local_18[0] + 0x14);
      if ((iVar3 != 0) && ((*(uint *)(local_18[0] + 0x1c) & 0x10000) == 0)) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        piVar4 = (int *)*piVar1;
        if ((piVar4[1] == 0) &&
           ((((piVar4 != *(int **)(iVar2 + iVar8) ||
              (*(int *)(local_18[0] + 0x1c) != *(int *)(iVar2 + 8 + iVar8))) ||
             (*(int *)(local_18[0] + 0x18) != *(int *)(iVar2 + 4 + iVar8))) &&
            (piVar4 != (int *)0x0)))) {
          (**(code **)(*piVar4 + 0xc))(1);
        }
      }
      uVar5 = *(uint *)(iVar2 + 8 + iVar8);
      if ((uVar5 & 0x10000) == 0) {
        *(undefined4 *)(iVar6 + 0x18) = 0;
        iVar3 = *(int *)(iVar2 + iVar8);
        if (iVar3 == 0) {
          *piVar1 = 0;
          *(undefined4 *)(iVar6 + 0x1c) = 0;
        }
        else {
          *piVar1 = iVar3;
          *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar2 + 8 + iVar8);
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        }
      }
      else {
        *(uint *)(iVar6 + 0x1c) = uVar5;
        *piVar1 = *(int *)(iVar2 + iVar8);
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar2 + 4 + iVar8);
      }
      if (local_18[0] == 0) {
        FUN_004a5470(0,1);
      }
      if ((local_10 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iVar3 = local_18[0];
      piVar1 = (int *)(local_18[0] + 0x20);
      iVar2 = *(int *)(local_18[0] + 0x20);
      if (((iVar2 != 0) && ((*(uint *)(local_18[0] + 0x28) & 0x10000) == 0)) &&
         ((*(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1, *(int *)(*piVar1 + 4) == 0 &&
          ((cVar7 = FUN_00408fd0(piVar1,&local_24), cVar7 == '\0' && ((int *)*piVar1 != (int *)0x0))
          )))) {
        (**(code **)(*(int *)*piVar1 + 0xc))(1);
      }
      if ((local_1c & 0x10000) == 0) {
        *(undefined4 *)(iVar3 + 0x24) = 0;
        if (local_24 == 0) {
          *piVar1 = 0;
          *(undefined4 *)(iVar3 + 0x28) = 0;
        }
        else {
          *piVar1 = local_24;
          *(uint *)(iVar3 + 0x28) = local_1c;
          *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + 1;
        }
      }
      else {
        *(uint *)(iVar3 + 0x28) = local_1c;
        *piVar1 = local_24;
        *(undefined4 *)(iVar3 + 0x24) = local_20;
      }
      FUN_0040c060(local_18);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00492340();
      iVar8 = iVar8 + -0xc;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  FUN_00455dc0(&local_24);
  local_4 = local_4 & 0xffffff00;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return param_1;
}

