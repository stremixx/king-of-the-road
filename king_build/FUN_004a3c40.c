
void __thiscall
FUN_004a3c40(int param_1,int param_2,undefined4 param_3,uint param_4,int *param_5,int param_6,
            uint param_7,int *param_8)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  piVar7 = param_8;
  puStack_8 = &LAB_00642c90;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  *param_8 = -1;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      piVar7 = (int *)(param_1 + 0x24);
      do {
        if (*piVar7 == 0) {
          FUN_004a5470();
        }
        if ((piVar7[2] & 0x10000U) != 0) {
          FUN_004a5470();
        }
        if (param_2 == 0) {
          FUN_004a5470();
        }
        if ((param_4 & 0x10000) != 0) {
          FUN_004a5470();
        }
        iVar4 = FUN_0061de0c();
        iVar5 = FUN_0061de0c();
        if (iVar5 == iVar4) {
          if (param_2 == 0) {
            FUN_004a5470();
          }
          if ((param_4 & 0x10000) != 0) {
            FUN_004a5470();
          }
          if (*piVar7 == 0) {
            FUN_004a5470();
          }
          if ((piVar7[2] & 0x10000U) != 0) {
            FUN_004a5470();
          }
          iVar4 = FUN_0061d520();
          if (iVar4 == 0) {
            *param_8 = iVar6;
            FUN_0040c060();
            goto LAB_004a3f64;
          }
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 3;
      } while (iVar6 < *(int *)(param_1 + 0x14));
    }
  }
  else {
    FUN_004a5130();
    piVar2 = param_8;
    if (param_8 != (int *)**(undefined4 **)(param_1 + 0x90)) {
      piVar1 = param_8 + 7;
      *piVar7 = param_8[10];
      iVar6 = *piVar1;
      if ((((iVar6 != 0) && ((param_8[9] & 0x10000U) == 0)) &&
          (*(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1, *(int *)(*piVar1 + 4) == 0)) &&
         ((cVar3 = FUN_00408fd0(), cVar3 == '\0' && ((int *)*piVar1 != (int *)0x0)))) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      if ((param_7 & 0x10000) == 0) {
        piVar2[8] = 0;
        if (param_5 == (int *)0x0) {
          *piVar1 = 0;
          piVar2[9] = 0;
        }
        else {
          *piVar1 = (int)param_5;
          piVar2[9] = param_7;
          param_5[1] = param_5[1] + 1;
        }
      }
      else {
        piVar2[9] = param_7;
        *piVar1 = (int)param_5;
        piVar2[8] = param_6;
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0x84) + param_8[10] * 0xc);
      piVar7 = (int *)(*(int *)(param_1 + 0x84) + param_8[10] * 0xc);
      if (((iVar6 != 0) && ((piVar7[2] & 0x10000U) == 0)) &&
         ((*(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1, *(int *)(*piVar7 + 4) == 0 &&
          ((cVar3 = FUN_00408fd0(), cVar3 == '\0' && ((int *)*piVar7 != (int *)0x0)))))) {
        (**(code **)(*(int *)*piVar7 + 0xc))();
      }
      if ((param_7 & 0x10000) == 0) {
        piVar7[1] = 0;
        if (param_5 == (int *)0x0) {
          *piVar7 = 0;
          piVar7[2] = 0;
        }
        else {
          *piVar7 = (int)param_5;
          piVar7[2] = param_7;
          param_5[1] = param_5[1] + 1;
        }
      }
      else {
        piVar7[2] = param_7;
        *piVar7 = (int)param_5;
        piVar7[1] = param_6;
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00492340();
      local_4 = 0xffffffff;
      if ((param_7 & 0x10000) != 0) {
        ExceptionList = local_c;
        return;
      }
      if (param_5 == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
      param_5[1] = param_5[1] + -1;
      if (param_5[1] != 0) {
        ExceptionList = local_c;
        return;
      }
      if (param_5 == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
      (**(code **)(*param_5 + 0xc))();
      ExceptionList = local_c;
      return;
    }
  }
  if ((*(int *)(param_1 + 0x9c) != 0) || (*(int *)(param_1 + 0x94) != 0)) {
    FUN_00455dc0();
    FUN_00455dc0(&param_2);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004a5250(0,(int *)(param_1 + 0x94));
    FUN_004a3c40();
  }
LAB_004a3f64:
  local_4 = local_4 & 0xffffff00;
  FUN_00492340();
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = local_c;
  return;
}

