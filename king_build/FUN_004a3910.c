
int * __thiscall
FUN_004a3910(int param_1,int *param_2,int *param_3,undefined4 param_4,uint param_5,int *param_6,
            int *param_7)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  piVar6 = param_7;
  puStack_8 = &LAB_00642c57;
  local_c = ExceptionList;
  iVar5 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  *param_7 = -1;
  if (*(int *)(param_1 + 0x90) == 0) {
    piStack_28 = piVar6;
    if (0 < *(int *)(param_1 + 0x14)) {
      piVar6 = (int *)(param_1 + 0x24);
      do {
        if (*piVar6 == 0) {
          piStack_28 = (int *)0x1;
          piStack_2c = (int *)0x0;
          uStack_30 = 0x4a39de;
          FUN_004a5470();
        }
        if ((piVar6[2] & 0x10000U) != 0) {
          piStack_28 = (int *)0x1;
          piStack_2c = (int *)0x4;
          uStack_30 = 0x4a39f3;
          FUN_004a5470();
        }
        pcVar1 = *(char **)(*piVar6 + 0xc);
        if (param_3 == (int *)0x0) {
          piStack_28 = (int *)0x1;
          piStack_2c = (int *)0x0;
          uStack_30 = 0x4a3a0c;
          FUN_004a5470();
        }
        if ((param_5 & 0x10000) != 0) {
          piStack_28 = (int *)0x1;
          piStack_2c = (int *)0x4;
          uStack_30 = 0x4a3a22;
          FUN_004a5470();
        }
        piStack_28 = (int *)(int)*(char *)param_3[3];
        piStack_2c = (int *)0x4a3a35;
        iVar3 = FUN_0061de0c();
        piStack_2c = (int *)(int)*pcVar1;
        uStack_30 = 0x4a3a44;
        iVar4 = FUN_0061de0c();
        if (iVar4 == iVar3) {
          if (param_3 == (int *)0x0) {
            piStack_28 = (int *)0x1;
            piStack_2c = (int *)0x0;
            uStack_30 = 0x4a3a60;
            FUN_004a5470();
          }
          if ((param_5 & 0x10000) != 0) {
            piStack_28 = (int *)0x1;
            piStack_2c = (int *)0x4;
            uStack_30 = 0x4a3a76;
            FUN_004a5470();
          }
          iVar3 = param_3[3];
          if (*piVar6 == 0) {
            piStack_28 = (int *)0x1;
            piStack_2c = (int *)0x0;
            uStack_30 = 0x4a3a8f;
            FUN_004a5470();
          }
          if ((piVar6[2] & 0x10000U) != 0) {
            piStack_28 = (int *)0x1;
            piStack_2c = (int *)0x4;
            uStack_30 = 0x4a3aa4;
            FUN_004a5470();
          }
          piStack_28 = (int *)(iVar3 + 1);
          piStack_2c = (int *)(*(int *)(*piVar6 + 0xc) + 1);
          uStack_30 = 0x4a3ab5;
          iVar3 = FUN_0061d520();
          if (iVar3 == 0) {
            *param_7 = iVar5;
            uVar2 = *(uint *)(*(int *)(param_1 + 0x84) + 8 + iVar5 * 0xc);
            piVar6 = (int *)(*(int *)(param_1 + 0x84) + iVar5 * 0xc);
            if ((uVar2 & 0x10000) == 0) {
              param_2[1] = 0;
              iVar5 = *piVar6;
              if (iVar5 == 0) {
                *param_2 = 0;
                param_2[2] = 0;
              }
              else {
                *param_2 = iVar5;
                param_2[2] = piVar6[2];
                *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
              }
            }
            else {
              param_2[2] = uVar2;
              *param_2 = *piVar6;
              param_2[1] = piVar6[1];
            }
            goto LAB_004a3bc3;
          }
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 3;
        piStack_28 = param_7;
      } while (iVar5 < *(int *)(param_1 + 0x14));
    }
  }
  else {
    piStack_28 = (int *)&param_3;
    piStack_2c = (int *)&param_7;
    uStack_30 = 0x4a395f;
    FUN_004a5130();
    piStack_28 = piVar6;
    if (param_7 != (int *)**(undefined4 **)(param_1 + 0x90)) {
      *piVar6 = param_7[10];
      if ((param_7[9] & 0x10000U) == 0) {
        param_2[1] = 0;
        if (param_7[7] == 0) {
          *param_2 = 0;
          param_2[2] = 0;
        }
        else {
          *param_2 = param_7[7];
          param_2[2] = param_7[9];
          *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + 1;
        }
      }
      else {
        param_2[2] = param_7[9];
        *param_2 = param_7[7];
        param_2[1] = param_7[8];
      }
LAB_004a3bc3:
      local_4 = local_4 & 0xffffff00;
      piStack_28 = (int *)0x4a3bd1;
      FUN_00492340();
      ExceptionList = local_c;
      return param_2;
    }
  }
  if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x94) == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    local_4 = local_4 & 0xffffff00;
    if ((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
       ((param_3[1] = param_3[1] + -1, param_3[1] == 0 && (param_3 != (int *)0x0)))) {
      piStack_28 = (int *)0x1;
      piStack_2c = (int *)0x4a3c1a;
      (**(code **)(*param_3 + 0xc))();
    }
  }
  else {
    piStack_2c = param_6;
    param_7 = (int *)auStack_38;
    *param_6 = *param_6 + 1;
    FUN_00455dc0(&param_3);
    local_4._0_1_ = 1;
    piVar6 = param_2;
    FUN_004a5250(0,(int *)(param_1 + 0x94),param_2);
    FUN_004a3910(piVar6);
    local_4 = (uint)local_4._1_3_ << 8;
    if (((param_5 & 0x10000) == 0) &&
       (((param_3 != (int *)0x0 && (param_3[1] = param_3[1] + -1, param_3[1] == 0)) &&
        (param_3 != (int *)0x0)))) {
      piStack_28 = (int *)0x1;
      piStack_2c = (int *)0x4a3b64;
      (**(code **)(*param_3 + 0xc))();
    }
  }
  ExceptionList = local_c;
  return param_2;
}

