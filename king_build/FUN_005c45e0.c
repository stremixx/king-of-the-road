
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c45e0(int *param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int *piVar5;
  float fStack_48;
  int iStack_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  double local_30;
  undefined1 local_28 [4];
  int iStack_24;
  int iStack_20;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022c0();
  local_4 = 0;
  FUN_006022a0();
  local_4._0_1_ = 1;
  local_34 = 0;
  fVar4 = (float10)thunk_FUN_00603580();
  local_30 = (double)fVar4;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_1[0x7c2] == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_006022b0();
    local_4 = 0xffffffff;
    FUN_00602560();
    ExceptionList = local_c;
    return;
  }
  if ((((*(int *)(DAT_00706ecc + 0x1a0) != 0) || (param_1[0x7c0] != 0)) &&
      (FUN_005c2ab0(), param_1[0x7c0] != 0)) && (param_1[0x7be] != 0)) {
    FUN_005aa830(0xfffffff0,param_1[0x7be]);
    FUN_005aa830(8,param_1[0x7be]);
    iVar3 = param_1[0x7c1];
    param_1[0x7c1] = iVar3 + 1;
    FUN_005aa830(iVar3 + 1,param_1[0x7be]);
    uVar2 = __ftol(param_1[0x7be]);
    FUN_005aa830(uVar2);
    FUN_005aa830(8,param_1[0x7be]);
  }
  iVar3 = param_1[0x7bc];
  while (0 < iVar3) {
    FUN_005c2d10(param_1[iVar3 + 0x3d3]);
    iVar3 = param_1[0x7bc];
    param_1[0x7bc] = iVar3 + -1;
    iVar3 = param_1[iVar3 + 0x3d3];
    if (iVar3 != 0) {
      FUN_00602560();
      FUN_00631d5c(iVar3);
    }
    iVar3 = param_1[0x7bc];
  }
  if (*(int *)(DAT_00706ecc + 0x1a0) != 0) {
    iVar3 = FUN_006006d0(&local_40);
    while (iVar3 == 0) {
      *(undefined4 *)(DAT_00706ecc + 0x198) = local_34;
      if (local_40 == 4) {
        FUN_00602850(local_3c,local_38);
        iVar3 = FUN_006029d0();
        while (iVar3 == 0) {
          (**(code **)(*param_1 + 0xdc))(local_28,0,0);
          iVar3 = FUN_006029e0();
        }
        if ((param_1[0x7c0] != 0) && (param_1[0x7be] != 0)) {
          FUN_005aa830(0xffffffff,param_1[0x7be]);
          FUN_005aa830(iStack_20 - iStack_24,param_1[0x7be]);
          FUN_0061d9d6(iStack_24,iStack_20 - iStack_24,1,param_1[0x7be]);
          FUN_005aa830(iStack_20 - iStack_24,param_1[0x7be]);
        }
        if (param_1[0x7c2] == 0) break;
      }
      iVar3 = FUN_006006d0(&local_40);
    }
  }
  if ((param_1[0x7bf] != 0) && (param_1[0x7be] != 0)) {
    if (*(double *)(param_1 + 0x7c8) == _DAT_0064a668) {
      FUN_005c44f0(0,0);
    }
    if ((_DAT_0064a738 <= ABS(*(double *)(param_1 + 0x7c6))) || (param_1[0x7c4] == 0)) {
      piVar5 = &iStack_44;
      uVar2 = __ftol(piVar5);
      iVar3 = FUN_005c4320(uVar2,piVar5);
      FUN_005c44f0(0,0);
      if (iStack_44 < iVar3) {
        fStack_48 = 0.0;
      }
      else if ((float)iVar3 <= (float)*(double *)(param_1 + 0x7c8)) {
        if (*(double *)(param_1 + 0x7c8) <= (double)iStack_44) {
          if (iStack_44 == iVar3) {
            fStack_48 = 0.0;
          }
          else {
            fStack_48 = ((float)*(double *)(param_1 + 0x7c8) - (float)iVar3) /
                        (float)(iStack_44 - iVar3);
          }
        }
        else {
          fStack_48 = 1.0;
        }
      }
      else {
        fStack_48 = 0.0;
      }
      FUN_005c44f0(1,fStack_48);
      dVar1 = *(double *)(param_1 + 0x2e4) * *(double *)(param_1 + 0x7c6) * _DAT_0064a720 +
              *(double *)(param_1 + 0x7c8);
    }
    else {
      piVar5 = &iStack_44;
      uVar2 = __ftol(piVar5);
      iVar3 = FUN_005c4320(uVar2,piVar5);
      FUN_005c44f0(0,0);
      if (param_1[0x7c4] < 1) {
        dVar1 = (double)(iVar3 + -1);
      }
      else {
        dVar1 = (double)(iStack_44 + 1);
      }
    }
    *(double *)(param_1 + 0x7c8) = dVar1;
    param_1[0x7c4] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006022b0();
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}

